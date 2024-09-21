#include<stdio.h>
int main(){
    int n,i;
    
    
    scanf("%d", &n);
    int score[n];
    for(i=0;i<n;i++){
        scanf("%d", &score[i]);
    }
    int highest = 0;
    for(i=0;i<n;i++){
        if(highest<score[i]){
            highest = score[i];
        }
    }
    float new[n];
    for(i=0;i<n;i++){
        new[i] = (float)score[i]/highest*100;
    }
    
    float sum=0;
    for(i=0;i<n;i++){
        sum += new[i];
    }
    
    float result = sum/n;
    printf("%f", result);
    
    return 0;
    
    
}