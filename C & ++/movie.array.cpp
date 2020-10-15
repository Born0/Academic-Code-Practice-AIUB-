#include<iostream>
#include<cstdlib>
using namespace std;

class Movie
{
  string title;
  string genre;
  int rating;
public:
  Movie()
  {
      title = "NULL";
      genre = "NULL";
      rating = 0;
  }
  Movie(string tt,string gnr,int r)
  {
    title="tt";
    genre="gnr";
    rating=r;
  }
  void printDetail()
  {
    cout<<"Title:"<<title<<endl;
    cout<<"Genre:"<<genre<<endl;
    cout<<"Rating:"<<rating<<endl;
    cout<<endl<<endl;
  }
};

void highestLowest(int n,int x[])
{
  cout<<endl<<endl;
  int s,h,i;
  h=x[0];
  for (i = 0; i<n; i++)
   {
    if (x[i]>h)
    {
      h=x[i];
    }
   }
  cout<<"highest rating:"<<h<<endl;
   for(i=0;i<n;i++)
   {
     if(h==x[i])
     {
       s=i+1;
      cout <<"serial:"<<s<<endl;
     }
   }
   for (i = 0; i<n; i++)
    {
     if (x[i]<h)
     {
       h=x[i];
     }
    }
    cout<<"lowest rating:"<<h<<endl;
    for(i=0;i<n;i++)
    {
      if(h==x[i])
      {
        s=i+1;
       cout <<"serial:"<<s<<endl;
      }
    }
    cout<<endl<<endl;
}

main()
{
  int i;
  int n;
  cout<<"Enter boject count:";
  cin>>n;
  int r[n];
  Movie m[n];
  for(i=0;i<n;i++)
  {
    string t="title";
    cout<<"Enter title:";
    cin>>t;
    string g="genre";
    cout<<"Enter genre:";
    cin>>g;
    r[i]=rand()%11;
    m[i]=Movie(t,g,r[i]);
  }
  highestLowest(n,r);
  for(i=0;i<n;i++)
  {
  m[i].printDetail();
  }

}
