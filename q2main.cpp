#include<bits/stdc++.h>
using namespace std;
#include"q2.cpp"

int main()
{
	Matrix m1;
	Matrix m2;
	int r,im;
	ComplexInteger c;
	cout<<"first matrix:"<<endl;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			cout<<"enter r,im:";
			cin>>r>>im;
			c.set(r,im);
			m1.set(i,j,c);	
		}	
	}
	
	cout<<"second matrix:"<<endl;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			cout<<"enter r,im:";
			cin>>r>>im;
			c.set(r,im);
			m2.set(i,j,c);	
		}	
	}
	ComplexInteger c1(5,4);
	
	cout<<"m1:"<<endl;
	displayM(m1);
	cout<<"\n";
	cout<<"m2:"<<endl;
	displayM(m2);
	cout<<"\n";
	
	cout<<"search result :"<<endl;
	if(search(m1,c1))
	{
		cout<<"present"<<endl;
	}
	else
	{
		cout<<"not present"<<endl;
	}
	cout<<"\n";
	
	cout<<"copying :"<<endl;
	Matrix m6=m1;//c1 or m2
	displayM(m6);
	cout<<"\n";
	
	cout<<"sum result :"<<endl;
	Matrix m3=m1+c1;//c1 or m2
	displayM(m3);
	cout<<"\n";
	
	cout<<"diff result :"<<endl;
	Matrix m4=m1-c1;//c1 or m2
	displayM(m4);
	cout<<"\n";
	
	cout<<"mul result :"<<endl;
	Matrix m5=m1*c1;//c1 or m2
	displayM(m5);
	cout<<"\n";
	
	cout<<"mul with matrix:"<<endl;
	Matrix m7=m1*m2;//c1 or m2
	displayM(m7);
	cout<<"\n";
	
	cout<<"after replace:"<<endl;
	m1=m1^2;
	displayM(m1);
	cout<<"\n\n";
	
	cout<<"Thank you"<<endl;
	
	return 0;
}