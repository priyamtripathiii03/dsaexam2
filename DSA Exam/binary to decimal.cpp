#include<iostream>
using namespace std;

int binaryToDecimal(int bin)
{
	int ans=0, pow=1;
cout << "enter the value : ";
cin >> bin;
	while (bin>0)
	{
	int rem= bin%10;
	
	ans+= (rem*pow);
	bin/=10;
	pow *=2;
}

return ans;
}

int main()
{
	int bin;
	cout << binaryToDecimal(bin)<< endl;
}