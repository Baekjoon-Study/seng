#include<stdio.h>
int main(){
    int n,i;
    int students[31] = {0,};
    
    for(i=0;i<28;i++){
        scanf("%d\n", &n);
        students[n] = n;
    }
    
    for(i=1;i<31;i++){
        if(students[i]==0) 
            printf("%d\n", i);
    }
    return 0;
}