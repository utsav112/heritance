#include<iostream>
#include<string.h>

using namespace std;
class Mother
{
	public :
		char msg[100];
		void display(){
			
			cout<<"My Lovely Daughter "<<msg<<endl;
		}
};
class Daughter : public Mother
{
	 public :
	 	  char msg[100];
	 	  void display()
		   {
	 	  	cout<<"My Lovely MoM"<<msg<<endl;
		   }	
};

int main()
{
	Daughter d;
	 d.Mother :: display();
	 d.display();
	
	return 0;
}
