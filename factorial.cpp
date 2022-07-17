#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int prime(int n,int i){
	if(n==i){
		return 1;
	}
	if(n%i==0){
		return 0;
	}
	return prime(n,i-1);
}
int main(){
	int num,p;
	cout<<"Enter any number : ";
	cin>>num;
	p=prime(num,num/2);
	if(p==1){
		cout<<num<<" is prime number .";
	}
	else{
	cout<<num<<" is not a prime number . ";
	}
}

