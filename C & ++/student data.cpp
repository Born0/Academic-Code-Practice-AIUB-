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
    void getValues()
		{

		}
    void putValues()
		{
		    cout<<"Name:"<<name<<endl<<"ID:"<<id<<endl<<"Credit:"<<credit<<endl<<"CGPA:"<<cgpa<<endl;
		}

};

 main()
	{
			int i,count;
			int CG[10];
			int k=0;
			int id;
	    string name;
	    int credit;
	    float cgpa;
	    Student s[10];
			for ( i = 0; i < count; i++)
			{
				cout<<"Name:";
		    cin>>name;
		    cout<<endl<<"ID:";
		    cin>>id;
		    cout<<endl<<"Credit:";
		    cin>>credit;
		    cout<<endl<<"CGPA:";
		    cin>>cgpa;
				if(cgpa>=3.6)
				{
					CG[k]=id;
					k++;
				}
				s[i].getValues();
			}

			for ( i = 0; i < count; i++)
			{
				 s[i].putValues();
			}
			for( i=0;i<k;i++)
			{
				cout<<CG[i]<<endl;
			}

	}
