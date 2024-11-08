
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int z=0; z<n; z++){
        for(int i=0; i<z; i++){
            printf(" ");
        }
        for(int j=0; j<n-z; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}