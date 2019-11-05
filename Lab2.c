#include<stdio.h>
char func(char n)
{
    char count=0;
    while(n>0)
    {
        count++;
        n&=(n-1);
    }
return count;
}
 int main(void)
{
    printf("n");
    char n;
    n=getchar();
    cgar num = func (n);
    printf("the numbefr of onr is %d\n",num);
    putchar(num);
}