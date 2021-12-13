#include <iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		void get_a(int val_a){
			a=val_a;
		}
		void put_a(void){
			cout <<" value of a: " << a << endl;
		}
};
class B{
	private:
		int b;
	public:
		void get_b(int val_b){
			b=val_b;
		}
		void put_b(void){
			cout <<"value of b: " << b << endl;
		}
};
class C{
	private:
		int c;
	public:
		void get_c(int val_c){
			c=val_c;
		}
		void put_c(void){
			cout <<" value of c: " << c << endl;
		}
};
class final:public A,public B,public C{
	public:
		void printvalues(void){
			put_a();
			put_b();
			put_c();
		}
};
int main(){
	final objfinal;
	objfinal.get_a(100);
	objfinal.get_b(200);
	objfinal.get_c(300);
	objfinal.printvalues();
	return 0;
}
