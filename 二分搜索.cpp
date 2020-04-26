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
	return -1;//未找到x
}


int main(){
	int a[10];
	for(int i = 0; i < 10; i++)
	a[i] = i+1;
	cout<<"已经按大小定义一个1~10的数组"<<endl;
	int searchNum = 5;
	int place = BinarySearch(a,searchNum,10);
	if(place+1) cout<<"搜索成功，元素"<<searchNum<<"位置在"<<place+1<<"位"<<endl;
	else cout<<"搜索失败，查无元素"<<searchNum<<endl;
	searchNum = 11;
	place = BinarySearch(a,searchNum,10); 
	if(place+1) cout<<"搜索成功，元素"<<searchNum<<"位置在"<<place+1<<"位"<<endl;
	else cout<<"搜索失败，查无元素"<<searchNum<<endl;
}
