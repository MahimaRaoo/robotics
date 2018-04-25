#include<reg52.h>
#include<stdio.h>
#define lt 0x06; //output through motors
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
#define rev 0x05;

unsigned int a; //no need for the signs


void main()
{
while(1) //infinite loop
{
a=P1&0x0F;
if(a==0x0D)//input
{
P2=st;
}
if(a==0x07)
{
P2=lt;
}
if(a==0x05)
{
P2=stop;
}
if(a==0x04)
{
P2=rt;

}
if(a==0x01)
{
P2=rev;

}

} 
} 
