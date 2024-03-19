#include<stdio.h>
int main()
{
    int n,i,in=0,out=0,a;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>=10 && a<=20){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
