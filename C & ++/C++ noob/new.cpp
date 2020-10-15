#include<iostream>
#include<string>

using namespace std;


class ContactInfo
{
    string personName;
	int personID;
	int age;
	string gender;
	string mobileNumber;
	string address;
  public:
    ContactInfo()
    {

    }
  ContactInfo(string name,int id,int ag,string gen,string num,string adds)
  {
    personName=name;
    personID=id;
  	age=ag;
  	gender=gen;
    mobileNumber=num;
  	address=adds;
    showAllContactInfo( personName,personID,age,gender,mobileNumber,address);
  }

void showAllContactInfo(string personName
                          ,int personID
                          ,int age
                          ,string gender
                          ,string mobileNumber
                          ,string  address)
  {
    cout<<"Name :"<<personName<<endl;
    cout<<"ID :"<<personID<<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"Gender :"<<gender<<endl;
    cout<<"Phone Number :"<<mobileNumber<<endl;
    cout<<"Address:"<<address<<endl;
    detectMobileOperator(mobileNumber);

  }


 void  detectMobileOperator(string inputMobileNumber)
  {
      cout<<"The oparetor is:";
      if ( inputMobileNumber[2]=='7')
      {
        cout<<"GP"<<endl;

      }
      else if ( inputMobileNumber[2]=='6')
        {
         cout<<"AIRTELL"<<endl;

        }
      else if ( inputMobileNumber[2]=='9')
      {
        cout<<"BL"<<endl;
      }
      else if ( inputMobileNumber[2]=='5')
      {
        cout<<"Teletalk"<<endl;
      }
  }
};

main()
{
  ContactInfo c1;
  string n;
  int id;
  int age;
  string gen;
  string nb;//contact number
  string adds;
    cout<<"Name:";
         cin>>n;
         cout<<endl<<"id:";
         cin>>id;
         cout<<endl<<"age:";
         cin>>age;
         cout<<endl<<"gender:";
         cin>>gen;
         cout<<endl<<"number:";
         cin>>nb; //contact number
         cout<<endl<<"address:";
         cin>>adds;

      c1=ContactInfo(n,id,age,gen,nb,adds);

}
