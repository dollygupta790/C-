#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rev(int n){
	if(n<10){
		return n;
	}
	else{
		cout<<n%10;
		return rev(n/10);
	//	return rev(n)
	}
}
int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;
	cout<<"The reversed number :";
	cout<<rev(a);
}