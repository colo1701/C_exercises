#include <stdio.h>

int main()
{
    int a = 0;
    int res = 0;
    while(a < 999) {
        a++;
        if(a%5 == 0 || a%3 == 0) {
            res = res + a;
        }
    }
    printf("The result is %d.\n", res);
    return 0;
}
