#include<iostream>
using namespace std;
int main(){
	int a[100];
	int i, b, n;
	cout<<"enter the no. of elements ";
	cin>>b;
	cout<<"enter elements ";
	for(i = 0; i < b; i++){
		cin>>a[i];
	}
	cout<<"write no. you want ";
	cin>>n;
	for(i = 0; i < b; i++){
		if(a[i] == n)
		{cout<<"the no. is present";
		return 0;
		}
	
	}cout<<"no. is not there";
	return 0;
}
