#include <iostream>
using namespace std;

int C(int,int);

int main() {
	int n,m;
	cout<<"Combinatoria C(m,n)\nIngrese los valores de 'm' y 'n' respectivamente: "<<endl; cin>>n>>m;
	cout<<C(n,m);
}

int C(int n,int m) {
	if (n==m){
		return 1;
	} else if (m==1){
		return n;
	} else {
		return C(n-1,m-1)+C(n-1,m);
	}
}