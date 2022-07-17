#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2;
	cout<<"Enter the size of array 1 : ";
	cin>>n1;
	int arr1[n1];
	cout<<"Enter the elments in array1 : ";
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n1;i++){
		cout<<arr1[i]<<" ";
		s.insert(arr1[i]);
	}
	cout<<"\n";
	
	cout<<"Enter the size of array 2 : ";
	cin>>n2;
	int arr2[n2];
	cout<<"Enter the elments in array 2 : ";
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
		s.insert(arr2[i]);
	}
	
  
  return 0;
	
}