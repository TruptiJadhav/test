#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#include"Matrix.hpp"
using namespace std;


Matrix::Matrix()
{
	this->rows=0;
	this->columns=0;
}

Matrix::Matrix(const Matrix &matrixObject)// Copy Constructor
{
	this->matrix= new int*[matrixObject.rows];
	if(this->matrix == NULL)
		exit(1);
	
	for(int i=0;i<matrixObject.rows;i++)
	{
		this->matrix[i]=new int[matrixObject.columns];
		
		if( this->matrix[i] == NULL )
			exit(2);
	}	
	this->rows=matrixObject.rows;
	this->columns=matrixObject.columns;
	
	for(int m=0;m<rows;m++)
		for(int n=0;n<columns;n++)
			matrix[m][n]=matrixObject.matrix[m][n];

}

Matrix::Matrix(int rows,int columns)
{
	if(rows<0 || columns<0)
		exit(1);
	
//	cout<<"rows="<<rows<<" columns"<<columns<<endl<<endl;
	matrix= new int*[rows];
	
	for(int i=0;i<rows;i++)
	{
		matrix[i]=new int[columns];

		if( matrix[i] == NULL )
			exit(2);
	}
	this->rows=rows;
	this->columns=columns;
}


void Matrix::acceptMatrix(int rec[])// this function accept input for matrix from file. 
{
 	int k=0;
	for(int i=0;i<this->rows;i++)
	{	
		for(int j=0;j<this->columns;++j)
		{
			this->matrix[i][j]=rec[k];
			k++;
		}
	}
}

/*
void Matrix::acceptMatrix(int [] rows,int [] columns)// this function accept input for matrix from console.
{
	
	cout<<"Enter Input for Matrix"<<endl;
	for(int i=0;i<(this->rows);i++)
	{
		for(int j=0;j< (this->columns);j++)
		{
			cout<<"Enter value for row"<<i+1<<" column "<<j+1<<endl;
			cin>>matrix[i][j];
		}
	}
*/
	 


//}

void Matrix::display()
{
	if( (this->rows > 0) && (this->columns > 0) )
	{
		cout<<"No of rows="<<this->rows<<endl;
		cout<<"No of columns="<<this->columns<<endl;
		for(int i=0;i<(this->rows);i++)
		{
			for(int j=0;j<(this->columns);j++)
			{
				cout<<this->matrix[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"------------------------------------------------------------------------------------------"<<endl;	
	}
}

/*Destructor
Matrix::~Matrix()
{
	cout<<"destroying matrix"<<endl;
	for(int i=0;i<(this->rows);i++)
		delete [] matrix[i];
	delete [] matrix;
}*/
//Methods
Matrix Matrix::operator +(Matrix matrixObject)
{
	if( (this-> rows != matrixObject.rows) || (this->columns != matrixObject.columns) )
	{
		cout<<"Mismatched Dimensions";
		exit(1);
	}
	else
	{
		Matrix result(matrixObject.rows,matrixObject.columns);
		cout<<"Addition is\n";
		int x;
		
		for(int i=0;i< (this->rows) ;i++)
		{
			for(int j=0;j< (this->columns) ;j++)
				result.matrix[i][j]=this->matrix[i][j]+matrixObject.matrix[i][j];
		}
		return result;
	}
}

Matrix Matrix::operator -(Matrix matrixObject)
{
	if( (this-> rows != matrixObject.rows) || (this->columns != matrixObject.columns) )
		exit(1);
	else
	{
		cout<<"Subtraction is\n";
		Matrix result(matrixObject.rows,matrixObject.columns);
		int x;
		
		for(int i=0;i< (this->rows) ;i++)
		{
			for(int j=0;j< (this->columns) ;j++)
				result.matrix[i][j]=(this->matrix[i][j]-matrixObject.matrix[i][j]);
		}
		return result;
	}
}

Matrix Matrix:: operator *(Matrix matrixObject)
{
	Matrix result(matrixObject.rows,matrixObject.columns);

	int sum=0;
	if( (this->columns == matrixObject.rows) )
	{
		for(int i=0;i<(this->rows);i++)
		{
			for(int j=0;j<(matrixObject.columns);j++)
			{
				sum=0;
				for(int k=0;k<this->columns;k++)
					result.matrix[i][j]=sum+(this->matrix[i][k] * matrixObject.matrix[k][j]);
			}
		}
	return result;
	}
	else
	{
		cout<<"Mismatched Dimensions..";
		exit(1);
	}
}
/*
//This function overloades the >> operator.
std::istream &  operator >> (istream & stream, Matrix &matrixObject)
{
//	cout<<"Enter number of rows ";
	stream >> matrixObject.rows ;
//	cout<<"Enter number of rows ";
	stream >> matrixObject.rows ;
	return stream ;
}

//This function overloades the << operator.
std::ostream &  operator << (ostream & stream, ComplexNumber & complexNumber)	
{
	stream << matrixObject.rows ;
	stream << matrixObject.columns ;

}

*/
