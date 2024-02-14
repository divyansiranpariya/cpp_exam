#include<iostream>
using namespace std;


class Employ{
	
	private:
		
		string name;
		int salary;
		string designation;
		
		public:
			
			setdata()
			{
				cout<<"enter a name:";
				cin>>this->name;
				cout<<"enter a salary:";
				cin>>this->salary;
				cout<<"enter a designation:";
				cin>>this->designation;
				cout<<endl<<endl;
				
			}
			
			getdata()
			{
				cout<<"Name:"<<this->name<<endl;
				cout<<"Salary:"<<this->salary<<endl;
				cout<<"Designation:"<<this->designation<<endl;
			}
};



int main()
{
	Employ e;
	
	e.setdata();
	e.getdata();
	
	return 0;
}
