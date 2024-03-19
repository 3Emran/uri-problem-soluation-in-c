#include<stdio.h>
int main()
{
    int a,b=0,c,x[100];
    for(a=0; a < 100; a++)
    {
        scanf("%d",&x[a]);
    }
    for(a=0; a < 100; a++){
            if(x[a] > b){
                b = x[a];
                c = a+1;
            }
        }
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}
