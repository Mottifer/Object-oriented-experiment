#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "input a,b:";
	cin >> a >> b;
	
	if (a < b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	cout << a << ',' << b << endl;
	
	return 0;
}
//运行下列程序，输入6、4和输入4、6时，输出结果分别是什么？

//思考：该程序中A行能实现什么功能？有没有其他方法实现此功能？