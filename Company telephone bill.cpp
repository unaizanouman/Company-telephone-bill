#include<iostream>
using namespace std;
main()
{
	int accno,min,time,t_1,t_2;
	char sercode;
	float bill,bill_1,bill_2,t_b;
	
	cout<<"Enter your account number:";
	cin>>accno;
	cout<<"\nEnter service code (character only):";
	cin>>sercode;
	cout<<"\nEnter number of minutes service was used:";
	cin>>min;
	
	cout<<"\nAccount number:"<<accno;
	cout<<"\nService code:"<<sercode;
	cout<<"\nMinutes:"<<min;
	
	if((sercode=='R')||(sercode=='r'))
	{
	cout<<"\nRegular service";
	
    if(min>50)
    {
	bill=((min-50)*0.20)+10;
    cout<<"\nBill for regular service over 50 min="<<bill<<"$";
	}
	else
	{
	bill=10;
	cout<<"\nFirst 50 minutes are free for the user";
	cout<<"\nBill="<<bill<<"$";
    }
    }
	else if((sercode=='P')||(sercode=='p'))
	{
	cout<<"\nPremium service";
	cout<<"\nEnter time of service(6 a.m to 6 p.m):";
	cin>>t_1;
	cout<<"\nEnter time of service(6 p.m to 6 a.m):";
	cin>>t_2;
     {
		if(t_1>75)
	{
		cout<<"\nYou have used more than 75 free minutes.";
		bill_1=((t_1-75)*0.10)+25;
		cout<<"\nBill="<<bill_1<<"$";
	}
	
	else
	{
		bill=25.00;
		cout<<"\nFirst 75 minutes are free";
		cout<<"\nBill="<<bill<<"$";
	}
		
	}
	{
		if (t_2>100)
		{
			cout<<"\nYou have used more than 100 free minutes.";
			bill_2=((t_2-100)*0.05)+25;
			cout<<"\nBill="<<bill_2<<"$";
		}
		else 
		{
			bill=25.00;
			cout<<"\nFirst 100 minutes are free";
			cout<<"\nBill="<<bill<<"$";
		}
			t_b=bill_1+bill_2;
	        cout<<"\nTotal bill:"<<t_b<<"$";
	}
    }
	else 
	cout<<"\nInvalid character";
	
}
