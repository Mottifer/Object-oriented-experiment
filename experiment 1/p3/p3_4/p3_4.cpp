#include<iostream>
using namespace std;
int main() {
	double weight,distance;
	int price, add1, add2;
	cout<<"�������ʼİ���������(kg):";
	cin>>weight;
	cout<<endl<<"�������ʼľ���(km):";
	cin>>distance;
	if (weight < 0) {
		cout << "�����������������" << endl;
	}
	else if (weight <= 15) {
		price = 5;
	}
	else if (weight <= 30) {
		price = 9;
	}
	else if (weight <= 45) {
		price = 12;
	}
	else if (weight <= 60) {
		add1 = distance / 1000;
		price = 14 + add1;
	}
	else if (weight > 60) {
		add2 = distance / 1000;
		price = 15 + add2 * 2;
	}

	cout << "�ʼķ���Ϊ:" << price << "Ԫ";
	return 0;
}

