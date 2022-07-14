#include<iostream>
#include<cstdlib>
using namespace std;
 int main()
 {
 	int pin;
 	bool istrue=true;
 	int password=262708;
 	int count=0;
 	int entry;
 	double deposit=0.0,balance=0.0,withdraw=0.0;
 	system("color 46"); //colour change
 	do{
 		cout<<"***Welcome to Morgan Stanley***"<<endl;
 		cout<<"Enter your pin:\n";
 		cin>>pin;
 		if(pin==password)
 	 {
 	 	do{
 	 		cout<<"Welcome User\n"
 	 		     <<"1. Deposit\n"
 	 		     <<"2. Withdraw\n"
 	 		     <<"3. Balance\n"
 	 		     <<"4. Exit\n";
 	 		cout<<"Choose any option:\n";
 	 		cin>>entry;
 	 		switch(entry)
 	 		{ case 1:
 	 			cout<<"Deposit amount:\n";
 	 			cin>>deposit;
 	 			balance+=deposit;
 	 			break;
 	 		  case 2:
 	 		  	if(balance==0)
 	 		  	{
 	 		  		cout<<"No Funds"<<endl;
				}
				else
				{
				cout<<"Withdraw amount:\n";
 	 			cin>>withdraw;}
 	 			if(withdraw>balance)
 	 			{
 	 				cout<<"Oops! Insufficient Funds"<<endl;
				}
				else
				{
					balance-=withdraw;
				}
				break;
			  case 3:
			  	cout<<"Your balance is : $"<<balance<<endl;
				break;
			  case 4:
			    cout<<"Thank You, Have a nice day"<<endl;
				istrue=false;
				break;	
 	 			
				}	
			  }while(istrue!=false);
		  }
		else
		{
			count++;
			if(count==3)
		   {
		   	istrue=false;
		   }	
			else
			cout<<"Wrong Pin\nTry Again\n";
		}
	
	  
	 }while(istrue!=false);
	 
 	 
 	
 	
 }
