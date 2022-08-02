#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class displayDat{
	public:
		
//		int i, double f,string S;
		
		void display(int i){
			cout<<"Integer is : "<<i<<endl;
			
		}
		void display(double f){
			cout<<"float is :"<<endl;
		}
		void display(string s){
			cout<<"word is : "<<s<<endl;
		}
};
int main(){
	displayDat D;
	D.display(1);
	D.display(2.35);
	D.display("Hello");
	
	return 0;
}