#include <iostream>
#include <cstdlib>
using namespace std;

class Movie
{
    string name;
    string genre;
    int rating;
  public:
    Movie()
    {

    }
    Movie(string nm,string gnr,int rt)
    {
      name=nm;
      genre=gnr;
      rating=rt;
      details(rating,name,gnr);
    }
    void details(string n,string g,int r)
    {
      Movie(n,g,r);
    }
    void details(int r,string n,string g)
    {
      cout<<endl<<"Name:"<<n<<endl;
      cout<<"Genre:"<<g<<endl;
      cout<<"Rating:"<<r<<endl;
    }
};

main()
{
  string n;
  string g;
  int r;
  Movie m;
  cout<<"Enter name:";
  cin>>n;
  cout<<endl<<"Enter genre:";
  cin>>g;
  r=rand()%11;
  m.details(n,g,r);
}
