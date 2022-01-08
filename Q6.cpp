#include<iostream>
using namespace std;
int main(){
	int a, b, c[5][5], d[5][5], e[5][5];
	cout<<"write the rows of matrix : ";
	cin>>a;
	cout<<"write the columns of matrix : ";
	cin>>b;
	cout<<"write the value of 1st matrix "<<endl;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cout<<"value of c"<<i + 1 << j + 1<<"\t";
			cin>>c[i][j];		}	}	cout<<endl;
	cout<<"write the value of 2nd matrix "<<endl;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cout<<"value of d"<<i + 1 << j + 1<<"\t";
			cin>>d[i][j];		}	}	cout<<endl;
	cout<<"sum of matrices "<<endl;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			e[i][j] = c[i][j] + d[i][j];
			cout<<e[i][j]<<"\t";
			if(j == b - 1){
				cout<<endl;
			}		}	}
	return 0;
}
