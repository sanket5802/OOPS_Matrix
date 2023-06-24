using namespace std;
#include"head1.h"

void display(ComplexInteger &coI)
{
	if(coI.get_imag()>=0)
	{
		cout<<coI.real<<"+"<<coI.imag<<"i"<<" ";
	}
	else
	{
		cout<<coI.real<<coI.imag<<"i"<<" ";
	}
}

void ComplexInteger::set(int r,int i)
{
	real=r;
	imag=i;
}

ComplexInteger ComplexInteger::operator +(ComplexInteger const & obj)
{
	ComplexInteger res;
	res.imag=imag + obj.imag;
    res.real=real + obj.real;
    return res;	
}

ComplexInteger ComplexInteger::operator -(ComplexInteger const & obj)
{
	ComplexInteger res;
	res.imag=imag - obj.imag;
    res.real=real - obj.real;
    return res;	
}

ComplexInteger ComplexInteger::operator *(ComplexInteger const & obj)
{
	ComplexInteger res;
	res.real=(real* obj.real)-(imag*obj.imag);
	res.imag=(imag* obj.real)+(real*obj.imag);
    return res;	
}

ComplexInteger ComplexInteger::operator /(ComplexInteger const & obj)
{
	ComplexInteger res;
	res.real=((real* obj.real)+(imag*obj.imag))/(obj.real*obj.real+obj.imag*obj.imag);
	res.imag=((imag* obj.real)-(real*obj.imag))/(obj.real*obj.real+obj.imag*obj.imag);
    return res;	
}

ComplexInteger ComplexInteger::operator >(int)
{
	ComplexInteger res;
	res.real=imag;
	res.imag=real;
    return res;	
}

ComplexInteger ComplexInteger::operator ^(int)
{
	ComplexInteger res;
	res.real=(real*real)-(imag*imag);
	res.imag=0;
    return res;	
}

int ComplexInteger::get_imag() const
{
	return imag;
}

int ComplexInteger::get_real() const
{
	return real;
}