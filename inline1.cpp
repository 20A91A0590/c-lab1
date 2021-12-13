#include<iostream>
using namespace std;
inline int cube(int x)
{
	return(x*x*x);
}
int main()
{
	int a=10,c;
	c=cube(a);
	cout<<"cube  = "<<c; 
	return 0;
}
