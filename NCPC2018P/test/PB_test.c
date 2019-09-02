#include<stdio.h>
#include <string.h>

int main(){
    int count;
    while(scanf("%d", &count) != EOF){
        for(int i = 0; i < count; i++){
            char inpa[9999], inpb[9999];
            scanf("%s %s", inpa, inpb);
            int same_max = 0;
            for(int j = 0; j  < strlen(inpa); j++)
                for(int k =0; k < strlen(inpb); k++){
                    int same_p = 0;
                    for(int l=0; l < strlen(inpb) - k; l++){
                        if(inpa[j + l] == inpb[k + l])
                            same_p += 1;
                        else
                            break;
                    }
                    same_max = same_p > same_max ? same_p : same_max;
                }
                printf("%d\n", same_max);
        }
        return 0;
    }
}
