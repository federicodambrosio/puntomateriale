/*
 *  puntomat.hh
 *  Punto
 *
 *  Created by Federico D'Ambrosio on 09/05/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PUNTOMAT_HH_
#define PUNTOMAT_HH_

#include "Punto.cc"

class Puntomat : public Punto {
private:

	double M; //rappresenta la massa
	
public:
	//costruttori
	Puntomat();
	Puntomat(double x,double y,double m);
	Puntomat(double x,double y,double z,double m);
	
	~Puntomat(){}
	
	double m(){return M;}
	
	
	friend Puntomat operator+(Puntomat& p, Puntomat& q); //somma di punti materiali, restituisce il loro baricentro
	friend ostream& operator<<(ostream& o, Puntomat& p);
	
};

#endif
