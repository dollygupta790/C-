#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int temp=n,a=0;
	while (temp!=0){
		a=a*10;
		a=a+temp%10;
		temp=temp/10;
		
		}
	if(n==a){
		cout<<"It is a palidrome";
	}
	else{
		cout<<"It is not a plaidrome ";
	}

	return 0;
}