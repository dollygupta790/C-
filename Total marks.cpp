#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5],i,sum=0,avg=0;
    cout<<"Enter the number for C : ";
    cin>>arr[0];
    cout<<"Enter the number for C++ : ";
    cin>>arr[1];
    cout<<"Enter the number for JAVA : ";
    cin>>arr[2];
    cout<<"Enter the number for DS : ";
    cin>>arr[3];
    cout<<"Enter the number for OS : ";
    cin>>arr[4];
   // cout<<"Enter the number for OS : ";
    //cin>>arr[5];
    for(i=0;i<5;i++){
        sum=sum+arr[i];
        
    }
    cout<<"Total Sum : "<<sum<<endl;
    float per=((float)sum/500)*100;
    avg=sum/5;
    cout<<"Average marks : "<<avg<<endl;
    cout<<"Percentage : "<<per<<"%";
    
    return 0;
}
