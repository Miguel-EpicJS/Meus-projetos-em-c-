#include <iostream>

using namespace std;

int main()
{
    int c1,c2,p1,p2;
    
    cin >> p1 >> c1 >> p2 >> c2;

    if (p1 * c1 == p2 * c2 && 10<=  p1 <= 100 && 10<=  p2 <= 100 && 10<=  c1 <= 100 && 10<=  c2 <= 100)
    {
        cout << "0" << endl;
    }else
    {
        cout << "1" << endl;
    }
    
    

    return 0;
}   