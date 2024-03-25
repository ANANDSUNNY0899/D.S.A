/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x=16;
	cout<<dec<<x<<endl;
	cout<<setbase(8)<<x<<endl;
	cout<<hex<<x<<endl;
	
}

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int age = 22,rollno = 910;cout<<setfill('#');
	cout<<setw(12)<<"My Rollno is"<<setw(8)<<rollno<<endl;
	cout<<setw(12)<<"My age is"<<setw(8)<<age;
	getch();
	return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n = 374.6850;
	cout<<setprecision(2)<<n;
}
*/
/*create a class which take a data member name,roll,cgpa class name student.
take a member function non inline which will initialize the data.
member fxn to display cgpa of the student upto 1 decimal place.*/

#include<iostream>
#include<iomanip>
using namespace std;
class student
{
	private:
	    char name[30];
	    int roll;
	    float cgpa;
	public:
		void getinfo();
		void dispaly();
}s[5];
void student::getinfo()
		{
			cout<<"Enter the deatail of  five student :";
			cin>>name>>roll>>cgpa;
		}
void student::dispaly()
		{
			cout<<setprecision(2)<<cgpa<<endl;
		}
int main()
{
	for(int i=0;i<4;i++)
	{
	student s[5];
	s[i].getinfo();
	s[i].dispaly();
	}
}

