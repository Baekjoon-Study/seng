#include<stdio.h>
int main(){
    int n,a,i;
    int num[n];
    int sum = 0;
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    scanf("%d", &a);
    for(i=0;i<n;i++){
        if(num[i]==a)
        sum += 1;
    }
    printf("%d", sum);
    return 0;
    
        
}