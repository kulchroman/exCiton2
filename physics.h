#ifndef PHYSICS_H
#define PHYSICS_H
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
class physics
{
public:
    int n;
    int iteration;
    double alpha;
    double a ; // // Область локалізації (m)
    double h;
    double *E_for_table;
    double E;
    double m; //кг
    double q; //eV
    double e; //eV
    double xi; // eV коефіцієнт електронного споріднення матеріалу
    double field; //Напруженість поля (B/cm)
    double epsin_low; //діелектрична проникливість на низьких частотах
    double epsin_high ; //діелектрична проникливість на високих частотах
    double k; //eV
    double T;
    double nq;
    int teta;
    double *rez;
    physics *p;
    double hw;// eV енергія фонона

public:
    physics();
    void setValue() const;
    void getValue() const;
    void energy();
    int NQ();
    double kq (double E);
    double f_lo_minus (double E);
    double f_lo_plus (double E);
    double lambda(double E);
    double fl (double r );
    double f2 (double r);
    double simpson1 (double a, double b);
    double simpson2 (double a, double b);
    double simpson (double a, double b,double (physics::*pointer)(double));
};

#endif // PHYSICS_H
