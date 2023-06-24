#include"q1.cpp"
const int nr=2;		//using constants
const int nc=2;		//global variables

class Matrix
{
	private:
    	ComplexInteger arr[nr][nc];
    public:
    	Matrix()
    	{
    	//	cout<<"Matrix default constructor"<<endl;
		}
		
		Matrix(const Matrix &ci)
		{
			for(int i=0;i<nr;i++)
			{
				for(int j=0;j<nc;j++)
				{
					arr[i][j].set(ci.arr[i][j].get_real(),ci.arr[i][j].get_imag());
				}
			}
		//	cout<<"Matrix copy constructor"<<endl;
		}
		
		~Matrix()
		{
		//	cout<<"Matrix destructor"<<endl;
		}
		
		//operator overloadings
		
		Matrix operator + (const Matrix  &);
		Matrix operator + (ComplexInteger&);
		Matrix operator - (const Matrix  &);
		Matrix operator - (ComplexInteger&);
		Matrix operator ^ (int);
		Matrix operator = (const Matrix  &);
		Matrix operator = (ComplexInteger bnm[nr][nc]);
		Matrix operator * (const Matrix  &);
		Matrix operator * (ComplexInteger &);
		
		//friend functions
		
		friend bool search(Matrix &m,ComplexInteger& c);
		friend void displayM(Matrix &m);//displays matrix
		
		//setter getter methods
		
        void set(int ,int,ComplexInteger);//set matrix element at a given index
        ComplexInteger get(int ,int) const; //get complexnumber at a given index
};