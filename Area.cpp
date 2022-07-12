#include <iostream>
#include <bits/stdc++.h>
using namespace std;
float area(int a=0,int b=0,int c=0){
	if (a==1){
		return (b*b);
	}
	else if(a==2){
		return (b*c);
	}
	else{
		return (3.14*b*b);
	}
}
int main(){
	int a,b;
	a=2;
	b=3;
	float p=area(1,a);
	float p1=area(2,a,b);
	float p3=area(8,a);
	cout<<p<<" "<<p1<<" "<<p3;
}