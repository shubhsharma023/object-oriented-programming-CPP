#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class publications
{
protected:
    char name[100];
    float price;

public:
    void get()
    {
        cout << "enter the name of publication" << endl;
        cin >> name;
        cout << "enter the price" << endl;
        cin >> price;
    }
};
class Book : private publications
{
protected:
    int page_count;

public:
    void set()
    {
        get();
        cout << "enter the page count" << endl;
        cin >> page_count;
    }
    void details()
    {
        cout << "name: " << name << endl;
        cout << "price: " << price << endl;
        cout << "page count : " << page_count << endl;
    }
};
class Tape : private publications
{
private:
    float duration;

public:
    void set()
    {
        get();
        cout << "enter the duration" << endl;
        cin >> duration;
    }
    void details()
    {
        cout << "name: " << name << endl;
        cout << "price: " << price << endl;
        cout << "duration : " << duration << endl;
    }
};
int main(int argc, char const *argv[])
{
    Tape t;
    t.set();
    t.details();
    Book b;
    b.set();
    b.details();
    return 0;
}