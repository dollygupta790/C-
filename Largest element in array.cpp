#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Size the array : ";
	int n;
	cin>>n;
	cout<<"Enter the elements in array : ";
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	} 
	int largest =arr[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]>largest){
			largest= arr[i][j];
			
			}
		}
	}
	cout<<"Largest Element in array : "<<largest<<endl;
	return 0;
}
