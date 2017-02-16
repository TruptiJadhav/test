#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class Matrix
{
	public :
	int rows,columns;
	int **matrix;
	
	
	//Constructors
	Matrix();
	Matrix(const Matrix &matrix);
	Matrix(int,int);

	//Methods
	void acceptMatrix(int []);
	void display();

	//Destructor
//	~Matrix();

	//Methods
	Matrix operator +(Matrix matrixObject);//
	Matrix operator -(Matrix matrixObject);
	Matrix operator *(Matrix matrixObject);
};
