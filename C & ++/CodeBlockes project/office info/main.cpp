#include <iostream>

using namespace std;

class Employe
{
    string name;
    int id;
    int mobil;
    string address;
    float tax;
public:
    void getValues(string nm,int i,int mbl,string add,float tx)
    {
        name=nm;
        id=i;
        mobil=mbl;
        address=add;
        tax=tx;
    }
    void putValues();

};
void Employe::putValues()
{
    cout<<"Name:"<<name<<endl<<"ID:"<<id<<endl<<"Mobil nb:"<<mobil<<endl<<"Address:"<<address<<endl<<"Tax"<<endl;
}

int main()
{
    Employe off[50];
    int i=0;

    int serial,ml;
    string n,ad;
    float ta;
    for( ; ; )
    {
        cout<<"Enter name:";
        //cin>>n;
        getline(cin,n);
        if(n=="no")
        {
            break;
        }
        cout<<endl<<"Enter id:";
        cin>>serial;
        cout<<endl<<"Enter Mobil nb:";
        cin>>ml;
        cin.ignore();
        cout<<endl<<"Enter Address:";
        cin>>ad;
        cout<<endl<<"Enter tax:";
        cin>>ta;
        off[i].getValues(n,serial,ml,ad,ta);
        cout<<endl;
        off[i].putValues();
        cout<<endl;
        i++;
    }
}
