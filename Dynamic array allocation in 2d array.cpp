#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int ** p;
	int i,r,c,j;
	cout<<"Enter the row number  : ";
	cin>>r;
	cout<<"Enter the column number  : ";
	cin>>c;
	p=new int * [r];
	for(i=0;i<r;i++){
		p[i]=new int [c];
		
	}
	cout<<"Enter the elements : ";
	for(i=0;i<r;i++){
		for (j=0;j<c;j++){
			cin>>p[i][j];
			//cout<<p[i][j];
		}
		cout<<"The elements are : ";
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
			cout<<p[i][j]<<" ";
			}
			cout<<endl;
		}
		for(i=0;i<r;i++){
			delete[] p[i];
		}
		delete[] p;
	}
	return 0;
	
}