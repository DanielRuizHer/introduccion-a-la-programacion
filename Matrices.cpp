#include<iostream>

using namespace std;

int main(){
/*Creamos una matriz.
//int matriz[3][3];
//matriz[0][0] = 9;//Metemos información a la matriz.
//cout<<matriz[0][0]<<endl;//Sacamos la información de la matriz.
for(int i = 0; i < 3; i++){
	for(int j = 0; j < 3; j++){
		matriz[i][j] = 1;
		
			}
}*/

int matriz [3][3];
for (int i = 0; i < 3; i++){
	for(int j = 0; j < 3; j++){
		matriz[i][j] = 1;
		cout<<matriz[i][j];
		
	}
	cout<<endl;
}
return 0;
}
