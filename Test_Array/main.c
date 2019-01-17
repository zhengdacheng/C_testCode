#include <stdio.h>
#include <stdlib.h>
#define Months 12
int main()
{
    int days[Months]={31,28,[4]=31,30,31,[1]=29};
    int i;
    for(i=0;i<Months;i++){
        printf("%2d  %5d\n",i+1,*(days+i));
    }
    return 0;
}
