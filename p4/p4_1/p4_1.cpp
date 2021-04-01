#include<iostream>
using namespace std;

int factorial(int a){
	int m=1;
	for(int i=1;i<=a;i++){
		m*=i;
	}
	return m;
}

int main() {
	double e=1.0;
	int n=1;
	while(1.0/factorial(n)>1e-5){
		e+=1.0/factorial(n);
		n++;
	}
	cout<<e<<endl;
	cout<<n<<endl;
	return 0;
}

