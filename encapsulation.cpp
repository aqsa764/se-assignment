#include<iostream>
using namespace std;
class student
{
	
	int id;
	string name;
	
	public:
		
		void setid(int id)
		{
			this->id=id;
		}
		
		int getid()
		{
			return id;
		}
		
		void setname(string name)
		{
			this->name=name;
		}
		
		string getname()
		{
			return name;
		}
};

main()
{
	student s;
	s.setid(101);
	cout<<"\n ID: "<<s.getid();
	s.setname("RUTU");
	cout<<"\n NAME :"<<s.getname();
}
