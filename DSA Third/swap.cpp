#include<iostream>
using namespace std;


int main()
{
	int a=2,b=4;
a=a^b;
b=a^b;
a=b^a;
cout << "a="<< a <<endl << "b="<< b;
}