#include<iostream>
using namespace std;

class calculator{
	public:
	float a=5;
	float b=0;
	float div;
	
	public:
		diap()
		{
	
	try{
		
		if(b==0)
		{
			throw b;
		}
		
		div=a/b;
		cout<<"divison is:"<<div;
	}
	catch(flaot n)
	{
		cout<<"can't divided";
	}
}
	
	
};
int main()
{
	Calculator c;
	
	c.disp();
	
}
