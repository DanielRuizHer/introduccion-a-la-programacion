#include<iostream>
using namespace std;
int main(){
	
	char letras[5];
	
	letras[0] = 'g';
	letras[1] = 'b';
	letras[2] = 'v';
	letras[3] = 'h';
	letras[4] = 'n';
	/*
	cout<<"letras[0]: "<<letras[0]<<endl;
	cout<<"letras[1]: "<<letras[1]<<endl;
	cout<<"letras[2]: "<<letras[2]<<endl;
	cout<<"letras[3]: "<<letras[3]<<endl;
	cout<<"letras[4]: "<<letras[4]<<endl;
	*/
	for(int i = 0; i <= 4; i++){
	
		cout<<"letras["<<i<<"]"<<letras[i]<<endl;
	}
	return 0;
}
