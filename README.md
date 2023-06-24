Performs various operations on matrix like arithmetic ,swapping etc. with complex integers allowed .Using oops concepts like abstraction, polymorphism, overloading, has a relationship etc.

Problem Statement:

Problem 1: Define a custom class ComplexInteger with appropriate data members. Also an additional friend function to display the contents of the Object. Perform the following arithmetic operations by overloading appropriate operators.

i) + : Adds 2 ComplexInteger objects.

ii) - : Subtracts a ComplexInteger object from the other.

iii) * : Multiplies 2 ComplexInteger objects.

iv) / : Divides 2 ComplexInteger objects.

v) > : (Unary) Swaps the real and Imaginary values of the object.

vi) ^ : (Unary) Multiplies the ComplexInteger object with its Conjugate and stores in the current object.

Problem 2: Define a class Matrix which contains ComplexInteger objects as an elements. Also 2 additional friend functions to display the contents of the Matrix and Search for the Specified object and return boolean value (if present or not). Also perform the following operations by overloading appropriate operators.

i) + : Adds a scalar (ComplexInteger Object) to every element of the Matrix (when called with a ComplexInteger Object or a Real Integer). And Adds respective members of the Matrix (Only applicable for matrices of same order as and when called with another Matrix Object).

ii) - : Subtracts a scalar (ComplexInteger Object) from every element of the Matrix (when called with a ComplexInteger Object or a Real Integer). And Subtracts respective members of the second Matrix from the first one. (when called with another Matrix Object).

iii) ^ : Replaces the element at the specified no. from the beginning in natural counting order with 0+0i. (if it exists) Say Matrix is :

2+3i 5+2i 7+9i

5+3i 10+2i 71+9i

8+3i 15+2i 27+19i

After calling : matrix^7; The Matrix becomes :

2+3i 5+2i 7+9i

5+3i 10+2i 71+9i

0+0i 15+2i 27+19i

(element no.7 replaced with 0+0i )

iv) = : Assigns a Matrix Object to another Matrix reference (when called with 2 Matrix objects). And Creates a fresh List from a 2D array of ComplexInteger Objects. (when called from a matrix object and passed a 2D array of objects). v) * : Multiplies a scalar (ComplexInteger Object) to every element of the Matrix (when called with a ComplexInteger Object or a Real Integer). And Performs Matrix Multiplication for 2 matrices. (when called together with another Matrix Object).
