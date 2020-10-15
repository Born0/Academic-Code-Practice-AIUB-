#include<iostream>

using namespace std;
main()
{
	class student
	{
    private:
	    int id;
	    string name;
	    int credit;
	    float cgpa;
    public:
        void getValues();
        void putValues();
	};

	void Student::getvalues()
	{
	    cout<<"Name:"<<endl;
	    cin>>name;
	    cout<<"ID:"<<endl;
	    cin>>id;
	    cout<<"Credit:"<<endl;
	    cin>>credit;
	    cout<<"CGPA:"<<endl;
	    cin>>cgpa;
	}

	void Student:: putValues()
	{
	    cout<<"Name:"<<name<<endl<<"ID:"<<id<<endl<<"Credit:"<<credit<<endl<<"CGPA:"<<cgpa<<endl;
	}

	int main()
	{
	    Student s1;

	    s1.getValues();

	    s1.putValues();
	    return 0;
	}
}
