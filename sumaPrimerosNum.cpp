#include <iostream>
using namespace std;

int sum(int);

int main() {
	int n=3;
	cout<<sum(n);
}

int sum(int num) {
	if (num==1){
		return 1;
	} else {
		return num+sum(num-1);
	}
}