#include<iostream>
using namespace std;

void reverseArray (int pri[],int size)
{
	int start=0,end=size-1;
	while(start<size){
		swap(pri[start],pri[end]);
		start++;
		end--;
	}
}

int main()
{
int pri[]= {1,2,3,4,5};
int size=5;
reverseArray(pri,size);
for(int i=0; i<size;i++)
{
	cout<< pri[i]<< " ";
}
cout << endl;
}

