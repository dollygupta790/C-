#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n ,sum=0;
	cout<<"Enter the numbers :";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<"Total sum of number is : "<<sum;
	return 0;
}