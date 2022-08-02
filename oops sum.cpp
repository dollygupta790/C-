#include<iostream>
using namespace std;
class Addition{
	private :
		int a;
	private:
	    int b;
	private :
		int c;
	private:
	    int d;
	public:
		void input(){
		cout<<"Real Part : ";
	    cin>>a;
	    cout<<"Img Part : ";
	    cin>>b;
	    cout<<"Real Part : ";
	    cin>>c;
	    cout<<"Img Part : ";
	    cin>>d;
	}
		void display(){
			cout<<"Sum is : "<<a+c<<"+"<<b+d<<"i";
		}	
};
int main(){
	Addition N;
	N.input();
	N.display();
	return 0;
}