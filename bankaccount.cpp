#include<iostream>
#include<string.h>
using namespace std;
class  bank_acc
{
	int accno;
	char cname[100],acctype[100];
	double balance;
public:
	bank_acc(int acno,char *name,char *atype,double bal)
	{
		//strcpy(cname,name);
		accno=acno;
		cout<<acno;
		strcpy(cname,name);
		strcpy(acctype,atype);
		balance=bal;
	}
	void deposit();
	void withdraw();
	void display();
};
void bank_acc::deposit()
{
	double depamt;
	cout<<"Enter how much amount to deposit:";
	cin>>depamt;
	balance+=depamt;
}
void bank_acc::withdraw()
{
    double amt;
	char reply;
	cout<<"Enter the amount you want to withdraw:";
	cin>>amt;
	if(amt<balance)
	{
	    balance-=amt;
		cout<<"Amount withdrawn:"<<amt<<endl;
		cout<<"Do you want to diaplay balance(y/n):";
		cin>>reply;
		if(reply=='y'||reply=='Y')
		{
			cout<<"Balance amount is:"<<balance<<endl;
		}	
	}	
	else
	{
		cout<<"Balance in your account is less.cannot withdraw!!"<<endl;
	}
}
	void bank_acc::display()
	{
		cout<<"Dispalying account details"<<endl;
		cout<<"Name of the account holder:"<<cname<<endl;
		cout<<"Account number:"<<accno<<endl;
		cout<<"Type of account:"<<acctype<<endl;
		cout<<"Balance:"<<balance<<endl;
	}
	
int main()
{
	int acno,ch;
	char name[100],atype[100],rep;
	double bal;
	cout<<"Enter Details...."<<endl;
	cout<<"Enter Name Of Account Holder:";
	cin>>name;
	cout<<"Enter Account Number:";
	cin>>acno;
	cout<<"Enter Type Of Account:";
	cin>>atype;
	cout<<"Enter Amount:";
	cin>>bal;
	bank_acc ba(acno,name,atype,bal);
	cout<<"\n";
	do
	{
	 	cout<<"     MAIN MENU   "<<endl;
		cout<<"1.Deposit Amount "<<endl;
		cout<<"2.Withdraw Amount"<<endl;
		cout<<"3.Display Acoount Details"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter your choice(1/2/3/4):";
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
			//	break;
			}
			default:
				exit(0);
		}	
		cout<<"do you want to continue(Y/N):";
		cin>>rep;
	} while(rep!='N'||rep!='n');

}

output:
Enter Details....
Enter Name Of Account Holder:xyz
Enter Account Number:123
Enter Type Of Account:savings
Enter Amount:10000
123
     MAIN MENU
1.Deposit Amount
2.Withdraw Amount
3.Display Acoount Details
4.Exit
Enter your choice(1/2/3/4):1
Enter how much amount to deposit:234
do you want to continue(Y/N):y
     MAIN MENU
1.Deposit Amount
2.Withdraw Amount
3.Display Acoount Details
4.Exit
Enter your choice(1/2/3/4):3
Dispalying account details
Name of the account holder:xyz
Account number:123
Type of account:savings
Balance:10234
do you want to continue(Y/N):y
     MAIN MENU
1.Deposit Amount
2.Withdraw Amount
3.Display Acoount Details
4.Exit
Enter your choice(1/2/3/4):2
Enter the amount you want to withdraw:234
Amount withdrawn:234
Do you want to diaplay balance(y/n):y
Balance amount is:10000
do you want to continue(Y/N):y
     MAIN MENU
1.Deposit Amount
2.Withdraw Amount
3.Display Acoount Details
4.Exit
Enter your choice(1/2/3/4):3
Dispalying account details
Name of the account holder:xyz
Account number:123
Type of account:savings
Balance:10000
do you want to continue(Y/N):y
     MAIN MENU
1.Deposit Amount
2.Withdraw Amount
3.Display Acoount Details
4.Exit
Enter your choice(1/2/3/4):4

--------------------------------
