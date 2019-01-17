/*
*练习_bool类型
*/
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main(void)
{
    long num;
    long sum=0L;
    _Bool is;
    is=(scanf("%ld",&num)==1);
    printf("bool的值%d\n",is);
    while(is){
        sum+=num;
        printf("请输入停止数字：");
        is=(scanf("%ld",&num)=='1');
    }
    printf("sum的值为：%ld\n",sum);
    return 0;
}
