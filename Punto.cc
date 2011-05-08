#include "Punto.hh"
#include <cmath>

Punto::Punto(){
	X=0;
	Y=0;
	Z=0;
	M=0;
	}

Punto::Punto(double X1, double Y1, double M1){
	X=X1;
	Y=Y1;
	M=M1;
	}
Punto::Punto(double x, double y, double z, double m){
	X=x;
	Y=y;
	Z=z;
	M=m;
	}
Punto::~Punto(){
	}

double Punto::distance_0() {
	return(sqrt(X*X+Y*Y+Z*Z));
	}
	
double Punto::distancefrom(Punto& p){
	return (sqrt((X-p.X)*(X-p.X)+(Y-p.Y)*(Y-p.Y)+(Z-p.Z)*(Z-p.Z)));
	}
	