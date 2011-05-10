#include <iostream>
#include "puntomat.cc"
#include <fstream>

using namespace std;

int main() {
	int max=0;
	double x=0,y=0,z=0,m=0;
	{	//uso del blocco per distruggere l'oggetto ifile al termine
		ifstream ifile("punti_mat.dat");
		while (ifile>>x>>y>>z>>m) {max++;} //determina la grandezza dell'array
		//i è la grandezza dell'array -1, ovvero massimo indice
	}
	
	//Puntomat* punti[max];	//inizializza array dinamico
	
	ifstream ifile("punti_mat.dat"); 
	Puntomat cm;
	for(int j=0;j<=max;j++) { //riempiamo l'array
		ifile>>x>>y>>z>>m;
        Puntomat p(x,y,z,m);
		//punti[j]=new Puntomat(x,y,z,m);
		cm=cm+p;
	}
	
	
	cout<<"Centro di massa: "<<cm<<"."<<endl;
	
	//delete punti[max]; //eliminiamo l'array dinamico
	
	return 0;
	
	}
