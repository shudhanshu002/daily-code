#include <iostream>
#include <string>
using namespace std;

class GradeBook {
private:
    string cname;
    string teacher;

public:
    GradeBook(string cname,string teacher) {
        this->cname=cname;
        this->teacher=teacher;
    }
    void displayMessage() const {
        cout<<"Welcome to the grade book for "<<cname<<endl;
        cout<<"This course is presented by: "<<teacher<<endl;
    }
};

int main()
{
    string cname,teacher;
    getline(cin,cname);
    getline(cin,teacher);
    GradeBook g(cname,teacher);
    g.displayMessage();
}
