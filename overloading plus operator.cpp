#include<iostream>
using namespace std;
class Add{
	public:
		int real;
		int img;
		Add(){
			real=0;
			img=0;
		}
		Add(int r,int im){
			real=r;
			img=im;
	}
	void display(){
		cout<<"Number is :"<<real<<"+"<<img<<"i"<<endl;
	}
	Add operator () (int a,int b,int c,int d){
		Add temp;
		temp.real=a+b+c;
		temp.img=b+c+d;
		return temp;
	}
};

int main(){
	 Add a(2,3),d;
	 d=a(4,5,7,8);
	d.display();
	return 0;
}
