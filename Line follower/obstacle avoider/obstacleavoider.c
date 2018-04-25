#include<reg52.h>  //we need to include that header file for that particular microcontroller
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
#define rev 0x05;
unsigned int a; //no need for the signs
void delay(unsigned int t)
{
int i,j;
for(i=0;i<t;i++)
{
for(j=0;j<1275;j++);
}
}
void main()
{
while(1) //infinite loop
{
	a=P1&0x03;
if(a==0x01)
{
P2=rev;
delay(50);
P2=stop;
delay(50);
P2=lt;
	delay(150);
}
if(a==0x02)
{
P2=rev;
delay(50);
P2=stop;
delay(50);
P2=rt;
delay(50);
}
if(a==0x03)
{
P2=stop;
}
if(a==0x00)
{
	P2=st;
}
} 
}