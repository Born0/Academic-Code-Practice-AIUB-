#include<iostream>

using namespace std;


	class Student
{
private:
    int id;
    string name;
    int credit;
    float cgpa;
public:
    void getValues(int i,string n,int cr,float cg)
		{
			id=i;
			name=n;
			credit=cr;
			cgpa=cg;
		}
    void putValues()
		{
		    cout<<"Name:"<<name<<endl<<"ID:"<<id<<endl<<"Credit:"<<credit<<endl<<"CGPA:"<<cgpa<<endl;
		}

};

 main()
	{
			int i;

			int id;
	    string name;
	    int credit;
	    float cgpa;

				string CG[10];
				int k=0;

	    Student s[10];
			for ( i = 0; i <5; i++)
			{
				cout<<"Name:";
		    cin>>name;
		    cout<<endl<<"ID:";
		    cin>>id;
		    cout<<endl<<"Credit:";
		    cin>>credit;
		    cout<<endl<<"CGPA:";
		    cin>>cgpa;
				cout<<endl<<endl;
				if(cgpa>=3.6)
				{
					CG[k]=name;
					k++;
				}
				s[i].getValues(id,name,credit,cgpa);
			}

			for ( i = 0; i < 5; i++)
			{
				 s[i].putValues();
			}
			cout<<"Studets name with CGPA 3.60 or Higher:";
			for( i=0;i<k;i++)
			{
				cout<<CG[i]<<endl;
			}

	}
