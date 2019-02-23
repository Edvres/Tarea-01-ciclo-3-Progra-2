//TAREA HECHA POR EDWIN ELIAS VALLADARES PORTILLO VP18007
//PROGRMACION 2 CICLO 3
//EJERCICIO 02 (MULTIPLICAR UN VALOR POR 10)
//TAREA O1

#include <iostream>//Libreria para entrada y salida de datos
#include <windows.h>//Libreria que contiene las declaraciones de todas las funciones de la biblioteca Windows API,
#include <cstdlib>//Libreria con gestión de memoria dinámica, control de procesos y otras
#include <math.h>//Libreria para problemas matematicos
#include <fstream>//Uso de ficheros
#include <stdlib.h>//para gestión de memoria dinámica, control de procesos y otras

using namespace std;

int main() {
	int a, b;
	
	system ("color b0");//El cambio de color
	cout << "\t........................................................................."<<endl;
	cout << "\t.                                                                       ."<<endl;
	cout << "\t.Ingrese el numero que quiere mulpitplicar por 10:  "<<endl;
	cout <<"\t. "; cin>>a;
	cout << "\t.                                                                       ."<<endl;
	cout << "\t........................................................................."<<endl;
	b = a * 10;//La multiplicacion
	cout << "\t.                                                                       ."<<endl;
	cout << "\t.El resultado es:  "<<b<<endl;
	cout << "\t.                                                                       ."<<endl;
	cout << "\t........................................................................."<<endl;
	return 0;
}

