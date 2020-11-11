#include <iostream>
using namespace std;

void print(int men, int mai)
{
    for (int i=0; i<=mai; i++)
    {
        if (i==men || i==mai)
            cout<<'#';
        else
            cout<<' ';
    }
    cout << endl;
}

bool losango(int men, int mai)
{
    if (men<0) 
        return false;
    print(men, mai);
    if (losango(men-1, mai+1))
    {
        print(men, mai);
    }
    return true;
}

int main()
{
    for (int n=1; n<=1000; n++)
    {
        losango(n-1, n-1);
    }
    return 0;
}

//Desafio do @geek2code (instagram)
