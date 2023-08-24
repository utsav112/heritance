#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
		int id;
		char name[1000];
		char roll[1000];
		char salary[1000];
		int experience;
		char comp_name[500];
		char add[1000];
		char email[500];
		char contact[10];
		
		void setter()
		{
			
			cout<<"Enter Id = ";
			cin>>id;
			cout<<"Enter Name = ";
			cin>>name;
			cout<<"Enter Employe Roll = ";
			cin>>roll;
		}		
};
class B : public A{
	    public :
	    void setter(){
	    	cout<<"Enter Employe Salary = ";
	    	cin>>salary;
	    	cout<<"Enter Employe Experience = ";
	    	cin>>experience;
		}
};
class C : public B{
	    public :
	     void setter(){
	     	 cout<<"Enter Employe Compny Name = ";
	     	 cin>>comp_name;
	     	 cout<<"Enter Employe Address = ";
	     	 cin>>add;
		 }
		 void getter(){
		 	cout<<"Name = "<<name<<endl
		 	    <<"Employe Roll = "<<roll<<endl
		 	    <<"Employe Salary = "<<salary<<endl;
		 }
	
};
class D : public C{
	     public :
	    void setter(){
	    	cout<<"Enter Email ID = ";
	    	cin>>email;
	    	cout<<"Enter Contact Number = ";
	    	cin>>contact;
		}
		void getter(){
			cout<<"Employe ID = "<<id<<endl
			    <<"Employe Name = "<<name<<endl
			    <<"Employe Roll = "<<roll<<endl
			    <<"Employe Salary = "<<salary<<endl
			    <<"Employe Experience = "<<experience<<endl
			    <<"Employe Compny Name = "<<comp_name<<endl
			    <<"Employe Address = "<<add<<endl
			    <<"Employe Email ID = "<<email<<endl
			    <<"Employe Contact Number = "<<contact<<endl;
		}
	
};
int main(){
	D d;
    d.A::setter(); 
	d.B::setter();
//	d.C::getter();
	d.C::setter();
	d.D::setter();
	d.D::getter();
	
	return 0;
}
