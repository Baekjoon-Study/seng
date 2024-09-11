#include<stdio.h>
int main(){
    int i;
    int a[9];
    
    for(i=0;i<9;i++){
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int max_index = 0;
    
    for(i=1;i<9;i++){
        if(max<a[i]){
                max = a[i];
                max_index = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", max_index + 1);
    
    return 0;
}