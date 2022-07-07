#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[10],i,sum=0;
	cout<<"Enter the elments for array :";
	for(i=0;i<10;i++){
		cin>>arr[i];
	}
	for(i=0;i<10;i++){
		if(arr[i]%2!=0){
			sum=sum+arr[i];
		}
	}
	cout<<"The sum : "<<sum;
	return 0;
}