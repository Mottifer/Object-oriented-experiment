#include<iostream>
using namespace std;
int main(){
	int n,accum=0;
	cout<<"请输入一个整数："<<endl;
	cin>>n;
	do{
		cout<<n%10<<" ";
		accum+=n%10;
		n/=10;
	}while(n/10!=0);
	cout<<n;
	cout<<endl<<"各位数和为："<<accum+n;
	
	return 0;
}

// (1)设计一个程序，输入一个整数，输出组成该整数的各位数字，并求出它们的和。
