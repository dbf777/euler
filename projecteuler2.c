#include <stdio.h>
int j1=1;
int j2=2;
int sum=0;
int new=0;
int sum2=0;
int main()
{
    while(j2<4000000){
        new=j2+j1;
        sum=new;
        if(new%2==0){
            sum2+=new;
        }
        j1=j2;
        j2=sum;

    }
    printf("%d %d %d", j2, j1, sum2+2);

    return 0;
}