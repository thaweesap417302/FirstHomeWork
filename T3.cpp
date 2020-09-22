#include <iostream>
#include <string>
using namespace std;
int main()
{	
	/*cout<<ceil(56.8)<<endl;
	char str1[30] ="Hello world";
	char str2[30] ="hi world";
	cout<<strchr(str1,'o')<<endl;
	cout<<strcmp(str2,str1)<<endl;
	cout<<strcpy(str1,str2)<<endl;//copy str2 แทนที่ str1
	cout<<str1<<endl;//ค่าตัวแปล str1 เปลี่ยน
	cout<<strlen(str1)<<endl;*/
	char str[100];
	cout<<"Enter String : ";
	cin>>str;
	//cout<<strlen(str)<<endl;
	for(int i=0;i<=strlen(str);i++)
	{
		cout<<str[i]<<endl;
		cout<<"*"<<endl;
	}

	return 0;

}