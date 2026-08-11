#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book
{
private:
    int bookId;
    char title[44];
    float price;
public:
    Book()
    {
        bookId = 0;
        strcpy(title,"No title");
        price = 0;
    }

    void getBookData()
    {
        cout<<"Enter bookId,title and price of the book";
        cin>>bookId;
        cin.ignore();
        cin.getline(title,19);
        cin>>price;
    }
    void showBookData ()
    {
        cout<<"\n"<<bookId<<" "<<title<< " " << price;
    }
    int storeBook();
    void viewAllBooks();
    void searchBook(char *);
};

void Book::searchBook(char *t)
{
    ifstream fin;
    bool flag = false;
    fin.open("sample1_class.txt",ios::in | ios::binary);
    if(!fin) cout<<"\nFile not found";
    else {
        fin.read((char *)this,sizeof(*this));
        while(!fin.eof()){
            if(!strcmp(t,title)) {
                showBookData();
                flag = true;
            }

            fin.read((char*)this,sizeof(*this));
        }
        if(!flag) cout<<"File not exist";
        fin.close();
    }
}

void Book::viewAllBooks()
{
    ifstream fin;
    fin.open("sample1_class.txt",ios::in | ios::binary);
    if(!fin) {
        cout<<"\nFile nnot found";
    }
    else {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            showBookData();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
}


int Book::storeBook()
{
    if(bookId==0 && price==0){
        cout<<"Book data not initilized";
        return 0;
    }
    else {
        ofstream fout;
        fout.open("sample1_class.txt",ios::app | ios::binary);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return 1;
    }
}

int main()
{

    Book b1;
   // b1.getBookData();
  //  b1.showBookData();
  //  b1.storeBook();
  //  b2.showBookData();
  //  b2.storeBook();
  //  b1.viewAllBooks();
  b1.searchBook("php");
}
