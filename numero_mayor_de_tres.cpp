#include <iostream>
using namespace std;

int main(){
int a = 2, b = 5, c = 1;
if (a>=b && a>=c){
	cout<<a<<endl;
} else if (b>=a && b>=c){
	cout<<b<<endl;
} else {
	cout<<c<<endl;
}


return 0;
}
