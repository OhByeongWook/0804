#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()  //1장 연습문제 6번 
{
    int alist[5] = {40,20,10,30,50};
    
    for(int i = 0; i < 5; i++)
        for(int j = i + 1; j < 5; j++)
            if(alist[i] > alist[j])
                swap(alist[i], alist[j]);
    for(auto k: alist)
        cout << k << ' ';    
}