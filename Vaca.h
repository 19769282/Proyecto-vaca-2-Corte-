#include <iostream>
#include <cstdlib>
#include <cstdio>
#ifndef VACAS_H
#define VACAS_H

using namespace std;

class Vacas
{
	public:
		void setNombreV(string t);
		void setRazaV(string t);
		void setPesoV(float t);
		void setLitrosDiarios(float t);
		string getNombre();
		string getRaza();
		float getPeso();
		float getLitrosDiarios();
		
	private:
		string nombre;
		string raza;
		float peso;
		float litrosdiarios;
};

#endif
