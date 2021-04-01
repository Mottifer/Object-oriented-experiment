#include<iostream>
using namespace std;
double x1=0,x2=3.0,x3;
	
//一元二次方程 
double fun(double x){
	return x*x-x-2;
}
	//主函数 
int main(){
	if(fun(x1)==0)
		cout<<"f(x)=0的实根为"<<x1<<endl;
	if(fun(x2)==0)
		cout<<"f(x)=0的实根为"<<x2<<endl; 
	if(fun(x1)*fun(x2)>0)
		cout<<"f(x)=0在[0,3]区间中没有实根"<<endl;
	
	if(fun(x1)*fun(x2)<0){
		cout<<"f(x)=0在[0,3]区间中有一个实根"<<endl;
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
	cout<<"根在"<<x1<<"和"<<x2<<"之间";
	return 0;
}

