#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	for (int i=n;i>=1;i--){
		for(int j=n; j>=i; j--){
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}