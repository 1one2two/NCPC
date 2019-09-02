#include<stdio.h>
#include<math.h>

long int lcm_small = 0;

long int lcm(long int a, long int b,long int c,long int ip){
    long int p = 0; 
    p = a > b ? a : b;
    p = c > p ? c : p;

    for(long int i = p; i <99999999999; i++){
        if(i > lcm_small)return 9999999999;
        if(i % a == 0 && i % b == 0 && i % c == 0){
            printf("%ld =  %ld + %ld + %ld => %ld\n", ip, a, b, c, i);
            return i;
        }
    }

    return 9999999999;
}

int main(){
    long int inp;
    while(scanf("%ld", &inp) != EOF){
        if(inp == 0)return 0;
        lcm_small = inp;
        long int la, lb, lc;
        for(long int i = 1; i < inp; i++){
            for(long int j = i; j < inp; j++){
                for(long int k = j; k < inp; k++){
                    if((i + j + k) == inp){
                        long int p = lcm(i, j, k, inp);
                        if(p < lcm_small){
                            la = i; lb = j; lc = k;
                        }
                        lcm_small = p  < lcm_small ? p : lcm_small;
                    }
                }
            }
        }
        printf("%ld %ld %ld\n", la, lb, lc);
    }
    return 0;
}
