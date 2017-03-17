#include <cstdlib>
#include <cstdio>
#include "Vaca.h"

using namespace std;

void Vacas::setNombreV(string t){
	this->nombre=t;
}
void Vacas::setRazaV(string t){
	this->raza=t;
}
void Vacas::setPesoV(float t){
	this->peso=t;
}
void Vacas::setLitrosDiarios(float t){
	this->litrosdiarios=t;
}
string Vacas::getNombre(){
	return this->nombre;
}
string Vacas::getRaza(){
	return this->raza;
}
float Vacas::getPeso(){
	return this->peso;
}
float Vacas::getLitrosDiarios(){
	return this->litrosdiarios;
}
