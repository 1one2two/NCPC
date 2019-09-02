#include<stdio.h>

int main(){
    int cou, lon, p1, p2;
    while(scanf("%d", &cou) != EOF){
        for(int i = 0; i < cou; i++){
            scanf("%d\n", &lon);
            int x, y;
            scanf("%d %d", &x, &y);
            int  lx = x, rx = x, uy = y, dy = y;
            for(int j = 1; j < lon; j++){
                scanf("%d %d", &x, &y);
                lx = x < lx ? x : lx;
                rx = x > rx ? x : rx;
                uy = y > uy ? y : uy;
                dy = y < dy ? y : dy;
            }
            printf("%d\n", (rx - lx) * (uy - dy));
        }
    }
    return 0;
}
/*
2
10
10 1
10 2
8 2
8 5
7 5
7 2
5 2
5 4
2 4
2 1
4
2 1
5 1
5 4
2 4

//*/