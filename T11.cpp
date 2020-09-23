#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length,const float widht);
double Area(const double based,double high);
int main()
{
	char Choice;
	bool Flag = true;
	do
	{
		DisplayMenu();
		cin>>Choice;
		if(Choice == '1')
		{
			float Radius;
			cout<<"\nEnter  radius :";
			cin>>Radius;
			cout<<"Area of Circle = "<<fixed;
			cout<<setprecision(2)<<Area(Radius)<<endl;
		}
		else if(Choice == '2')
		{
			float Length,Widht;
			cout<<"Enter Lenght and width : ";
			cin>>Length>>Widht;
			cout<<setprecision(2)<<Area(Length,Widht)<<endl;
			cout<<endl;
		}
		else if(Choice == '3')
		{
			double based,high;
			cout<<"Enter Based and High : ";
			cin>>based>>high;
			cout<<setprecision(2)<<Area(based,high)<<endl;
			cout<<endl;
		}
		else if(Choice == '4')Flag = false;
		else
		{
			cout<<"\nYou choose out of range is ";
			cout<<"not process.\n";
		}
	}while(Flag);
	cout<<"\n...Exit Program...\n";
	return 0;
}
float Area(const float Radius)
{
	return(3.14159F*Radius*Radius);
}
float Area(const float Length,const float Widht)
{
	return(Length*Widht);
}
double Area(const double based,const double high)
{
	return(0.5*based*high);
}
void DisplayMenu()
{
	cout<<endl;
	cout<<"Program Calculate Area"<<endl;
	cout<<" 1. Clrcle"<<endl;
	cout<<" 2. Rectangle"<<endl;
	cout<<" 3. Triangle"<<endl;
	cout<<" 4.Exit"<<endl;
	cout<<"Enter your choose number: ";

}
