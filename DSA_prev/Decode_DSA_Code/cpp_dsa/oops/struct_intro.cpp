#include <conio.h>
#include <iostream>
using namespace std;
struct Book {
private:
    int bookid;
    char title[23];
    float price;
public:

    void input(){
        cout<<"Enter book_id title and price of bookjj";
        cin>>bookid>>title>>price;
        if(bookid<0) bookid=-bookid;
    }

    void display(){
        cout<<"Book id: "<<bookid<<"\ntitle :"<<title<<"\nPrice: "<<price;
    }
};

int main(){
    Book dr;
    dr.input();
    dr.display();
}
