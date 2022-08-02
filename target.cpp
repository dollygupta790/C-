#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array : ";
	//cin>>arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The elements of array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int target;
	cout<<"Enter the target : ";
	cin>>target;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		int left=i+1;
		int right=n-1;
	
	if(arr[i]+arr[left]+arr[right]==target){
		cout<<arr[i]<<" "<<arr[left]<<" "<<arr[right];
	}
	else if(arr[i]+arr[left]+arr[right]>target){
		right--;
	}
	else if(arr[i]+arr[left]+arr[right]<target){
		left--;
	}
}
	return 0;
}