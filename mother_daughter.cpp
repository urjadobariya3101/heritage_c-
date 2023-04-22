#include<iostream>

using namespace std;

class mother{
	
	public:
		
		void display(){
			
			cout<<"Mother Class..."<<endl;
		}
}; 

class daughter : public mother{
	
	public:
		
		void display1(){
			
			cout<<"Daughter Class..."<<endl;
		}
};

int main()
{
	
	daughter obj;
	
	obj.display();
	obj.display1();
	
	return 0;
}
