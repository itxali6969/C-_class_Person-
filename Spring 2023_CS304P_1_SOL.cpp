#include<iostream>
using namespace std;

class Person{
	private:
		char* name;
		int vuid;
		char* gender;
		
		public:
			Person(){
				cout<<"---------------------------------"<<endl;
				cout<<"Default constructor called."<<endl;
				name="";
				vuid=0;
				gender="";
			}
			Person(char* sname, int svuid, char* sgender){
				cout<<"---------------------------------"<<endl;
				cout<<"Parameterized constructor called with name=  "<<sname<<endl<<"vuid=  "<<svuid<<endl<<"gender=  "<<sgender<<endl;
				name=sname;
				vuid=svuid;
				gender=sgender;
			}
			Person(const Person& copy){
				cout<<"---------------------------------"<<endl;
				cout<<"Copy constructor called."<<endl;
				name=copy.name;
				vuid=copy.vuid;
				gender=copy.gender;
			}
			void printDetails()
			{
				cout<<"---------------------------------"<<endl;
				cout<<"Person details:"<<endl;
				cout<<"Name= "<<name<<endl;
				cout<<"VUID= "<<vuid<<endl;
				cout<<"Gender= "<<gender<<endl;
			}
		
};

int main()
{
	Person P1;
	Person P2("StudentFirstname", 1234567, "M");
	Person P3=P2;
	P1.printDetails();
	P2.printDetails();
	P3.printDetails();
	 return 0;
	 	
}

