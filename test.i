%module test
%{
extern double var();
extern void   setVar(double v);
extern int    fact(int);
extern int    mod(int n, int m);
%}

extern double var();
extern void   setVar(double v);
extern int    fact(int);
extern int    mod(int n, int m);