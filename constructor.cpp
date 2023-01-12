#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[20];
	double fees;
	public :
		
	student();
	void show();	
	
};

student::student()
{
	cout<<"ENTER NUMBER :";
	cin>>rno;
	
	cout<<"ENTER NAME :";
	cin>>name;
	
	cout<<"ENTER FEES : ";
	cin>>fees;
}

void student::show()
{
	cout<<endl<<rno<<"\t"<<name<<"\t"<<fees;
}

main()
{
	student s;
	s.show();
}
