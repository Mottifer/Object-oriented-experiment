#include<iostream>
#include<iomanip>
using namespace std;

void fun(double F){
	double C=5.0/9.0*(F-32);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<"��Ӧ�������¶�CΪ:"<<C;
}
int main(){
	double F;
	cout<<"�����뻪���¶�FΪ��"<<endl;
	cin>>F;
	fun(F);
	return 0;
}
