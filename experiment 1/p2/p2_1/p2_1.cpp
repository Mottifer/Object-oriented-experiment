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
˼����	1����A�и�Ϊ��char x= '\400'; ���н����Σ�
		2����A�и�Ϊ��signed char x=250; ���н����Σ�
		3����A�и�Ϊ��unsigned char x=250; ���н����Σ�


1)  '\400'	��ʾ�˽���
	'\x'	ʮ������ 
	ת����ʮ����Ӧ<=255��8λ�����ƣ�
	
2��	 
