//TAREA HECHA POR EDWIN ELIAS VALLADARES PORTILLO VP18007
//PROGRMACION 2 CICLO 3
//EJERCICIO 04 (SACAR AREA DE CUADRADO)
//TAREA O1

#include <iostream>//Libreria para entrada y salida de datos
#include <windows.h>//Libreria que contiene las declaraciones de todas las funciones de la biblioteca Windows API,
#include <cstdlib>//Libreria con gestión de memoria dinámica, control de procesos y otras
#include <math.h>//Libreria para problemas matematicos
#include <fstream>//Uso de ficheros
#include <stdlib.h>//para gestión de memoria dinámica, control de procesos y otras

using namespace std;

int main() {
	double b;
	double area = 0;
	cout << "\t........................................................................."<<endl;
	cout << "\t.                                                                       ."<<endl;
	cout << "\t.Ingrese la longuitud del cuadrado:  "<<endl;
	cout <<"\t. "; cin>>b;
	cout << "\t.                                                                       ."<<endl;
	area = pow(b, 2);
	cout << "\t. El area es: "<<area<<endl;
	return 0;
}


