#include<stdio.h>
int main(){
    int n,x,y;

    scanf("%d", &n);

    for(y=1;y<=n;y++)
    {
        for(x=1;x<=n-y;x++)
            printf(" ");
        for(x=1;x<=y;x++)
            printf("*");
        printf("\n");
        

        }
    }
