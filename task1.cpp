#include<iostream>
using namespace std;

class Rectangle{
	
	private:
		
		int length;
		int width;
		int area;
		
		public:
		
		Rectangle(int l,int w)
		{
			this->length=l;
			this->width=w;
			
				}		
				
				cal()
				{
					area=length*width;
					cout<<"area of rectangle is:"<<area;
				}
};

int main()
{
	int w,l;
	
	cout<<"enter a length ";
	cin>>l;
	
	cout<<"enter a width:";
	cin>>w;
	
	Rectangle r(l,w);
	
r.cal();
	
	return 0;
}
