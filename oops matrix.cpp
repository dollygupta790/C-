#include<iostream>
using namespace std;
class Matrix{
	public:
	  int a[2][2];
		void input(){
			cout<<"Enter the elements of mat :"<<endl;
			for (int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cin>>a[i][j];
					}
				}
			}
			void display(){
				cout<<"The mat is : "<<endl;
				for(int i=0;i<2;i++){
					for(int j=0;j<2;j++){
						cout<<a[i][j]<<" ";
			}cout<<endl;
			}
		}
};
int main(){
	Matrix N;
	N.input();
	N.display();
	return 0;
}