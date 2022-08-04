#include <iostream>

using namespace std;

int testfunc(int nparm1 = 10, int nparm2 = 20, int nparm3 = 30) //디폴트 값은 앞에서부터 매칭된다.
{
    return nparm1 + nparm2 + nparm3;
}

int main()
{
    cout << testfunc() << endl;
    cout << testfunc(1) << endl;
    cout << testfunc(1,2) << endl;
    cout << testfunc(1,2,3) << endl;

    
}