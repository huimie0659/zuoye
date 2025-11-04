# include <stdio.h>
main()
{
    printf("请输入两个整数，以空格分隔：");
    int a, b,c,d;
    scanf("%d %d", &a, &b);
    c=a/b;
    d=a%b;
    printf("商是：%d\n", c);
    printf("余数是：%d\n", d);
    return 0;
}