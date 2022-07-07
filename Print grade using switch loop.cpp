#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int marks;
	cout<<"Enter the marks ";
	cin>>marks;
	marks=marks/10;
	switch(marks){
		case(10):{
			cout<<"A";
			break;
		}
		case(9):{
			cout<<"A";
			break;
		}
		case(8):{
			cout<<"B";
			break;
		}
		case(7):{
			cout<<"C";
			break;
		}
		default:
			cout<<"FAIL";
	}
	return 0;
}