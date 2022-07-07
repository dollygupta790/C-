#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array :";
	cin>>n;
	int arr[n],i;
	cout<<"Enter the elements into array : ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The elements of array : ";
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}