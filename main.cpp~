#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include"Matrix.hpp"

using namespace std;

int choice()
{
	int ch;
	cout<<"0.Exit\n1.Addition\n2.Subtraction\n3.Multiplication\n";
	cout<<"Enter your choice:";
	cin>>ch;
	getchar();	
	return ch;
}


int main()
{
	ifstream fin;//ifstream object for file handling(to read file for input)
	
	int rec[1000];
	int rows, columns,ch;
	Matrix result;
	
	fin.open("matrixInput.txt",ios::in);// matrixInput.txt is the file with input.

        fin>>rows;
	fin>>columns;
	
	Matrix A(rows,columns);
	for(int i = 0; i < (rows*columns); i++)
		fin >> rec[i];
		
//	A.acceptMatrix(rec);
        A.display();
	
/*	cout<<"For matrix A\n";
	        fin>>rec[0];
        rows=rec[0];

	cout<<"Enter no of rows:";
	cin>>rows;

	cout<<"Enter no of columns:";
	cin>>columns;
	
//	A.acceptMatrix();
	A.display();
*/	
        fin>>rec[0];
        rows=rec[0];
        
	fin>>rec[1];
	columns=rec[1];

	Matrix B(rows,columns);
	cout<<"B="<<endl;
	for(int i = 0; i < (rows*columns); i++)
		fin >> rec[i];

	B.acceptMatrix(rec);
	B.display();

	while( (ch=choice() ) != 0 )
	{
		cout<<endl;
		if(ch == 1)
		{
			cout<<"Addition is:"<<endl;
			result=A+B;
			result.display();
		}
		else
		if(ch == 2)
		{
			cout<<"Subtraction is="<<endl;
			result=A-B;
			result.display();
		}
		else
		if(ch == 3)
		{
			cout<<"Multiplication is="<<endl;
			result=A*B;
			result.display();
		}
	}
	return 0;
}

