#include <iostream>
#include <iomanip>
using namespace std;
int a;
int main()
{
    cout << "The world is made of \n land \n water \n air.\n\n\n"
         << "The world is made of\n land \t water \t air.\n\n\n"
         << "The world is made of\n land \b water \b air.\n\n\n"
         << "The world is made of" << setw(1) << " land " << setw(2) << " air" << setw(3) << " water." << endl;
}