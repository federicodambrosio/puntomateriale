#include <iostream>
#include "Punto.cc"
#include <fstream>

using namespace std;

int main() {
	int max=1;
	
	{	
		double x=0,y=0,z=0,m=0;
		//uso del blocco per distruggere l'oggetto ifile al termine
		ifstream ifile("punti_mat.dat");
		while (ifile>>x>>y>>z>>m) {max++;} //determina la grandezza dell'array
		}
	
	Punto *first=NULL, *last=NULL, *p;
	ifstream ifile("punti_mat.dat");
	for (int i=0;i<max;i++){
		ifile>>x>>y>>z>>m;
		p=new Punto(x,y,z,m);
		if (p=last)
			last->next=p;
		last=p;
		if (!first) 
			first=p;
	}
	
		
	double X,Y,Z,M;
	{double sX=0, sY=0,sZ=0,sM=0;
		while(p) {
		
			sX+=p->getx()*p->getm();
			sY+=p->gety()*p->getm();
			sZ+=p->getz()*p->getm();
			sM+=p->getm();
			p=p->next;
		}
		X=sX/sM;
		Y=sY/sM;
		Z=sZ/sM;
		M=sM;
			
	}
	
	Punto cm(X,Y,Z,M);

	cout<<"Centro di massa: ("<<cm.getx()<<", "<<cm.gety()<<", "<<cm.getz()<<") con massa di "
		<<cm.getm()<<"."<<endl;

	p=first;
	while(p){
		Punto *p1;
		p1=p->next;
		delete p;
		p=p1;
	}
	
	return 0;
	}
