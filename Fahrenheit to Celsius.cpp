#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int S;
	cout<<"Enter the Start Value : ";
	cin>>S;
	int E;
	cout<<"Enter the End Value : ";
	cin>>E;
	int W;
	cout<<"Enter the Step Value : ";
	cin>>W;
	while (S<=E){
		int C=int((S-32)*5/9);
		cout<<S<<" "<<C;
		cout<<"\n";
		S=S+W;
	}
//	cout<<"\n";
	return 0;
}