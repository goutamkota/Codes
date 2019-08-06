#include<iostream>
#include<math.h>
using namespace std;
int main(){	
	cout<<"::BASIC CALCULATOR::"<<endl;
	cout<<"1) ADD"<<"  "<<"2) SUB"<<"  "<<"3) MUL"<<"  "<<"4) DIV"<<"  "<<"5) REM"<<endl;
	cout<<"ENTER THE OPTION YOU WANT :"<<endl;	
	int option;
	cin>>option;
	if(option<5){
	int a,b,c;
	cout<<"PLEASE ENTER THE TWO VALUES:"<<endl;
	cin>>a>>b;
	switch(option){
		case 1:c=a+b;
				break;
		case 2:c=a-b;
				break;
		case 3:c=a*b;
				break;
		case 4:c=a/b;
				break;
		case 5:c=a%b;
				break;
				}
	cout<<"ANSWER:"<<c<<endl;
				}
	else{
		cout<<"PLEASE ENTER A VALID OPTION :"<<endl;
	}
	return 0;}
	
	
	


