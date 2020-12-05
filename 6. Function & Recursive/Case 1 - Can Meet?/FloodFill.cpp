#include <stdio.h>
using namespace std;

char map[500][500] = {};

void printMap()
{
    for (int i = 0; i < 30; i++)
    {
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}
void floodFill(int y, int x)
{
    if (map[y][x] == '#' || map[y][x] == '*')
    {
        return;
    }
    map[y][x] = '*';
    // printMap();
    // getchar();

    floodFill(y - 1, x);
    floodFill(y + 1, x);
    floodFill(y, x + 1);
    floodFill(y, x - 1);
    return;
}

int main()
{
    int t = 0;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++)
    {
        int w, h;
        scanf("%d %d", &w, &h);
        getchar();
        int sX, sY, eX, eY;
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                scanf("%c", &map[j][k]);
                if (map[j][k] == 'S')
                {
                    sY = j;
                    sX = k;
                }
                else if (map[j][k] == 'E')
                {
                    eY = j;
                    eX = k;
                }
            }
            getchar();
        }

        floodFill(sY, sX);
        printf("Case #%d: %s\n", i + 1, map[eY][eX] == '*' ? "YES" : "NO");
    }
    return 0;
}