#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;
public:
    date GetDate() const{
        date d;
        d.day = this->day;
        d.month = this->month;
        d.year = this->year;
        return d;
    }
};

ostream& operator << (ostream& o, const date& c){
    o << c.GetDate();
    return o;
}

int main(){

}
