#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of mat : ";
	cin>>n;
	int a[n][n];
	cout<<"Enter the elements in mat : ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"The transpose mat is : "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}