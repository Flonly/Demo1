#include<iostream>
using namespace std;

//this is the test 
//this is the test 
//this is the test 
//this is the test 
//this is the test 
//this is the test 
//this is the test 
//this is the test 

int BinarySearch(int a[],const int &x,int n)
{
	int left = 0;
	int right = n-1;
	while(left<=right){
		int middle=(left+right)/2;
		if(x == a[middle])
		return middle;
		if(x > a[middle])
		left = middle + 1;
		else
		right = middle - 1;
	}
	return -1;//δ�ҵ�x
}


int main(){
	int a[10];
	for(int i = 0; i < 10; i++)
	a[i] = i+1;
	cout<<"�Ѿ�����С����һ��1~10������"<<endl;
	int searchNum = 5;
	int place = BinarySearch(a,searchNum,10);
	if(place+1) cout<<"�����ɹ���Ԫ��"<<searchNum<<"λ����"<<place+1<<"λ"<<endl;
	else cout<<"����ʧ�ܣ�����Ԫ��"<<searchNum<<endl;
	searchNum = 11;
	place = BinarySearch(a,searchNum,10); 
	if(place+1) cout<<"�����ɹ���Ԫ��"<<searchNum<<"λ����"<<place+1<<"λ"<<endl;
	else cout<<"����ʧ�ܣ�����Ԫ��"<<searchNum<<endl;
}
