#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		char name[20];
		float salary;
	public:
	    void get()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter name";
			cin>>name;
			cout<<"enter salary";
			cin>>salary;
		}
		void show()
		{
			cout<<"emp id = "<<id<<endl;
			cout<<"emp name = "<<name<<endl;
			cout<<"emp salary = "<<salary<<endl;
		}	
};
int main()
{
	employee e;
	e.get();
	e.show();
	return 0;
}
