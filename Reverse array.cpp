#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array :";
	cin>>n;
	int arr[n];
	cout<<"Enter the elments in array :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0,j=n-1;i<j;i++,j--){
		swap(arr[i],arr[j]);
	}
	for(int i=0;i<n;i++){
		//cout<<"The reversed array :";
		cout<<arr[i]<<" ";
	}
	return 0;
}