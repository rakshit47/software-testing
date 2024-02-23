#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    int cnt;
    int d;
    int num[5];
    printf("Enter divider : ");
    scanf("%d",&d);
    printf("Enter values :");
    for(i=0 ; i<5 ; i++){
        scanf("%d",&num[i]);
    }

    for(i=0 ; i<5 ; i++){
        if(!num[i]%d) cnt++;
    }
    
    printf("\n%d",cnt);
}