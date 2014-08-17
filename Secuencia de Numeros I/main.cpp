//serie de numeros 1,2,1,2,3,2,1 ....... 

#include <iostream> 
using namespace std;

int main()
{
    int N, cnt = 0, i = 1, j = 1;
    cin >> N;

    while(N >= cnt)
    {
        for(i; cnt > i; i++)
            cout << i << ",";

        for(i; i > 1; i--)
            cout << i << ",";

        cnt++;
    }
    cout << j << endl;
}
