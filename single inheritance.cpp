#include<iostream>

using namespace std;

class parent
{
	public:
		
	void showparent()
	   {
		cout<<"i am from parent class.\n";
	   }
};

class child : public parent
{
	public:
	void showchild()
	  {
		cout<<"i am from child class"<<endl;
	  }
};


int main()
{
	child obj;
	obj.showparent();
	obj.showchild();
	
}
