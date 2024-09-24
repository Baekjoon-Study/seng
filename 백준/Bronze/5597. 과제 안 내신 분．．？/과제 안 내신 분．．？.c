#include<stdio.h>
int main(){
    int num,i;
    int students[31] = {0,};
    
    for(i=0;i<28;i++){
        scanf("%d\n",&num);
        students[num] = num;
    }
    for(i=1;i<31;i++){
        if(students[i]==0)
            printf("%d\n", i);
    }
    return 0;
}