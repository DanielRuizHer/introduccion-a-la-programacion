#include<iostream>

using namespace std;
int main(){
	
	/*
	EJERCICIOS:
	a) B < C
	b) C / B == -10
	c) C / B == -4
	d) (A+B == 8) && (A-B == 2)
	e) (A+B == 8 || (A-B == 6)
	*/
	
	const int A = 23, B = 45, C = 78;
	bool resultado;
	cout<<"A: "<<A<<"B: "<<"C: "<<C<<endl;
	// a) B < C 
	resultado = B < C;
	cout<<"B < C: "<<resultado<<endl;
	
	//b) C / B == -10
	resultado = C / B == -10;
	cout<<"C / B == -10: "<<resultado<<endl;
	
	//c) C / B == -4
	resultado = C / B == -4;
	cout<<"C / B == -4: "<<resultado<<endl;
	
	//d)(A+B == 8) && (A-B == 2);
	resultado = (A+B == 8) && (A-B == 2)	;
	cout<<"(A+B == 8) && (A-B == 2): "<<resultado<<endl;
	
	//e) (A+B == 8) || (A-B == 6)
	resultado = (A+B == 8) || (A-B == 6);
	cout<<"(A+B == 8) || (A-B == 6): "<<resultado<<endl;
		
	return 0;
}
