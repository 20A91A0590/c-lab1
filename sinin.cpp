#include<iostream>
using namespace std;
/*base class*/
class Base{
		public:
			void Base_Class(void);
};
//function definition
void Base::Base_Class(void){
	cout << " Base class method" << endl;
}
/*derived class*/
class Derived:public Base{
	public:
		void Derived_Class(void);
};
void Derived::Derived_Class(void){
	cout <<" derived class method" << endl;
}
int main(){
	Derived objB;
	objB.Base_Class();
	objB.Derived_Class();
	return 0;
	}
	
