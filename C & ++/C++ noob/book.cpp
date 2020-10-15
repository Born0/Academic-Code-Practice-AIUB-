#include <iostream>
using namespace std;

class Book{
  private:
    string name;
    string ISBN;
    int year;
    double price;
  public:
    Book()
    {

    }
    Book(string nm,string IS,int yr,double pr)
    {
      name=nm;
      ISBN=IS;
      year=yr;
      price=pr;
    }

    Book modify(Book nBook,double concession)
    {
      double avgPrice=(nBook.price+price)/2;
      if(nBook.year<2010)
      {
         nBook.price=avgPrice-concession;
      }
      else
       {
         nBook.price=avgPrice;
       }
       return nBook;

    }

    void display()
    {
      cout<<endl<<"Book Name:"<<name<<endl<<"ISBN:"<<ISBN<<endl<<"year:"<<year<<endl<<"price:"<<price<<endl;
    }
};

 Book initial()
 {
   string nm,IS;
   int yr;
   double pr;
      cout<<"Enter Book name:";
      cin>>nm;
      cout<<"ISBN:";
      cin>>IS;
      cout<<"year:";
      cin>>yr;
      cout<<"price:";
      cin>>pr;
      Book nBook(nm,IS,yr,pr);
      return nBook;
    }

main()
{
  Book book1,modBook,book2("Name of Book 2","ISBN of Book 2",2015,500);

  book1=initial();
  modBook=book2.modify(book1,100);

  cout<<endl<<"before modification:"<<endl;
  book1.display();

  cout<<endl<<"after modification:"<<endl;
  modBook.display();

  cout<<endl<<"Information from Book 2:"<<endl;
  book2.display();
}
