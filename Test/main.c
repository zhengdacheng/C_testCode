#include <iom16v.h>
#include <macros.h>
#include <myHead.h>

#progrma data:code
    char const Number[]={0x6d,0x5b,0x3f,0x6d,0x66,0x6f};
void IO_init(){
     //ÉèÖÃPA3¡¢PA4¡¢PBÎªÊä³ö×´Ì¬
    DDRA |=BIT(3);
    DDRA |=BIT(4);
    DDRB =0xff;
}

void Dynamic_show(){
    int i;
    for(i=0;i<6;i++){
    `   PORTB=Number[i];
        PORTA |=BIT(3);
        PORTA &=~BIT(3);

        PORTB=~BIT(i);
        PORTA |=BIT(4);
        PORTA &=~BIT(4);
    }
    Delay(0.5);
}
int main(void)
{
    IO_init();
    while(){

        Dynamic_show();
    }
    return 0;
}
