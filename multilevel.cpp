#include<iostream>

using namespace std;

class A{
	
	public:
		
		int id;
		char name[10];
		char role[20];
		int salary;
		int experience;
		char company_name[20];
		char address[20];
		char email[30];
		int contact;
		
		
		void setter(){
			cout<<"Enter Id : ";
			cin>>id;
			
			cout<<"Enter Name : ";
			cin>>name;
			
			cout<<"Enter Role : ";
			cin>>role;
		}
};

class B : public A{
	
	public:
		
		void setter(){
			cout<<"Enter Your Salary : ";
			cin>>salary;
			
			cout<<"Enter Your Experience : ";
			cin>>experience;
			
		}
};

class C : public B{
	
	public:
		
		void setter(){
			cout<<"Enter Company Name : ";
			cin>>company_name;
			
			cout<<"Enter Your Address : ";
			cin>>address;
			
		}
		
		void getter(){
			
			cout<<endl<<"Name : "<<name<<endl;
			cout<<"Role : "<<role<<endl;
			cout<<"Salary : "<<salary<<endl;
			
		}
};

class D : public C{
	
	public:
		
		void setter(){
			
			cout<<"Enter Your Email : ";
			cin>>email;
			
			cout<<"Enter Your Contact Number : ";
			cin>>contact;
			
		}
		
		void getter(){
			
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Role : "<<role<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"Experience : "<<experience<<endl;
			cout<<"Company Name : "<<company_name<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"E-mail : "<<email<<endl;
			cout<<"Contact : "<<contact<<endl;
			
		}
};

int main()
{
	
	D obj;
	
	obj.A::setter();
	obj.B::setter();
	obj.C::setter();
	obj.C::getter();
	obj.D::setter();
	obj.D::getter();
	
	return 0;
}
