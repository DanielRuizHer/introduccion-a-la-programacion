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
	

	return 0;
	
}
