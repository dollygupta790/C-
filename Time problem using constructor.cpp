#include<iostream>
using namespace std;
class Time{
	public:
		int hours,minutes;
	Time(){
		hours=0;
		minutes=0;
	}	
	Time (int h,int m){
		hours=h;
		minutes=m;
	}
	void display()
	{
		
		cout<<"Time is :";
		if(hours<0){
			cout<<":0"<<hours;
		}
		else{
			cout<<hours;
		}
		
		if(minutes<10){
			cout<<":0"<<minutes <<endl;
		}
		else{
		    cout<<":"<<minutes<<endl;	
		}
	//	cout<<"Time is "<<hours<<":"<<minutes<<endl;
	}
	Time operator ++(int)//prefix
	{
		Time T(hours,minutes);//postfix operator++(int)
		++minutes;
		if (minutes>=60)
		{
			++hours;
			minutes=minutes-60;
		}
	//	return Time(hours,minutes);
	    return T;
	}
};

int main(){
	Time Time1(11,49),Time2(12,40);
    //++Time1;
    Time1++;
	Time1.display();
	
	//++Time2;
	Time2++;
	Time2.display();
	
	return 0;
}