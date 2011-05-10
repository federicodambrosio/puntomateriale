/*
 *  puntomat.cc
 *  Punto
 *
 *  Created by Federico D'Ambrosio on 09/05/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef PUNTOMAT_CC_
#define PUNTOMAT_CC_
#include "puntomat.hh"
#include <iostream>

Puntomat::Puntomat(){
	Punto();
	M=0;
}

Puntomat::Puntomat(double x,double y,double m) : Punto(x,y){
    M=m;
}

Puntomat::Puntomat(double x,double y, double z,double m) : Punto(x,y,z) {
    M=m;
}

Puntomat operator+(Puntomat& p, Puntomat& q){
	double x,y,z,m;
	x=q.x()*q.m()+p.x()*p.m();
	y=q.y()*q.m()+p.y()*p.m();
	z=q.z()*q.m()+p.z()*p.m();
	m=q.m()+p.m();
	
	x=x/m;
	y=y/m;
	z=z/m;
	
	Puntomat result(x,y,z,m);
	return result;
	
}

ostream& operator<<(ostream& o, Puntomat& p){
	o<<"("<<p.x()<<","<<p.y()<<","<<p.z()<<","<<p.m()<<")";
	return o;
}

#endif