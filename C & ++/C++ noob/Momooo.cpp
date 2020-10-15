
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
    ContactInfo(){}
    ContactInfo(string pN, int pID, int a, string gen, int mN, string addr){
        personName=pN;
        personID=pID;
        age=a;
        gender=gen;
        mobileNumber=mN;
        address=addr;
    }
    void detectMobileOperator(int mN){
        int mOp=mN%100000000;

        if(mOp==017){
            cout<<"GrammenPhone"<<endl;
        }else if(mOp==015){
            cout<<"Teletalk"<<endl;
        }
    }
    void showInfo(){
        cout<<"Name :"<<personName<<endl;
        cout<<"ID :"<<personID<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Gender :"<<gender<<endl;
        cout<<"Phone Number :"<<mobileNumber<<endl;
        cout<<"Address"<<address<<endl;
    }
};

class ContactBook: public ContactInfo
{
    string ownerName;
	int *listOfContact;
public:
    ContactBook(){}
    ContactBook(string oN){

    int n;
    //cin>>n;
    listOfContact= new int[n];
    ownerName=oN;
    }
    void addContact(int con){
        ContactInfo("Rahim",01,18,"Male",con,"Dhaka, Bangladesh");
    }
	void deleteContact(ContactInfo con){
	}
	void showAllContactInfo(){
	    showInfo();
	}


};


int main()
{
    ContactBook c1;
    c1.addContact(01711111111);
    c1.showAllContactInfo();
    c1.detectMobileOperator(01711111111);
}
