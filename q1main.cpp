#include"q1.cpp"

int main()
{
	int re1,co1,re2,co2;
	cout<<"enter num1(r,i):";
	cin>>re1>>co1;
	cout<<"enter num2(r,i):";
	cin>>re2>>co2;
	ComplexInteger c1(re1,co1),c2(re2,co2);
	
	cout<<"no1:";
	display(c1);
	cout<<"\n";
	
	cout<<"no2:";
	display(c2);
	cout<<"\n";
	
	ComplexInteger c3=c1/c2;
	cout<<"div:";
	display(c3);
	cout<<"\n";
	
	ComplexInteger c4=c1+c2;
	cout<<"sum:";
	display(c4);
	cout<<"\n";
	
	ComplexInteger c5=c1-c2;
	cout<<"sub:";
	display(c5);
	cout<<"\n";
	
	ComplexInteger c6=c1*c2;
	cout<<"mul:";
	display(c6);
	cout<<"\n";
	
	ComplexInteger c7=c1>2;//any dummy integer
	cout<<"swap:";
	display(c7);
	cout<<"\n";
	
	ComplexInteger c8=c1^2;//any dummy integer
	cout<<"unary of num1 is::";
	display(c8);
	cout<<"\n";
}