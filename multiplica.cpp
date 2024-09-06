#include <iostream>
using namespace std;

int mult(int,int);

int main() {
	int a,b;
	cout<<"Multiplicacion de dos numeros\nIngrese el multiplicando: "; cin>>a;
	cout<<"Ingrese el multiplicador: "; cin>>b;
	cout<<"El resultado es: "<<mult(a,b);
}

int mult(int x,int y) {
		if (y==0) {
			return 0;
		} else {
			return x+mult(x,y-1);
		}
}