#include<iostream>
using namespace std;
int main(){
	int n,accum=0;
	cout<<"������һ��������"<<endl;
	cin>>n;
	do{
		cout<<n%10<<" ";
		accum+=n%10;
		n/=10;
	}while(n/10!=0);
	cout<<n;
	cout<<endl<<"��λ����Ϊ��"<<accum+n;
	
	return 0;
}

// (1)���һ����������һ�������������ɸ������ĸ�λ���֣���������ǵĺ͡�
