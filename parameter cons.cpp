#include<iostream>
using namespace std;
class Integer{
	private:
	int x;
	int y;
	public:
	Integer(int a,int b){
		x=a;
		y=b;
	}
	void display(){
		cout<<"1st Integer is "<<x<<endl;
		cout<<"2nd Interger is "<<y;
		
	}
};
int main(){
	//int N;
	Integer I(2,8);
	I.display();
	return 0;
}