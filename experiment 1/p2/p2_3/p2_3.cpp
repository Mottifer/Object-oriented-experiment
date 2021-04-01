#include<iostream>
#include<iomanip>
using namespace std;

void fun(double F){
	double C=5.0/9.0*(F-32);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<"相应的摄氏温度C为:"<<C;
}
int main(){
	double F;
	cout<<"请输入华氏温度F为："<<endl;
	cin>>F;
	fun(F);
	return 0;
}
