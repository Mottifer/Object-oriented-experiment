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
//�������г�������6��4������4��6ʱ���������ֱ���ʲô��

//˼�����ó�����A����ʵ��ʲô���ܣ���û����������ʵ�ִ˹��ܣ�