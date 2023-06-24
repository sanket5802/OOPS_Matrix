#include<bits/stdc++.h>

class ComplexInteger
{
    private:								//abstraction
    	int real;
		int imag;
    public:
    	ComplexInteger(int r=0,int i=0)		//adhoc polymorphism
    	{
    		real=r;
        	imag=i;
    	//	cout<<"ComplexInteger constructor"<<endl;
		}
		
		ComplexInteger(const ComplexInteger &ci)
		{
			imag=ci.imag;
			real=ci.real;
		//	cout<<"ComplexInteger copy constructor"<<endl;
		}
		
		~ComplexInteger()
		{
		//	cout<<"ComplexInteger destructor"<<endl;
		}
		
		//operator overloading
		ComplexInteger operator + (ComplexInteger const &);
		ComplexInteger operator - (ComplexInteger const &);
		ComplexInteger operator * (ComplexInteger const &);
		ComplexInteger operator / (ComplexInteger const &);
		ComplexInteger operator > (int);
		ComplexInteger operator ^ (int);
		ComplexInteger operator = (int);
		
		//friend functions
		friend void display(ComplexInteger &coI);
		
		//setter getter methods
        void set(int ,int );
        int get_imag() const;
        int get_real() const;
};