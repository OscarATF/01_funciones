#include <iostream>
using namespace std;

int fac(int);

int main() {
	int num;
	cout<<"Factorial de un numero\nIngrese un numero: "; cin>>num; 
	cout<<fac(num);
}

int fac(int n) {
	if (n==0) {
		return 1;
	} else {
		return n*fac(n-1);
	}
}
