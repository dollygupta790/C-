#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
	complex(int r,int im){
		real=r;
		img=im;
	}
		bool operator >= (complex a){
			if(real>=a.real){
				return true;
		}
	    	else if(real==a.real){
				if(img>=a.img){
			    	return true;	
				}
				else {
					return false;
				}
			}
			else{
				return false;
			}
		}
};
		
int main(){
	complex A(8,9),B(9,7);
	if(A>=B){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	return 0;
}