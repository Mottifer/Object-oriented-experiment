#include<iostream>
using namespace std;
double x1=0,x2=3.0,x3;
	
//һԪ���η��� 
double fun(double x){
	return x*x-x-2;
}
	//������ 
int main(){
	if(fun(x1)==0)
		cout<<"f(x)=0��ʵ��Ϊ"<<x1<<endl;
	if(fun(x2)==0)
		cout<<"f(x)=0��ʵ��Ϊ"<<x2<<endl; 
	if(fun(x1)*fun(x2)>0)
		cout<<"f(x)=0��[0,3]������û��ʵ��"<<endl;
	
	if(fun(x1)*fun(x2)<0){
		cout<<"f(x)=0��[0,3]��������һ��ʵ��"<<endl;
		while(x2-x1>1e-5){
			x3=(x1+x2)/2.0;
			double y1=fun(x1);
			double y2=fun(x2);
			double y3=fun(x3);
			if(y1*y3>0)
				x1=x3;
			else if(y2*y3>0)
				x2=x3;
		}
	}
	cout<<"����"<<x1<<"��"<<x2<<"֮��";
	return 0;
}

