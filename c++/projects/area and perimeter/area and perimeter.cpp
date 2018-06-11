#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,e,f,g,h,i,j,result,area,perimeter,volume,zero;

	
	string mystring;
	mystring = "This will help you to calculate the perimeter and area of a rectangle"; 
	cout << mystring << endl;
	
	mystring = "Type the following and hit enter"; 
	cout << mystring << endl;
	
	mystring = "The length of rectangle=";
	cout << mystring ;
	cin >> a;
	
	mystring = "The bredth of rectangle="; 
	cout << mystring;
	cin >>	b;
	
	mystring = "The height of rectangle="; 
	cout << mystring;
	cin >>	i;
	
	e =a+b;
	result =2*e;
	f=a*b;
	j=a*b*i;
	
	{
		mystring = "The perimeter of rectangle is=";
		cout << mystring << result << endl ;
		cout << "The area of rectangle =" << f << endl;	
		cout << "The volume of rectangle =" << j;
		cin >>	zero;
		return 0;
	}
}
