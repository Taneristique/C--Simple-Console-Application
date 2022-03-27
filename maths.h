#include <stdlib.h>
#include <iostream>
#define MAX 101
using namespace std;
/*
Create Matrix
*/
float matrix[MAX][MAX]; 
float matrix_[MAX][MAX];  //init second matrix
float product[MAX][MAX];
/*
Create function prototypes
*/
void get_matrix(int,int,int,int); 
void print_first_matrix(int,int);
void print_second_matrix(int,int);
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
	if(n>1){ 
		return fibonacci(n-1)+fibonacci(n-2); //because fibonacci function's rule is fibo(n)=fibo(n-1)+fibo(n-2)
	}
	else if(n==1){
		return 1;
	}
	else{
		return 0;
	}
}
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

