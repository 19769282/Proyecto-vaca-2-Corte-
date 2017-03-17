#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <conio.h>
#include "Vaca.h"
#define USER "admin"
#define PASS "1234"
#define ENTER 13 
#define BACKSPACE 8

using namespace std;

int main(int argc, char** argv) {
	string usuario, password;
   int contador = 0;
   bool ingresa = false;
 
   do {
      system("cls");
      cout << "\t\t\tLOGIN DE USUARIO" << endl;
      cout << "\t\t\t----------------" << endl;
      cout << "\n\tUsuario: ";
      getline(cin, usuario);
 
 
      cout << "\tPassword: ";
      // getline(cin, password);
      char caracter;
      caracter = getch();
 
      password = "";
 
      while (caracter != ENTER) {
 
         if (caracter != BACKSPACE) {
	         password.push_back(caracter);
	         cout << "*";
 
			} else {
				if (password.length() > 0) {
					cout << "\b \b";
					password = password.substr(0, password.length() - 1);
				}
			}
 
			caracter = getch();
      }
 
 
      if (usuario == USER && password == PASS) {
         ingresa = true;
      } else {
         cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
         cin.get();
         contador++;
      }
   } while (ingresa == false && contador < 3);
 
   if (ingresa == false) {
      cout << "\n\tUsted no pudo ingresar al sistema" << endl;
   } else {
      cout << "\n\n\tBienvenido al sistema" << endl;
 
      // 
 
   }
	return 0;
}

void menu(void){
    cout<<"\n\t\t[    REGISTRO DE VACAS    ]\n";
    cout<<"\t\t----------------------------\n\n";
    cout<<" 1. REGISTRAR VACAS                           "<<endl;
    cout<<" 2. MOSTRAR VACAS                             "<<endl;
    cout<<" 3. MOSTRAR VACAS POR NOMBRE                  "<<endl;
    cout<<" 4. MOSTRAR VACAS POR RAZA                    "<<endl;
    cout<<" 5. MOSTRAR VACAS POR LITRO DE LECHE          "<<endl;
    cout<<" 6. SALIR                                     "<<endl;

    cout<<"\n Ingrese opcion : ";
}
