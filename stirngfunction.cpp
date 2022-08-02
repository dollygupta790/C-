#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class greeting{
	public:
	//	char A[10]="Hello",B[10]="World",C[10];
	    string A="Hello" ,B="World",C;
		int len;
		void display(){
		//	strcpy(C,A);
		    C=A;
			cout<<"C say : "<<C<<endl;
			
//			strcat(A,B);
	        C=A+B;
		//	cout<<"A became : "<<A<<endl;
		cout<<"C became : "<<C<<endl;
			
	//		len=strlen(A);
	        len=C.size();
			cout<<"Length of C now is :"<<len<<endl;
		}
};
int main(){
	greeting j;
	j.display();
	return 0;
}