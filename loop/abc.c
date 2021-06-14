#include<stdio.h>

int main(){
    int a=1;
    while (a<5){
        if(a==2){
            continue;
        }
        printf("%d", a);
        a++;
    }
    return 0;
}