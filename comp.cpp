#include<iostream>
using namespace std;
class complex{
	private:
	 int real;
	private:
	 int img;
	public:
	void input(){
	cout<<"Real Part : ";
	cin>>real;
	cout<<"Img Part : ";
	cin>>img;
	}
	void display()
	{
		cout<<real<<"+"<<img<<"i";
		}
};
int main(){
	complex A,B;
	A.input();
	A.display();
	cout<<endl;
	B.input();
	B.display();
	return 0;
}