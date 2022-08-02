#include <iostream>
using namespace std;
class Integer{
	int i;
	public:
	void display(){
		cout<<"The value of integer is : "<<i<<endl;
	}	
	Integer (int i){
		this-> i=i;
	}
	operator int (){
		return i;
	}
};
int main(){
	Integer A=100;
	A.display();
	int y=A;
	cout<<"The value of y is : "<<y<<endl;
	
	return 0;
}