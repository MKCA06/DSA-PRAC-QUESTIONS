#include<iostream>
using namespace std;
int main(){
	int n, a[10], temp, j;
	cout<<"write the no. of elements";
	cin>>n;
	cout<<"enter the elements";
	for(int i = 0; i < n; i++){
		cin>>a[i];
		cout<<endl;
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}  }	}
	for(int i = 0; i < n; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
