#include<reg52.h>
#include<stdio.h>
#define lt 0x02;
#define rt 0x08;
#define st 0x0a;
unsigned int a;
void main()
{
while(1)
{
a=P1&0X07;
if(a==0x04)
{
P2=lt;
}
if(a==0x02)
{
P2=st;
}
if(a==0x03)
{
P2=rt;
}
if(a=0x00)
{
P2=lt;
}
if(a==0x05)
{
P2=st;
}
if(a==0x06)
{
P2=lt;
}
if(a==0x07)
{
P2=lt;
}
if(a==0x01)
{
P2=rt;
}
}
}