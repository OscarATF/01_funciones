#include <iostream>
using namespace std;

int sum(int[],int);

int main() {
	int tam=3;
	int Arreglo[tam]={20,2,3,4};
	cout<<"La suma de los elementos del arreglo es: ";
	cout<<sum(Arreglo,tam);
}

int sum(int A[],int n) { 
	if (n==0) {
		return A[n];
	} else {
		return A[n]+sum(A,n-1);
	}
}