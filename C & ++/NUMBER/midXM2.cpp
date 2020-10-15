#include <iostream>
using namespace std;
float celciusToFurenheit(float x);
main()
{
  cout<<"Enter temp in celcius:";
  float c;
  cin>>c;
    cout<<"Temp in Furenheit: "<<celciusToFurenheit(c);
}
float celciusToFurenheit(float x)
{
  return (9*x)/5+32;
}
