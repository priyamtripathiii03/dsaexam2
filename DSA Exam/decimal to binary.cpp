#include<iostream>
using namespace std;

int decToBinary(int dec)
{
	int ans=0, pow=1;
	cout<< "enter the value : ";
	cin>>dec;
	while (dec>0)
	{
	int rem= dec%2;
	dec/=2;
	ans+= (rem*pow);
	pow *=10;
}

return ans;
}
    
int main()
{
	int dec;	
	cout<< decToBinary(dec)<< endl;
}