#include <iostream>

using namespace std;

int main()
{
    int c1,c2,p1,p2;
    int c,e;
    c=0;
    e=1;
    cin >> p1 >> c1 >> p2 >> c2;

    if (p1 * c1 == p2 * c2)
    {
        cout << c << endl;
    }else if(p1 * c1 != p2 * c2)
    {
        cout << e << endl;
    }
    
    

    return 0;
}  
