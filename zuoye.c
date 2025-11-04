#include <stdio.h>
main()
{
    int a,b,c,d,e;
    printf("请输入一个三位整数：");
    scanf("%d", &a);
    b=a%10;          
    c=(a/10)%10;  
    d=a/100;
    e=b+c+d;
    printf("各位数字之和为：%d\n", e);
    printf("各位数字逆序为：%d%d%d\n", b, c, d);
    return 0;
}   