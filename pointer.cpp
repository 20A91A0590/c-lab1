//Develop a C++ program to illustrate pointer to a class. //
#include<iostream>
using namespace std;
class square
{
	private:
		int a;
	public:
	  void get()
	  {
	  	cout<<"enter a value= ";
	  	cin>>a;
	  }
	  void show()
	  {
	   cout<<"area of square= "<<a*a<<endl;
	  }	
};
int main()
{
	square s,*sptr;
	sptr=&s;
	sptr->get();
	sptr->show();
	return 0;
	
}
