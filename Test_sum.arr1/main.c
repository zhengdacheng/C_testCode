#include <stdio.h>
#include <stdlib.h>
#define SIZES 10
int sump(int * start,int * end);
int main()
{
    int m[SIZES]={20,10,5,39,4,16,19,26,31,20};
    long answer;
    answer=sump(m,m+SIZES);
    printf("����������ֵ�ǣ�%ld",answer);
    return 0;
}
int sump(int * start,int * end){
    int total=0;
    while(start<end){
        total+=*start;
        printf("total��ֵ;%d\n",total);
        start++;
    }
    return total;

}
