#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,i,sum=0;
	cout<<"Enter the number : ";
	cin>>n;
	for(i=0;i<=n;i++){
	if (i%2==0){
		cout<<i<<" ";
		sum=sum+i;
		}
	}cout<<"The sum of even number is "<<"= "<<sum;
	return 0;
}