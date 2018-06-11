#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,e,f,g,h,o,t,result;
	
	string mystring;
	mystring = "This will help you to calculate the perimeter, area and volume of a cuboid/rectangle"; 
	cout << mystring << endl;
	
	mystring = "Type the following and hit enter"; 
	cout << mystring << endl;
	
	mystring = "The length of cuboid/rectangle=";
	cout << mystring ;
	cin >> a;
	
	mystring = "The bredth of cuboid/rectangle="; 
	cout << mystring;
	cin >>	b;
	
	mystring = "The height of cuboid="; 
	cout << mystring;
	cin >>	c ;
	
	mystring = "What do you want"; 
	cout << mystring << endl ;
	
	string d;
	
	mystring = "Type area/perimeter/volume"; 
	cout << mystring << endl;
	cin >>	d;
	
	{
		e =a+b;
		result =2*e;
	
		f=a*b;
	}
	if ( d =="perimeter")
	{      
		cout << "The perimeter of rectangle is=" << result;
		cin >>  g;
		return 0;
	}
	else if (d=="area")
	{
		cout << "The area of rectangle =" << f;		
		cin >> h;
		return 0;
	}
	else if (d=="volume")
	{
		h=a*b*c;
		cout << "the volume of rectangle =" <<h;
		cin >>o;
	}
	else 
	{
		cout << "You typed something wrong";
		cin >> t;
	}
}
