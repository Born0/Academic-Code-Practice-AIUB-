#include <iostream>
using namespace std;

void division(int a, int b)
{
    if(b==0)
        {
            throw "Divided by zero is not possible";
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<"Result: "<<a/b<<endl;
            throw a/b;
        }
}

int main()
{
    int n1,n2;
    cout<<"Enter value for a and b: ";
    cin>>n1>>n2;

    try
    {
        division(n1,n2);
    }
    catch(int e)
    {
        cout<<"Caught"<<endl;
        cout<<e<<endl;
    }
    catch(const char* e)
    {
        cout<<"Caught"<<endl;
        cout<<e<<endl;
    }
}
