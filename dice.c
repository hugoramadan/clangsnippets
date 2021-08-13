#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    int dist[7] = {0};
    int num;
    srand(time(NULL));

    for(int i = 0; i < 2000; i++) {
        system("CLS");
        num = rand() % 6 +1 ;
        dist[num] +=1;
        printf("1=%d\n2=%d\n3=%d\n4=%d\n5=%d\n6=%d\n", dist[1],dist[2],dist[3],dist[4],dist[5],dist[6]);
    }
    system("PAUSE");
    return 0;
}
