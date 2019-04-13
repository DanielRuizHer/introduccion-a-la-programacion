#include<iostream>

using namespace std;

int main(){
	//Creaci{on de una variable normal.
	int edad = 33;
	//Creamos un puntero.
	int*punteroEdad = &edad;
	cout<<"edad: "<<edad<<endl;
	cout<<"&edad: "<<&edad<<endl;
	cout<<"punteroEdad: "<<punteroEdad<<endl;
	cout<<"*punteroEdad: "<<*punteroEdad<<endl;
	cout<<"&punteroEdad: "<<&punteroEdad<<endl;
	
	
return 0;
}
