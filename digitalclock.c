#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h,m,s;
    printf("set time : \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m> 60 || s>60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while(1) //this is an infinite loop and anything inside it will repeat itself to infinity.
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock:    ");
        printf("%02d:%02d:%02d",h,m,s);
        system("sleep 1");
        system("clear");  
    }
}