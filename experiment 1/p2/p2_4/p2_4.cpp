#include<iostream>
#include<iomanip>
#define PAI 3.1415926
using namespace std;
void fun(double r,double h){
	double c_perimeter, c_area, surface_area, volume;
	c_perimeter=2*PAI*r;
	c_area=PAI*r*r;
	surface_area=2*PAI*r*r+c_perimeter*h;
	volume=c_area*h;
	cout<<"Բ�ܳ�Ϊ��"<<setiosflags(ios::fixed)<<setprecision(2)<<c_perimeter<<endl;
	cout<<"Բ���Ϊ��"<<setiosflags(ios::fixed)<<setprecision(2)<<c_area<<endl;
	cout<<"Բ�������Ϊ��"<<setiosflags(ios::fixed)<<setprecision(2)<<surface_area<<endl;
	cout<<"Բ�����Ϊ��"<<setiosflags(ios::fixed)<<setprecision(2)<<volume<<endl;
}

int main(){
	double r,h;
	cout<<"������Բ�İ뾶��";
	cin>>r;
	cout<<endl<<"������Բ���ĸߣ�";
	cin>>h;
	fun(r,h); 
	
	return 0;
}

