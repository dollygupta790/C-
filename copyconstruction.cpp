#include<iostream>
using namespace std;
class complex{
	public:
		int real;
		int img;
		
			complex(int a,int b){
				real=a;
				img=b;
			}
			void display(){
				cout<<"Complex number "<<real<<"+"<<img<<"i"<<endl;
				
			}
			void sum(complex a,complex b){
				cout<<"Sum of no. :"<<a.real+b.real<<"+"<<a.img+b.img<<"i"<<endl;
			}
};
int main(){
	complex A(5,4);
	A.display();
	complex B(9,7);
	B.display();
	complex C(0,0);
	C.sum(A,B);
	return 0;
}