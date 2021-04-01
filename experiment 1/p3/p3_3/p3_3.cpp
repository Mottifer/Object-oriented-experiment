#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"请输入三角形的三条边:";
	double a,b,c;
	cin>>a>>b>>c;
	if(a+b>c||b+c>a||a+c>b){
		
		if(a==b&&b==c&&a==c)
			cout<<"该三角形为等边三角形"<<endl;
		else if(a==b||a==c||b==c)
			cout<<"该三角形为等腰三角形"<<endl;
		else
			cout<<"该三角形为普通三角形"<<endl;
	} 
	else
		cout<<"这三条边无法构成三角形";
	return 0;
}

/*
编写程序，输入三角形三边 a、b、c，判断a、b、c能否构成三角形，若不能则输出相应的提示信息，
若能构成三角形，则判断组成的是等边、等腰（含等腰直角）、直角还是一般三角形。要求：
1) 输入一组数据3，4，8，观察程序运行结果。
2) 另外再输入几组数据进行测试，如：3，4，5；  3，3，3；  3，3，5

*/
