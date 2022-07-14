#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int a;
	cout<<"The value of a : ";
	cin>>a;
	int b;
	cout<<"The value of b : ";
	cin>>b;
	int n;
	cout<<"Enter the operation number :";
	cin>>n;
	switch(n){
		case 1:
			cout<<a+b;
			break;
		case 2:
		    cout<<a-b;
		    break;
		case 3:
		    cout<<a*b;
		    break;
		case 4:
		    cout<<a%b;
		    break;
		default:
		    cout<<"Invalid Opeartion";
			break;		    
	}
	return 0;
}