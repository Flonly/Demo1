#include<iostream>
using namespace std;

void Merge(int c[], int d[], int l, int m, int r){
	int i = l, j = m+1, k = 1;
	cout<<l<<" "<<m<<" "<<r<<" l m r"<<endl;
	while((i <= m) && ( j <= r)){
		if(c[i] <= c[j]) d[k++] = c[i++];
		else d[k++] = c[j++];
    }
	for(int i = 0; i < 5; i++) cout<<d[i]<<" ";
	cout<<"test1"<<endl;//3 5 4 1 2
		for (int q=j; q <= r; q++) d[k++] = c[q];
		for (int q=i; q <= m; q++) d[k++] = c[q];
	for(int i = 0; i < 5; i++) cout<<d[i]<<" ";
	cout<<"test2"<<endl;//3 5 4 1 2
	}
	
void MergePass(int x[], int y[], int s, int n){
	int i = 0;
	for(int i = 0; i < 5; i++) cout<<x[i]<<" ";
	cout<<"now"<<endl;
	for(int i = 0; i < 5; i++) cout<<y[i]<<" ";
	cout<<"now0"<<endl;
	while(i <= n-2*s){
		Merge(x, y, i, i+s-1, i+2*s-1);
		i = i+2*s;
	}
	for(int i = 0; i < 5; i++) cout<<y[i]<<" ";
	cout<<"now1"<<endl;
	if(i+s<n) Merge(x, y, i, i+s-1, n-1);
	else for(int j=i; j<=n-1; j++) y[j] = x[j];
	for(int i = 0; i < 5; i++) cout<<y[i]<<" ";
	cout<<"now2"<<endl;

}


void MergeSort(int a[], int n){
	int b[n];
	for(int i = 0; i < n; i++) b[i]=0;
	int s = 1;
    while(s<n){
		MergePass(a, b, s, n);
		s+=s;
		MergePass(b, a, s, n);
		s+=s; 
	}	
	
}




int main(){
	int a[5]={3,5,4,1,2};
	MergeSort(a,5);
	for(int i=0; i<5; i++)
	cout<<a[i]<<" ";
	return 0;
}
