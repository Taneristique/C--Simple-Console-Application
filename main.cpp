#include <iostream>
#include <conio.h>
#include "maths.h"
#include <stdlib.h>
using namespace std;
void how_pointers_work(int);
int main(int argc, char** argv) {
	string check;
	cout<<"Designed by Taneristique - a simple console application project with c++"<<endl<<endl;
	do{
		cout<<"MENU"<<endl<<"1.Calculate Factorielle"<<endl<<"2.Find Nth Fibonacci Number"<<endl;
		cout<<"3.Test a pointer"<<endl<<"4.Find Matrix Product"<<endl<<"5.Transpose a matrix"<<endl;
		
		unsigned number;
		cin>>number;
		switch(number){
			case 1:	
				cout<<"Factorielle of which number : ";
				cin>>number;
				cout<<number<<" factorielle is "<<factorielle(number)<<endl;
				break;
			case 2:
				cout<<"Which element of fibonacci series would you want to find out? "<<endl;
				cin>>number;
				cout<<number<<"th element of fibonacci series is "<<fibonacci(number)<<endl;
				break;
			case 3:
				int argument;
				cout<<"give an integer"<<endl;
				cin>>argument;
				how_pointers_work(argument);
				break;
			case 4:
				int r1,c1,r2,c2;
				cout<<"row number of first matrix  :"<<endl;
				cin>>r1;
				cout<<"col number of first matrix  :"<<endl;
				cin>>c1;
				cout<<"row number of second matrix :"<<endl;
				cin>>r2;
				cout<<"col number of second matrix :"<<endl;
				cin>>c2;
				
				matrix_multiply(r1,c1,r2,c2);
				break;
			case 5:
				unsigned r,c;
				cout<<"row number of matrix :"<<endl;
				cin>>r;
				cout<<"col number of matrix :"<<endl;
				cin>>c;				
				transpose(r,c);
				cout<<endl;
			}
		
		cout<<"would you want to continue?(write 'Yes','YES' or 'yes' if you want to continue...)"<<endl;
		cin>>check;
	
	}
	while(check=="Yes" or check=="yes" or check=="YES"); 
}
	void how_pointers_work(int a1){
		int a2;
		cout<<"Pointer  assigns first argument's address,second argument assigns the first one."<<endl;
		cout<<"Then user provides an integer value and first argument multiplies by given integer."<<endl;
		cout<<"Then code compares the value of pointer,arguments and their addresses";
		int* ptr;
		ptr=&a1;
		a2=a1;
		int test;
		cout<<"Please,provide an integer!"<<endl;
		cin>>test;
		a1*=test;
		cout<<"Address of pointer "<<&ptr<<" value of pointer is address "<<ptr<<endl;
		string check=ptr==&a1?"true":"false";//it will assign always true.
		cout<<"Value of pointer "<<ptr<<" shows the address of a1?"<< &a1<<" : "<<check<<endl;
		cout<<"Pointer holds same value with a1?"<<endl<<"pointer: "<<*ptr<<" a1: "<<a1<<" is "<<check<<endl;
	    check=a1==a2?"true":"false"; //it will assing always false.
		cout<<"Second argument holds same value with first argument?"<<endl<<"1st argument: "<<a1<<" 2nd argument: "<<a2<<endl;
		cout<<"So statement above is "<<check<<endl;
	}
