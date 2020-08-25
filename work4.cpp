#include<iostream>
using namespace std;
int main()
{
	char Grade;
	double	GradePoint=0,gpa=0;
	int num,counter=0;
		cout<<"Enter the lettr grade(Enter 'X' to exit)"<<endl;
		cin>>Grade;
	do
	{
		if(Grade=='A' || Grade=='a')GradePoint += 4;
		else if (Grade=='B' || Grade=='b')GradePoint += 3;
		else if (Grade=='C' || Grade=='c')GradePoint += 2;
		else if (Grade=='D' || Grade=='d')GradePoint += 1;
		else if (Grade=='F' || Grade=='f')GradePoint += 0;
		else if (Grade=='X' || Grade=='x')break;
		else cout<<"This import is invalid. Try angain"<<endl;
		counter++;
		cout<<"Enter the lettr grade(Enter 'X' to exit)"<<endl;
		cin>>Grade;

	}
	while(Grade !='X' && Grade !='x');
	gpa = GradePoint/counter;
	cout<<"Total Grade Point : "<<GradePoint<<endl;
	cout<<"GPA : "<<gpa<<"\n\n\n";

	
	return 0;
}
