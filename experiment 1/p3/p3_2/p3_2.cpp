#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"请输入一个数据：";
	double n;
	cin>>n;
	if(n>0)
		cout<<"1";
	else if(n=0)
		cout<<"0";
	else if(n<0)
		cout<<"-1"; 
	return 0;
}
