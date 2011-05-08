class Punto {
	
		double X;
		double Y;
		double Z;
		double M;
		
		public:
		//per lista concatenata
		Punto* next;
	
		//costruttori
		Punto(); 
		Punto(double x, double y, double m);
		Punto(double x, double y, double z, double m);
		//distruttore
		~Punto();
		double getx(){return X;};
		double gety(){return Y;};
		double getz(){return Z;};
		double getm(){return M;};
		
		void setthings(double x, double y, double z, double m);	
		double distance_0();
		double distancefrom(Punto& p);
		void centrodimassa(Punto *p, int n);
		};
	