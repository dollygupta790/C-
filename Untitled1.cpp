#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	for (int i=0;i<n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			cout<<k+1;
		}
		cout<<"\n";
	}
	return 0;
}