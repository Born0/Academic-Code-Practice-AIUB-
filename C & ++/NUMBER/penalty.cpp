#include<iostream>
#include<string>

using namespace std;

class ContactInfo
{
    string personName;
	int personID;
	int age;
	string gender;
	int mobileNumber;
	string address;
public:
  ContactInfo(string name,int id,int ag,string gen,int num,string adds)
  {
    personName=name;
    personID=id;
  	age=ag;
  	gender=gen;
    mobileNumber=num;
  	address=adds;
    showAllContactInfo( personName,personID,age,gender,mobileNumber,address);
  }
  }
  void showAllContactInfo(string personName, int personID ,int age,string gender,int mobileNumber,string  address)
  {
    cout<<"Name :"<<personName<<endl;
    cout<<"ID :"<<personID<<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"Gender :"<<gender<<endl;
    cout<<"Phone Number :"<<mobileNumber<<endl;
    cout<<"Address"<<address<<endl;
    detectMobileOperator(mobileNumber);

  }
  void  detectMobileOperator(int x)
  {
    int a=x%100000000;
    if(a==017)
     {
       cout<<"GP"<<endl;
     }
    if(a==018)
    {
     cout<<"ROBI"<<endl;
    }
    if(a==015)
    {
      cout<<"TELETALK"<<endl;
    }
  };
/*class ContactBook: public ContactInfo
{
  string ownerName;
  int n;
  cin>>n;
  ContactInfo con[n];

};*/

main()
{
  string n;
  int id;
  int age;
  string gen;
  int nb;
  string adds;
  ContactInfo c[2];
  for (size_t i = 0; i < 2; i++)
  {
    cin>>n;
    cin>>id;
    cin>>age;
    cin>>gen;
    cin>>nb;
    cin>>add;
    c[i]=ContactInfo(n,id,age,gen,nb,add);
  }


}
