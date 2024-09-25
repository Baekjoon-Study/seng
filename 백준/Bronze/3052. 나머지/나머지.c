#include<stdio.h>
int main(){
    int num[10];
    int res[10];
    
    for(int i=0;i<10;i++){
        scanf("%d", &num[i]);
    }
    for(int i=0;i<10;i++){
        res[i]=num[i]%42;
    }
    int x[42]={0};
    for(int i=0;i<10;i++){
    x[res[i]]=1;
    }
    int count = 0;
    for(int i=0;i<42;i++){
        if(x[i]==1){
            count ++;
        }
    }
    printf("%d", count);
    return 0;
}