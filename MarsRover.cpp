#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int limX, limY; scanf("%d %d", &limX, &limY);
    int x, y; char d;

    while(scanf("%d %d %c", &x, &y,&d))
    {
        string commands; cin >> commands;
        char pos[4] = {'N','E','S','W'};

        int iter, length = commands.size();
        for(int i =0;i < 4; i++){
            if(pos[i] == d){
                iter = i;
                break;
            }
        }

        for(int i =0; i < length; i++){
            if(commands[i] == 'R')
                iter++;
            if(commands[i] == 'L')
                iter--;

            if(iter > 3)
                iter = 0;
            if(iter < 0)
                iter = 3;

            if(pos[iter] == 'N' && commands[i] == 'M')
                y = y+1;
            if(pos[iter] == 'S' && commands[i] == 'M')
                y = y-1;
            if(pos[iter] == 'E' && commands[i] == 'M')
                x = x+1;
            if(pos[iter] == 'W' && commands[i] == 'M')
                x = x-1;
        }
        if(x < 0 || x > limX)
            printf("OUT OF BOUNDS\n");
        else if(y <0 || y > limY)
            printf("OUT OF BOUNDS\n");
        else
        printf("%d %d %c \n", x, y, pos[iter]);

    }
    return 0;
}
