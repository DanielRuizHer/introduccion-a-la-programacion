#include<iostream>

using namespace std;

/*int sumaPorValor(int a, int b){
a++;
return a + b;	
}*/
void sumaPorReferencia(int *a, int *b){
	*a = *a + 2;
	*b = *b + 3;
	cout<<"a + b: "<<*a + *b<<endl;
}

int main(){
/*int numero1 = 3, numero2 = 5;
	cout<<"resultado: "<<sumaPorValor(numero1, numero2)<<endl;
	cout<<"numero: "<<numero1<<endl;*/
	int numero1 = 3, numero = 5;
	sumaPorReferencia (&numero1, &numero2);
	cout<<"numero1: "<<numero1<<endl;
	cout<<"numero2: "<<numero2<<endl;
	
	return 0;
}
