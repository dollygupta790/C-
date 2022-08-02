#include<iostream>
using namespace std;
class rectangle{
	public:
 	int length,width;
 	rectangle(int l, int b)
 	{
 		length=l;
 		width=b;
	 }
	 void print(){
	 	cout<<"Dimensions of rectangle is: "<<length<<" and "<<width<<endl;	 	
	 }
 };

 class complex{
 	int real,img;
 	public:
 		complex(int r, int im)
 		{
 			real=r;
 			img=im;
		 }
		 void display(){
		 	cout<<"My complex number is: "<<real<<"+"<<img<<"i"<<endl;
		 }
		 operator rectangle ()
		 {
		 	rectangle temp(real,img);
		 	return temp;
		 	
		 }
		 
 };
 
 
 int main(){
 	complex C(11,22);
 	rectangle A=C;
 	C.display();
 	A.print();
 	 
	return 0;
 }