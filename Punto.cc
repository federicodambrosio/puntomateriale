#ifndef PUNTO_CC_
#define PUNTO_CC_

#include "Punto.hh"
#include <cmath>

Punto::Punto(){
	X=0;
	Y=0;
	Z=0;
	}

Punto::Punto(double x, double y){
	X=x;
	Y=y;
	}
Punto::Punto(double x, double y, double z){
	X=x;
	Y=y;
	Z=z;
	}
Punto::~Punto(){
	}

double Punto::distance_0() {
	return(sqrt(X*X+Y*Y+Z*Z));
	}
	
double Punto::distancefrom(Punto& p){
	return (sqrt((X-p.X)*(X-p.X)+(Y-p.Y)*(Y-p.Y)+(Z-p.Z)*(Z-p.Z)));
	}
ostream& operator<<(ostream& o, Punto& p){
	o<<"("<<p.X<<","<<p.Y<<","<<p.Z<<")";
	return o;
}

#endif