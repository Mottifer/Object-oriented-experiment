#include<iostream>
using namespace std;
int main(){
	char x='a';	//A
	int y;
	y=x;
	cout<<"x="<<x<<'\n';
	cout<<"y="<<y<<endl;
	return 0;
}

/*
思考：	1）将A行改为：char x= '\400'; 运行结果如何？
		2）将A行改为：signed char x=250; 运行结果如何？
		3）将A行改为：unsigned char x=250; 运行结果如何？


1)  '\400'	表示八进制
	'\x'	十六进制 
	转换成十进制应<=255（8位二进制）
	
2）	 
