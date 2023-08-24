#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
	public :
		 char name[1000];
		 int age;
		 char information[1000];
		 void set()
		 {
		 	cout<<"Enter Name = ";
		 	cin>>name;
		 	cout<<"Enter Age = ";
		 	cin>>age;
		 	cout<<"Enter Information = ";
		 	cin>>information;
		 }
};
class Zebra : public Animal
{
	 public :
	 	void get()
		 {
	 	    	cout<<"Name is :- "<<name<<endl
	 		    <<"Zebra Age is :-  "<<age<<endl
	 		    <<"Information for Zebra :- "<<information<<endl;	
		 }
};
class Dolphin : public Animal
{
	  public :
	  	void print()
		  {
	  				    cout<<"Name is : "<<name<<endl
	  				    <<"Dolphin Age is : "<<age<<endl
	  				    <<"Information for Dolphine : "<<information<<endl;
		  }
};

int main()
{
	Zebra z;
	   z.set();
	   cout<<" "<<endl;
	   z.get();
	cout<<"***********************"<<endl;
	Dolphin d;
	   d.set();
	   cout<<" "<<endl;
	   d.print();
	      
	
	return 0;
}
