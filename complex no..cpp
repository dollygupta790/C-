#include<iostream>
using namespace std;
class complex{
	public:
	int real;
	int img;
	void display(complex X){
		cout<<X.real<<"+"<<X.img<<"i"<<endl;
	}
	
	
};
int main(){
	complex A,B;
	cout<<"Enter the real Part : ";
	cin>>A.real;
	cout<<"Enter the img Part : ";
	cin>>A.img;
	//cout<<A.real<<"+"<<A.img<<"i";
	cout<<"Enter the real Part : ";
	cin>>B.real;
	cout<<"Enter the img Part : ";
	cin>>B.img;
	A.display(A);
	B.display(B);
	return 0;
}