#include<iostream>
using namespace std;
int main(){
	int n, a[10], temp;
	cout<<"write the no. of elements";
	cin>>n;
	cout<<"enter the elements";
	for(int i = 0; i < n; i++){
		cin>>a[i];       }
	cout<<endl;
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}		}
	}	for(int i = 0; i < n; i++){
		cout<<a[i]<<endl;
	}	return 0;
}
