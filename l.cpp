#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of mat :" ;
	cin>>n;
	cout<<"Enter the elements in mat1 : ";
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements in mat2 : ";
	int b[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	int c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	cout<<"The result mat is : "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return  0;
	
}