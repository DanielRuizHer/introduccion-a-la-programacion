#include<iostream>

using namespace std;

int main(){
	
	/*
	Estructura de un if
	
	if ([operacion logica]){
	cuerpo del if.
}

if ([operacion logica]){
	cuerpo del if.
} else{

}

if (){
} else if(){
} else if(){
} else {
}

*/

int edad = 60;

if (edad >= 18){
	if (edad<= 59){
	cout<<"eres mayor de edad"<<endl;
	} else{
		cout<<"eres de la tercera edad"<<endl;
		
	}
	
/*} else {
	cout<<"eres menor de edad"<<endl;
}
if (edad >= 18 && edad <= 59){
	cout<<"mayor de edad"<<endl;
	}else if (edad >= 18 && edad >= 60){
		cout<<"tercera edad"<<endl;
	} else {
		cout<<"menor de edad"<<endl;
	}*/
	

int lunes = 1,
martes = 2,
miercoles = 3,
jueves = 4,
viernes = 5,
sabado = 6,
domingo = 7;

int dia = 5;
if (dia <= 7 && dia >= 1){
	if (dia == 1){
		cout<<"lunes"<<endl;
	}	}
}


	return 0;
	
}
