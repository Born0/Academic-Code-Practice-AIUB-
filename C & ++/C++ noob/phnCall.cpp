//Project by Md. Habibullah & Shahriar Tushar

//headers****************************************************************************************
#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<stdio.h>
#include<conio.h>
#include<ctime>
using namespace std;


//class PhoneCall********************************************************************************
class PhoneCall
{
private:
    string PhoneNumber;
    string StartDateTime;
    int CallDuration;
    float PerSecondCallCost;
public:
    PhoneCall(); //constructor
    ~PhoneCall(); //destructor
    void setPhoneNumber(string phnNumber); //set a phone number
    void setStartDateTime(string DateTime); //set date & time
    void setCallDuration(int seconds); // set call duration
    void setPerSecondCallCost(float cost); //set per second call cost
    string getPhoneNumber(); //get phone number
    string getStartDateTime(); //get date & time
    int getCallDuration(); //get call duration
    float getPerSecondCallCost(); // get per second call cost
    float costOfCall(); //payable cost of a call
};

//class Property*********************************************
PhoneCall :: PhoneCall()
{
    PhoneNumber = "";
    StartDateTime = "";
    CallDuration = 0;
    PerSecondCallCost = 0;
}

PhoneCall :: ~PhoneCall()
{

}

void PhoneCall :: setPhoneNumber(string phnNumber)
{
    PhoneNumber = phnNumber;
}

void PhoneCall :: setStartDateTime(string DateTime)
{
    StartDateTime = DateTime;
}

void PhoneCall :: setCallDuration(int seconds)
{
    CallDuration = seconds;
}

void PhoneCall :: setPerSecondCallCost(float cost)
{

    PerSecondCallCost = cost;
}

string PhoneCall :: getPhoneNumber()
{
    return PhoneNumber;
}

string PhoneCall :: getStartDateTime()
{
    return StartDateTime;
}

int PhoneCall :: getCallDuration()
{
    return CallDuration;
}

float PhoneCall :: getPerSecondCallCost()
{
    return PerSecondCallCost;
}

float PhoneCall :: costOfCall()
{
    return PerSecondCallCost*CallDuration;
}

//class Phone*************************************************************************************
class Phone
{
    float Credit;
    vector<PhoneCall> CallLog;
public:
    Phone(); //constructor
    ~Phone(); //destructor
    void setCredit(int balance); //set credit
    void AddCall(PhoneCall call); //taking a object of PhoneCall class
    float getCredit(); //get credit
    vector<PhoneCall> getCallHistoty(); //get a call history of a call
};

//class Property**********************************************
Phone :: Phone()
{
    Credit=100; //initialized credit as 100
}

Phone :: ~Phone()
{

}

void Phone :: setCredit(int balance)
{
    Credit += balance; //add credit
}

void Phone :: AddCall(PhoneCall call)
{
    CallLog.push_back(call); //enter a object in call log
    Credit -= call.costOfCall(); //present credit calculation
}

float Phone :: getCredit()
{
    return Credit;
}

vector<PhoneCall> Phone :: getCallHistoty()
{
    return CallLog;
}

//class Person

//others function*********************************************************************************

void clrscr() //to clear screen
{
   system("cls");
}

string Time() //to set present time & date
{
    time_t now = time(0);
    char* DateTime = ctime(&now);

    return DateTime;
}

//main function***********************************************************************************
int main()
{
    PhoneCall call[100];
    Phone phn;

    char select = 0; //option selector
    int i = 0; //for array place selection
    int minute,second; //count minute & second

    cout << "\tMENU\n" << "1.Call\n" << "2.Credit\n" << "3.History\n" << "Q.Quit" << endl;
    while(1)
    {
        cout << "\nGo To: ";
        cin >> select;

        if(select=='0') //menu option
        {
            clrscr();
            cout << "\tMENU\n" << "1.Call\n" << "2.Credit\n" << "3.History\n" << "Q.Quit" << endl;
        }
        else if(select=='1') //call option
        {
            string PhnNum;

            clrscr();

            if( phn.getCredit() < 10) //check credit to make call
                    cout << "Please Recharge First" << endl;
            else
                {
                    cout << "\tCALL" << endl;
                    cout << "Enter Phone Number: ";
                    cin >> PhnNum;

                    call[i].setPhoneNumber(PhnNum); //send phone number
                    call[i].setStartDateTime(Time()); //send present time& date
                    call[i].setCallDuration(1 + (rand() % 300)); //set random duration
                    call[i].setPerSecondCallCost(0.05); //fix per second call cost
                    phn.AddCall(call[i]); //send an object

                    i++; //increasing array place
                }

                cout << "\nPress 0 to go to Menu." << endl;
        }
        else if(select=='2') //credit option
        {
            clrscr();
            cout << "\tCREDIT" << endl;
            cout << "a.Add Credit\nb.See Credit\nc.Per Second Call Cost" << endl;
            cout << "\nPress 0 to go to Menu." << endl;
        }
        else if(select=='a' || select== 'A') //add credit option
        {
            float credit;

            clrscr();

            cout << "\tCREDIT" << endl;
            cout << "Enter Credit: ";
            cin >> credit;

            phn.setCredit(credit); //send credit to add
            cout << "\n\nPress 0 to go to Menu." << endl;
        }
        else if(select=='b' || select== 'B') //see credit option
        {
            clrscr();

            cout << "\tCREDIT" << endl;
            cout << "Your current balance is :" << phn.getCredit() << endl;

            cout << "\nPress 0 to go to Menu." << endl;
        }
        else if(select=='c' || select== 'C') //see credit option
        {
            clrscr();

            cout << "\tCREDIT" << endl;
            cout << "Per second call cost is : 0.05 tk." << endl;

            cout << "\nPress 0 to go to Menu." << endl;
        }
        else if(select == '3') //history option
        {
            clrscr();

            cout << "HISTORY\n" << endl;

            vector<PhoneCall> calls = phn.getCallHistoty(); //call history
            for(int j=0 ; j<calls.size() ; j++)
            {
                cout << "\nPhone Number : " << calls[j].getPhoneNumber() << endl; //print phone number
                cout << "Time & Date : " << calls[j].getStartDateTime() ; //print time & date

                second = call[j].getCallDuration();
                if( second > 60)
                {
                    minute = second /60; //find minute
                    second = second % 60; //find second
                    cout << "Call duration : " << minute << "min " << second << "sec" << endl; //print minute & second
                }
                else
                    cout << "Call duration : " << second << "sec" << endl; //print only second
                cout << endl;
            }

            cout << "\nPress 0 to go to Menu." << endl;
        }

        else if(select== 'q' || select== 'Q') //quit option
            break;
        else
        {
            clrscr();
            cout << "\nPlease Follow The Instruction." << endl;
            cout << "\nPress 0 to go to Menu." << endl;
        }

    }

    return 0;
}

