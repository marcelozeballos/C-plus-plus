// realizar la suma de todos los numeros pares menores o iguales a N

#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;
    for(int i = 0; N >= i; i++)
        if(i%2 == 0)
            sum += i;
    cout << sum << endl;
}
