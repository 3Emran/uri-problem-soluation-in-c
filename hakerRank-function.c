#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max;
    if(a>b && a>c){
        max = a;
    }
    else if(b>a && b>c){
        max = b;
    }
    else if(c>a && c>b){
        max = c;
    }
    else{
       max = d;
    }
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
