#include "physics.h"

physics::physics()
{
    n=1000;             //масив данних
    iteration=500;     //кількість ітерацій

    alpha = 0.12E10;
    a =16.4E-10;   // // Область локалізації (m)
    h= 1.05E-34;
    E=0.1;
    m=9.1E-31; //кг
    q=1.6E-19; //eV
    e=-1.6E-19; //eV
    xi = 0.7; // eV коефіцієнт електронного споріднення матеріалу
    field = 5E7; //Напруженість поля (B/cm)
    epsin_low = 6.59; //діелектрична проникливість на низьких частотах
    epsin_high = 2.62; //діелектрична проникливість на високих частотах
    k=8.62E-5; //eV
    T=300;
    hw=(8.15E-3);//*1.05E-34; // eV енергія фонона
    teta=90;
}
int physics::NQ ()
{
         return pow(exp(hw/(k*T))-1,-1);

}

double physics::kq (double E)
{
     return m*hw*pow(e,2)*((1/epsin_low)-(1/epsin_high))/(h*sqrt(2*m*E));
}

double physics::f_lo_minus (double E)
{

      return kq(E)*nq * log(( 1 +sqrt( 1 +(hw/E)))/(sqrt( 1 +(hw/E))- 1));
}

double physics::f_lo_plus (double E)
{

     return kq(E)*(nq+1 )*log(( 1 +sqrt( 1 +(hw/E)))/( 1 -sqrt( 1 -(hw/E))));
}

double physics::lambda(double E)
{

      return pow(sqrt(m/(2.0*E))*(fl (E)+f2(E)),-1);
}

double physics::fl (double r )
{
     return r*r*sin(2*sqrt(2*m*q*E)*(r-a)/h) ;
}

double physics::f2 (double r)
{
    return ( r*(1+alpha*r)*exp(-alpha*r)*( sin(pow(2*m*q*E,0.5)*r/h)-r*sin((2*a-r)*pow(2*m*q*E,0.5)/h)/(2*a-r)));
}

double physics::simpson1 (double a, double b)
{
     double h=(b-a)/(2*500),res=(h/6)*(fl(a)+fl(b));
     double x=a;
     while (x<b)
     {
         res+=(h/6)*(2*fl(x));
         res+=(h/6)*(4 *fl(x));
          x+=h;
     }
         return res-(h/6)*2*fl(b);
}

double physics::simpson2 (double a, double b)
{
     double h=(b-a)/(2*500),res=(h/6)*(f2(a)+f2(b));
     double x=a;
     while (x<b)
     {
         res+=(h/6)*(2*f2(x));
         res+=(h/6)*(4 *f2(x));
          x+=h;
     }
         return res-(h/6)*2*f2(b);
}

void physics::energy()
{
    const double aa=0,bb=a;
    FILE *F1,*F2;

    //typedef double (phizics::*pointer)(double);
    F1 = fopen ("F1.txt","w+b");
    F2 = fopen ("F2.txt","w+b");

    rez = (double*) malloc(n*sizeof(double));
    E_for_table=new double[n];
    int i;
    nq=NQ();

    double sum_lambda=0;

    for (i=0;i<n;i++)
    {
        rez[i] = pow( ( (2.0*pow(a,3)/3.0) - (h/pow(2*m*q*E,0.5))*simpson1 (aa,bb) ),-1)*(2*pow(alpha,3)*h*h/(7*m*q*E))*pow(simpson2(aa,bb),2);
        fprintf(F2 ,"%5.51f\t %2.2f\n", rez[i],E);

        fprintf(F1 ,"%5.51f\t %2.2f\n", 1/lambda(E),E);
        //rez[i]+=e*field*fabs(1/lambda(E))*cos(360/teta*2*M_PI)-hw; //cos(teta)=1

        //rez[i]=cos(teta*2*M_PI/360);
        //fprintf(F1 ,"%2.2f\t %2.2f\n", rez[i],E);
        sum_lambda=lambda(E);
        E+=0.01;
        E_for_table[i]=E;

    }

        fclose(F1);
        fclose(F2);  //free (rez);
        E=0.1;

}
