#include<iostream>
#include<string.h>
using namespace std;
class bank_acc
{
	int accno;
	char cname[100],acctype[100];
		double balance;
public:
    bank_acc(int acno,char *name,char *atype,double bal)
	{
		accno=acno;
		cout<<acno;
		strcpy(cname,name);
		strcpy(acctype,atype);
		balance = bal;
    }
    void deposit();
    void withdraw();
    void display();
};

void bank_acc::deposit()
{
	double  depamt;
	cout<<"enyer how mmuch money you want to deposit:";
	cin>>depamt;
	balance += depamt;
}

void bank_acc::withdraw()
{
	double amt;
	char reply;
	cout<<"enter the amount yoiu want to withdraw:";
	cin>>amt;
	
	if (amt<balance)
	{
		balance-= amt;
		cout<<"amount withdraw:"<<amt<<endl;
		cout<<"do you want to display balance (Y/N):";
		cin>>reply;
		if (reply=='Y' || reply=='y')
		{
			cout<<"balance amount is :"<<balance<<endl;
		}
	}
	else
	{
		cout<<"balance in your account is less .cannot withdraw !!!"<<endl;
	}
}

void bank_acc::display()
{
	cout<<"displaying account details"<<endl;
	cout<<"name of the account holder"<<cname<<endl;
	cout<<"account number"<<accno<<endl;
	cout<<"type of account"<<acctype<<endl;
	cout<<"balance:"<<balance<<endl;
}

int main()
{
	int acno,ch;
	char name[100],atype[100],rep;
	double bal;
	cout<<"enter details..........."<<endl;
	cout<<"enter name of account holder :";
	cin>>name;
	cout<<"enter account number :";
	cin>>acno;
	cout<<"enter type of account";
	cin>>atype;
	cout<<"enter amount :";
	cin>>bal;
	bank_acc ba(acno,name,atype,bal);
	cout<<"\n";
	do
	{
		cout<<"   main menu  "<<endl;
		cout<<"1. deposit ammount "<<endl;
		cout<<"2. withdraw ammount"<<endl;
		cout<<"3. display account details"<<endl;
	    cout<<"4. exit"<<endl;
		cout<<"enter your choice (1/2/3/4):";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
					ba.deposit();
					break;
			}
			case 2:
		    {
			    	ba.withdraw();
					break;
			}
			case 3:
			{
				ba.display();
				break;					
			}
			case 4:
			{
				exit(0);
			}
			default:
			    exit(0);		
		}
		cout<<"do you want to continue  (Y/N):";
		cin>>rep;
	}while (rep!='N' || rep!='n');
}
