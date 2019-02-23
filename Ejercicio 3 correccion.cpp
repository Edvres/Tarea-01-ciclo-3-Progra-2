//TAREA HECHA POR EDWIN ELIAS VALLADARES PORTILLO VP18007
//PROGRMACION 2 CICLO 3
//EJERCICIO 03 (DESARROLLAR UNA FUNCION DE TIPO ENTERA Y DOUBLE, PARA SACAR LA POTENCIA)
//TAREA O1

#include <iostream>//Libreria para entrada y salida de datos
#include <windows.h>//Libreria que contiene las declaraciones de todas las funciones de la biblioteca Windows API,
#include <cstdlib>//Libreria con gestión de memoria dinámica, control de procesos y otras
#include <math.h>//Libreria para problemas matematicos
#include <fstream>//Uso de ficheros
#include <stdlib.h>//para gestión de memoria dinámica, control de procesos y otras

using namespace std;

double Potencia(double, int);//Declaracion de la funcion

int main() {
	double b;//variable base de tipo double
	int p;//variable potencia de tipo entera
	system ("color b0");//El cambio de color
	cout << "\t........................................................................."<<endl;
	cout << "\t.                                                                       ."<<endl;
	cout << "\t.Ingrese el primer valor base:  "<<endl;
	cout <<"\t.: "; cin>>b;
	cout << "\t.Ingrese el segundo valor exponente: "<<endl;
	cout <<"\t.: "; cin>>p;
	cout << "\t.                                                                       ."<<endl;
	cout << "\t........................................................................."<<endl;
	cout << "\t. El resultado es: "<<Potencia(b,p)<<endl;
	return 0;
}
double Potencia(double c, int d){//Funcion 
	int pot;
	if ( d == 1){//Cuando la potencia sea 1
		pot = c;  
	}
	else{//Desarrollo de la potencia
		pot = c * Potencia(c,d-1);
	}
	return pot;
}
