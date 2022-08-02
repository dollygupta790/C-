#include<iostream>
using namespace std;
class Integer{
	private:
	int x;
	int y;
	public:
	Integer(){
		x=10;
		y=5;
	}
	void display(){
		cout<<"1st Integer is "<<x<<endl;
		cout<<"2nd Interger is "<<y;
		
	}
};
int main(){
	//int N;
	Integer I;
	I.display();
	return 0;
}