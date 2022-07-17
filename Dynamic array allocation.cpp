#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int *p,i,n;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter the elements in array : ";
	p=new int [n];
	for(i=0;i<n;i++){
		cin>>p[i];
	}
	cout<<"The elments of array :";
	for(i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
}