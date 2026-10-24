#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int a=0;
	int* p;
	p=&a;
	int c[400]={1,2,3};
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<p[0]<<endl;
	cout<<p[1]<<endl;
	cout<<*c<<endl;
	cout<<*(c+1)<<endl;
	
   
	system("pause");
	return 0;

}

