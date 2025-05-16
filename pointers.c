# include<stdio.h>
int main()
{
    int a=5;
    int *ptr=&a;
    printf("befor a is %d\n",*ptr);
    *ptr=*ptr+10;
    printf("after a is %d\n",*ptr);
    return 0;
}
