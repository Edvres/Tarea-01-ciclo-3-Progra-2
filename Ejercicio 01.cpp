//TAREA HECHA POR EDWIN ELIAS VALLADARES PORTILLO VP18007
//PROGRMACION 2 CICLO 3
//EJERCICIO 01 (INTERCAMBIO DE POSICION DE MEMORIA CUANDO UN NUMERO ESN MAYOR)
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
	cout << "\t.Ingrese el primer valor que tiene la posicion de memoria de:  "<<&a<<endl;//Aca esta el espacio de memoria de esa variable
	cout <<"\t.: "; cin>>a;
	cout << "\t.Ingrese el segundo valor que tiene la posicion de memoria de: "<<&b<<endl;//Aca esta el espacio de memoria de esa variable
	cout <<"\t.: "; cin>>b;
	cout << "\t.                                                                       ."<<endl;
	cout << "\t........................................................................."<<endl;
	

	if (a > b){//Para cuando el primer numero es mayor se cambian la posicion de valores
		cout << "\t.                                                                       ."<<endl;
		cout << "\t.El primer numero  es mayor por eso se almacena en: "<<&b<<endl;
		cout << "\t.El segundo numero es menor por eso se almacena en: "<<&a<<endl;
		cout << "\t........................................................................."<<endl;
	}
	else {//Cuando el segundo es mayor no pasa nada
		cout << "\t.                                                                       ."<<endl;
		cout << "\t.El segundo numero es mayor que el primero por eso no cambia de posicion."<<endl;
		cout << "\t........................................................................."<<endl;
	}
	return 0;
}
