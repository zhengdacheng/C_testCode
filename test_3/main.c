/*
*��ϰ_bool����
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
    printf("bool��ֵ%d\n",is);
    while(is){
        sum+=num;
        printf("������ֹͣ���֣�");
        is=(scanf("%ld",&num)=='1');
    }
    printf("sum��ֵΪ��%ld\n",sum);
    return 0;
}
