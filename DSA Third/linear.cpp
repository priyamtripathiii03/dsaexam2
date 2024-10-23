#include<iostream>
using namespace std;

int linearSearch(int pri[],int size,int target)
{
	for (int i=0; i<size; i++)
	{
		if(pri[i]==target)
		{
			return i;
		}
	
    }
}
int main()
{
	int pri[5]={1,2,3,4,5};
	int size=5;
	int target = 2;
	
	cout << linearSearch(pri,size,target) << endl;
}