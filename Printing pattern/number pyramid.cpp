#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n;
	cout<<"Enter the number :";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<" ";	
		}
		int k=i+1;
		for(int j=n-i;j<=n;j++){
			cout<<k<<" ";
			k++;
		}
		k=k-2;
		for(int j=0;j<i;j++){
			cout<<k<<" ";
			k--;
		}
		cout<<endl;
	}
	return 0;
}