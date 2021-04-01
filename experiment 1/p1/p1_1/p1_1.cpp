#include<iostream>	//预处理命令，包含输入输出流库文件
#include<cmath>		//包含数学函数库文件
using namespace std;	//使用标准命名空间
int main(void) {		//函数首部
	int a, b, c;
	double s, p;
	cout << "\n请输入三角形的三边长:";	//为下面的输入显示提示信息
	cin >> a >> b >> c;
	p = (a + b + c) / 2.0;	//处理	A行
	s = sqrt(p * (p - a) * (p - b) * (p - c));	//计算面积，sqrt()为平方根函数
	cout << "三角形的三条边长为:" << a << '\t' << b << '\t' << c << endl;
	cout << "三角形的面积为:" << s << '\n';
	return 0;
}

/*
思考：	1）如果将A行中的2.0改为 2，结果会是什么？
 		2）如果输入的三边边长是实数，如何修改程序？
*/
