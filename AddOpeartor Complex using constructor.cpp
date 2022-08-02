#include<iostream>
using namespace std;
class complex{
	public:
		int real,img;
		
		complex()
		{
			real=0;
			img=0;
		}
		complex(int r,int im){
			real=r;
			img=im;
	}
	void display(){
		cout<<"Number is :"<<real<<"+"<<img<<"i"<<endl;
	}
	
	complex operator +(complex c){
		complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
	}
};

int main(){
	complex A(2,3),B(3,4),C(5,8),D,E;
	D=A+B;
	D.display();
	E=B+C;
	E.display();
	return 0;
}