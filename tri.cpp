#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<n-1;j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}