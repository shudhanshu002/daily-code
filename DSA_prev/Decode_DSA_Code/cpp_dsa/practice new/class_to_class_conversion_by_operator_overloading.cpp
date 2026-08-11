#include <iostream>
using namespace std;


class Dollar
{
private:
    float amount;
public:
    Dollar(float amt): amount(amt) {}

    operator float() const {
        return amount*74.5;
    }
};

class Rupee
{
private:
    float amount;
public:
    Rupee(float amt):amount(amt) {}

    void display() const {
    cout<<"Amount in rupee: "<<amount<<endl;
    }

    Rupee(const Dollar & dollar) {
        amount = static_cast<float>(dollar);
    }
};

int main()
{

    Dollar d(1.0);
    Rupee r =d;
    r.display();
}
