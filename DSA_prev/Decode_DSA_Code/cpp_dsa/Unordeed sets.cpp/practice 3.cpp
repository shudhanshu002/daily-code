#include <iostream>
#include <iomanip>>
#include <cstring>
using namespace std;
class Item {
private:
    int id;
    float price;

public:
    inline void setItem(int id,float price){
        this->id=id;
        this->price=price;
    }

    inline float total(int quantity) {
        return price*quantity;
    }
};

int main()
{
    Item fir;
    int id,quantity;
    float price;
    cin>>id;
    cin>>price;
    cin>>quantity;
    fir.setItem(id,price);
    float total=fir.total(quantity);
    cout<<"Total" <<fixed<<setprecision(2)<<total;

}
