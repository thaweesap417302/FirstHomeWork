#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[20];
	string str2;
	cout<<"Input String   : ";
	cin>>str;
	for(int i=strlen(str);i<=strlen(str);i--)
	{
		char(toupper(str[i]));
		str2 +=toupper(str[i]);

	}
	cout<<"Reverse String : "<<str2<<endl;
	return 0;
}