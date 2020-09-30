#include<iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int num = 0 ;
	int *quiz = new int[num];
	int *mid = new int[num];
	int *final =new int[num];
	char menu;
	bool Done = true;
	do
	{
		cout<<"==========================================="<<endl;
		cout<<setw(20)<<"MENU"<<" "<<endl;
		cout<<"==========================================="<<endl;
		cout<<" 1. Input student records "<<endl;
		cout<<" 2. View all student records "<<endl;
		cout<<" 3. Exit "<<endl;
		cout<<"Seclect menu : ";
		cin>>menu;
		if (menu == '1')
		{
				cout<<"In put Number of stedent : ";
				cin>>num;

			for(int x = 0; x<num ; x++)
			{
				cout<<"Number"<<x+1<<endl;
				cout<<"Input Quiz :";
				cin>>quiz[x];
				cout<<"Input Midterm :";
				cin>>mid[x];
				cout<<"Input Final :";
				cin>>final[x];
				cout<<"\n";
			}
		}
		if(menu == '2')
		{
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"StdID"<<setw(15)<<setfill(' ')<<"Quiz"<<setw(15)<<setfill(' ')<<"Midterm"<<setw(15)<<setfill(' ')<<"Final"<<endl;
			for(int i = 0;i<num;i++)
				cout<<i+1<<setw(17)<<setfill(' ')<<quiz[i]<<setw(12)<<setfill(' ')<<mid[i]<<setw(17)<<setfill(' ')<<final[i]<<setw(17)<<setfill(' ')<<" "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
		}
		if(menu == '3')
		{
			Done = false;
		}
	}while(Done);
	cout<<"\n...Exit Program...\n";


return 0;
}