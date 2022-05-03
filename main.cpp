#include <iostream>
#include "maths.h"
#include <stdlib.h>
using namespace std;
/*
	Create a function finds matrix product
*/
int matrix_multiply(unsigned row,unsigned col,unsigned r2,unsigned c2){
	if(col==r2){
		get_matrix(row,col,r2,c2);
		cout<<"written"<<endl;
		cout<<"matrix a is ";
		print_first_matrix(row,col);
		cout<<endl<<"matrix b is ";

		print_second_matrix(r2,c2);
		
		cout<<endl<<"Product of two Matrix is ";
		int r3=row; //initialize row number of product matrix
		int c3=c2; //initialize column number of product matrix
		for(int i=0;i<r3;i++){
			for(int j=0;j<c3;j++){
				float tmp=0;
				for(int k=0;k<col;k++){
					tmp+=matrix[i][k]*matrix_[k][j];
				}
				product[i][j]=tmp;
			}
		}
		for(int i=0;i<r3;i++){
			cout<<endl;
				for(int j=0;j<c3;j++){
					cout<<product[i][j]<<"\t";	
				}
		}
		cout<<endl;
	}
	else{
		cout<<"Column number of first matrix must be same with row number of second matrix!"<<endl;
		return 0;
	}
		return 1;
}
/*
Initialize function prototypes
*/
void get_matrix(int row,int col,int r2,int c2){
	cout<<"give values for first matrix : "<<endl;
	for(int i=0;i<row;i++){ //create first matrix
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
	cout<<"give values for second matrix : "<<endl;
	for(int i=0;i<r2;i++){ //create second matrix
		for(int j=0;j<c2;j++){
			cin>>matrix_[i][j];
		}
	}
}
void print_first_matrix(int row,int col){
	for(int i=0;i<row;i++){ //
		cout<<endl;
		for(int j=0;j<col;j++){
			cout<<matrix[i][j]<<"\t";
		}
	}
}
void print_second_matrix(int row,int col){
		for(int i=0;i<row;i++){ //
		cout<<endl;
		for(int j=0;j<col;j++){
			cout<<matrix_[i][j]<<"\t";
		}
	}
}
/*
Create a function calculates transpose of a matrix
*/
void transpose(unsigned row,unsigned col){
	float matrix[row][col]; //matrix to be transposed
	float matrix_[row][col];//this matrix will be transpose of previous matrix
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){ //assign matrix values
			cout<<"value of row "<<i<<" column "<<j<<" is : ";
			cin>>matrix[i][j];
			cout<<endl;
		}
	}
	cout<<"Your matrix : "; 
	for(int i=0;i<row;i++){ //print  matrix
			cout<<endl;
		for(int j=0;j<col;j++){ 
			cout<<matrix[i][j]<<"\t";
		}                       
	}
	cout<<endl<<"Calculating transpose..."<<endl;
	for(int i=0;i<col;i++){ //transpose
		for(int j=0;j<row;j++){ //assign matrix values 
			matrix_[i][j]=matrix[j][i];			
	}
	}
	int chg=row;
	row=col;
	col=chg;
	cout<<"Transposed Matrix : "<<endl;
	for(int i=0;i<row;i++){ //print  matrix
			cout<<endl;
		for(int j=0;j<col;j++){ 
			cout<<matrix_[i][j]<<"\t";
		}                       
	}
}


/*
Create a recursive function calculates factorielle of a number
*/
int factorielle(unsigned n){ // this function will get an unsigned integer n than calculates its factorielle.
	if(n>1){ 
		return n*factorielle(n-1); //recursion factorielle(n-1)
	}
	else{
		return 1;     //finish calculation     
}    	
}

/*
Create a function finds any fibonacci number as getting integer from user.
*/
int fibonacci(unsigned n){//this function calculates nth number of fibonacci series 
	if(n<2){
		return 1;
	}
	else{
		int f1=0;
		int f2=1;
		int sum;
		int tmp;
		int i=0;
		for(;i<n;i++){
			sum=f1+f2;
			tmp=f1;
			f2=tmp;
			f1=sum;
		}
		return sum;
	}
}



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
