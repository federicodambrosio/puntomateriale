#ifndef PUNTO_HH_
#define PUNTO_HH_
#include <iostream>
using namespace std;

class Punto {
	
private:
		double X;
		double Y;
		double Z;
		
		
public:
		
	
		//costruttori
		Punto(); 
		Punto(double x, double y);
		Punto(double x, double y, double z);
		//distruttore
		~Punto();
		double x(){return X;};
		double y(){return Y;};
		double z(){return Z;};
		
		double distance_0();
		double distancefrom(Punto& p);
	
		friend ostream& operator<<(ostream& o, Punto& p);
		
		};
	
#endif