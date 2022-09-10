#include <iostream>
/* a program that inputs two integers in main function 
and passes the values to a function. The function finds 
and returns the greatest common divisor. The main function
then displays the returned value.*/
using namespace std;

int gcd(int num1,int num2); //function prototyping

int main() 
{
	int num1,num2;
	cout<<"\t\tGREATEST COMMON DIVISOR CALCULATOR\n\n";
	cout<<"Enter First Number: "; cin>>num1;
	cout<<"Enter Second Number: "; cin>>num2;
	cout<<endl<<"The Greatest Common Divisor= "<<gcd(num1,num2); //function call
	
	
	return 0;
}
int gcd(int num1,int num2) //function defination
{
	int i=1,gcd; 
	while (i<=num1&&i<=num2)  //loop for GCD
	{
		if (num1%i==0&&num2%i==0)
	    gcd=i;
	    i++;
	}
	return gcd;
}
