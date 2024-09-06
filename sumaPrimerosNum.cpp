#include <iostream>
using namespace std;

int sum(int);

int main() {
	int num;
	cout<<"Suma de los 'n' primeros numeros\ningrese el valor de 'n': "; cin>>num;
	cout<<sum(num);
}

int sum(int num) {
	if (num==1){
		return 1;
	} else {
		return num+sum(num-1);
	}
}