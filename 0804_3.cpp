#include <iostream>

using namespace std;

int main()
{
    int alist[5] = {10,20,30,40,50};

    for(int i = 0; i < 5; i++)
        cout << alist[i] << ' ';
    
    cout << endl;

    for(auto n : alist)
        cout << n << ' ';
        
    cout << endl;

    for(auto &n : alist)
        cout << n << ' ';
            
}