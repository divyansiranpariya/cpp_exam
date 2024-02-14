#include<iostream>
using namespace std;


class Shape{


protected :
	
	string color;
	int area;
	
	public:
		set()
		{
			cout<<"enter a color:";
			cin>>color;
			
		}
 get(){
 	
 	cout<<color;
 }
 
};

class Circle:public Shape{
	
	private:
		int r;
	public:
		cal()
		{
			get();
          cout<<"enter a radius:";
          cin>>r;
		area=3.14*r*r;
		cout<<"area of circle:"<<area;
		
cout<<endl;
}
};
class Rectangle:public Shape{
	
	private:
		
		int l,w;
		public:
		cals()
		{
			cout<<"enter a length:";
			cin>>l;
			cout<<"enter a width:";
			cin>>w;
			
			area=l*w;
			cout<<"area of rectangle is:"<<area;
	}
};

int main()
{
	Shape s;
	
	Circle c;
	Rectangle r1;
	
	c.cal();
	r1.cals();
	
	return 0;
}
