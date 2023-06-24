#include"head2.h"
using namespace std;

void Matrix::set(int i,int j,ComplexInteger val)
{
	arr[i][j]=val;
}

ComplexInteger Matrix::get(int i,int j) const
{
	return arr[i][j];
}

void displayM(Matrix &m)
{
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			display(m.arr[i][j]);
		}
		cout<<"\n";
	}
}

bool search(Matrix &m,ComplexInteger& c)
{
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			if((c.get_real()==m.arr[i][j].get_real())&&(c.get_imag()==m.arr[i][j].get_imag()))
			{
				return true;
			}
		}
	}
	return false;
}

Matrix Matrix::operator +(const Matrix  & m)
{
	Matrix temp;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			temp.set(i,j,(arr[i][j]+m.get(i,j)));
		}	
	}
	return temp;
}

Matrix Matrix::operator +(ComplexInteger& c)
{
	Matrix temp;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			temp.set(i,j,(arr[i][j]+c));
		}	
	}
	return temp;
}

Matrix Matrix::operator -(const Matrix  & m)
{
	Matrix temp;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			temp.set(i,j,(arr[i][j]-m.get(i,j)));
		}	
	}
	return temp;
}

Matrix Matrix::operator -(ComplexInteger& c)
{
	Matrix temp;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			temp.set(i,j,(arr[i][j]-c));
		}	
	}
	return temp;
}

Matrix Matrix::operator *(const Matrix  & m)
{
	Matrix temp;
	
	ComplexInteger t;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			for(int k=0;k<nc;k++)
			{
				t=t+(arr[i][k]*m.get(k,j));
			}
			temp.set(i,j,t);
		}	
	}
	return temp;
}

Matrix Matrix::operator *(ComplexInteger& c)
{
	Matrix temp;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			temp.set(i,j,(arr[i][j]*c));
		}
	}
	return temp;
}

Matrix Matrix::operator =(const Matrix  & m)	//friend
{
	Matrix temp;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			temp.set(i,j,arr[i][j]);
		}
	}
	return temp;
}

Matrix Matrix::operator =(ComplexInteger c[nr][nc])
{
	Matrix temp;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			this->arr[i][j].set(c[i][j].get_real(),c[i][j].get_imag());
			temp.arr[i][j].set(c[i][j].get_real(),c[i][j].get_imag());
		}
	}
	return temp;
}

Matrix Matrix::operator ^(int index)
{
	Matrix temp;
	ComplexInteger basic(1,1);
	int count=0;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			temp.set(i,j,arr[i][j]);
			count++;
			if(count==index)
			{
				temp.set(i,j,basic);
				this->arr[i][j].set(1,0);
				break;
			}	
		}		
	}
	return temp;
}
