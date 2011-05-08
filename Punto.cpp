#include <iostream>
#include "Punto.cc"
#include <fstream>

using namespace std;

int main() {
	int i=0;
	double x=0,y=0,z=0,m=0;
	{	//uso del blocco per distruggere l'oggetto ifile al termine
		ifstream ifile("punti_mat.dat");
		while (ifile>>x>>y>>z>>m) {i++;} //determina la grandezza dell'array
		//i è la grandezza dell'array -1, ovvero massimo indice
		}
	Punto* punti=NULL;	//inizializza array dinamico
	punti = new Punto[i];
	ifstream ifile("punti_mat.dat"); 
	
	for(int j=0;j<=i;j++) { //riempiamo l'array
		ifile>>x>>y>>z>>m;
		punti[j].setthings(x,y,z,m);
	}
	
	Punto cm; //genera il centro di massa, inizializzato a 0
	cm.centrodimassa(punti,i); //cm diventa centro di massa dell'array punti
	cout<<"Centro di massa: ("<<cm.getx()<<", "<<cm.gety()<<", "<<cm.getz()<<") con massa di "
		<<cm.getm()<<"."<<endl;
	delete [] punti; //eliminiamo l'array dinamico
	punti=NULL;
	return 0;
	}
