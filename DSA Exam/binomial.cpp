#include<iostream>
using namespace std;

int factorial (int n){
	int fact =1;
}

int ncr(int n, int r){

int fact_n= factorial (n);
int fact_r= factorial (r);
int fact_npr= factorial (n-r);
return fact_n/ (fact_r * fact_npr);
}

int main()
{

int n=8,r=2;
cout<< ncr(n,r)<< endl;
}
