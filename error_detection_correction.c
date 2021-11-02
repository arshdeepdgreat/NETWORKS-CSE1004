#include<stdio.h>
#include<string.h>
void check(){
printf("THIS IS CHECKSUM FUNCTION\n");
char a[20],b[20];
char sum[20],complement[20];
int i,length;
printf("Enter first binary string\n");
scanf("%s",a);
printf("Enter second binary string\n");
scanf("%s",b);
if(strlen(a)==strlen(b)){
length = strlen(a);
char carry='0';
for(i=length-1;i>=0;i--)
{
if(a[i]=='0' && b[i]=='0' && carry=='0')
{
sum[i]='0';
carry='0';
}
else if(a[i]=='0' && b[i]=='0' && carry=='1')
{
sum[i]='1';
carry='0';
}
else if(a[i]=='0' && b[i]=='1' && carry=='0')
{
sum[i]='1';
carry='0';
}
else if(a[i]=='0' && b[i]=='1' && carry=='1')
{
sum[i]='0';
carry='1';
}
else if(a[i]=='1' && b[i]=='0' && carry=='0')
{
sum[i]='1';
carry='0';
}
else if(a[i]=='1' && b[i]=='0' && carry=='1')
{
sum[i]='0';
carry='1';
}
else if(a[i]=='1' && b[i]=='1' && carry=='0')
{
sum[i]='0';
carry='1';
}
else if(a[i]=='1' && b[i]=='1' && carry=='1')
{
sum[i]='1';
carry='1';
}
else
break;
}
printf("\nSum=%c%s",carry,sum);
for(i=0;i<length;i++)
{
if(sum[i]=='0')
complement[i]='1';
else
complement[i]='0';
}
if(carry=='1')
carry='0';
else
carry='1';
printf("\nChecksum=%c%s\n",carry,complement);
}
else {
printf("\nWrong input strings");
}
}
void crc(){
printf("THIS IS CRC FUNCTION\n");
int i,j,keylen,msglen;
char input[100], key[30],temp[30],quot[100],rem[30],key1[30];
printf("Enter Data: ");
scanf("%s",input);
printf("Enter Key divisor: ");
scanf("%s",key);
keylen=strlen(key);
msglen=strlen(input);
strcpy(key1,key);
//appending 0
for (i=0;i<keylen-1;i++) {
input[msglen+i]='0';
}
//storing input in temp
for (i=0;i<keylen;i++)
temp[i]=input[i];
for (i=0;i<msglen;i++) {
quot[i]=temp[0];
if(quot[i]=='0')
for (j=0;j<keylen;j++)
key[j]='0';
else
for (j=0;j<keylen;j++)
key[j]=key1[j];
for (j=keylen-1;j>0;j--) {
if(temp[j]==key[j])
rem[j-1]='0';
else
rem[j-1]='1';
}
rem[keylen-1]=input[i+keylen];
strcpy(temp,rem);
}
strcpy(rem,temp);
printf("\nQuotient is ");
for (i=0;i<msglen;i++)
printf("%c",quot[i]);
printf("\nRemainder/CRC bits is ");
for (i=0;i<keylen-1;i++)
printf("%c",rem[i]);
printf("\nFinal data is: ");
for (i=0;i<msglen;i++)
printf("%c",input[i]);
for (i=0;i<keylen-1;i++)
printf("%c",rem[i]);
printf("\n");
}
void ham_check(){
{
int data[10];
printf("THIS IS HAMMING CODE FUNCTION\n");
int dataatrec[10],c,c1,c2,c3,i;
printf("Enter 4 bits of data one by one\n");
scanf("%d",&data[0]);
scanf("%d",&data[1]);
scanf("%d",&data[2]);
scanf("%d",&data[4]);
data[6]=data[0]^data[2]^data[4];
data[5]=data[0]^data[1]^data[4];
data[3]=data[0]^data[1]^data[2];
printf("\nEncoded data is\n");
for(i=0;i<7;i++)
printf("%d",data[i]);
printf("\n\nEnter received data bits one by one\n");
for(i=0;i<7;i++)
scanf("%d",&dataatrec[i]);
c1=dataatrec[6]^dataatrec[4]^dataatrec[2]^dataatrec[0];
c2=dataatrec[5]^dataatrec[4]^dataatrec[1]^dataatrec[0];
c3=dataatrec[3]^dataatrec[2]^dataatrec[1]^dataatrec[0];
c=c3*4+c2*2+c1 ;
if(c==0) {
printf("\nNo error while transmission of data\n");
}
else {
printf("\nError on position %d",c);
printf("\nData sent : ");
for(i=0;i<7;i++)
printf("%d",data[i]);
printf("\nData received : ");
for(i=0;i<7;i++)
printf("%d",dataatrec[i]);
printf("\nCorrect message is\n");
if(dataatrec[7-c]==0)
dataatrec[7-c]=1;
else
dataatrec[7-c]=0;
for (i=0;i<7;i++) {
printf("%d",dataatrec[i]);
}
}
}
printf("\n");
}
void odd(){
printf("THIS IS ODD PARITY FUNCTION\n");
printf("enter the size: ");
int k;
scanf("%d",&k);
printf("ENTER %d BINARY DIGITS TO REPRESENT THE DATA : ",k);
char data[k+1];
int i=0;
int count=0;
scanf("%s",data);
i=0;
for(i=0;i<k;i++)
{
if(data[i]=='1')count++;
}
if(count%2==0){
data[k]='1';
}
else data[k]='0';
printf("The data bit appended is %c \n",data[k]);
printf("The data created and sent in odd-parity mode is ");
for(i=0;i<k+1;i++)printf("%c",data[i]);
printf("\n");
}
void even(){
printf("THIS IS EVEN PARITY FUNCTION\n");
printf("enter the size: ");
int k;
scanf("%d",&k);
printf("ENTER %d BINARY DIGITS TO REPRESENT THE DATA : ",k);
char data[k+1];
int i=0;
int count=0;
scanf("%s",data);
i=0;
for(i=0;i<k;i++)
{
if(data[i]=='1')count++;
}
if(count%2==1){
data[k]='1';
}
else data[k]='0';
printf("The data bit appended is %c \n",data[k]);
printf("The data created and sent in even-parity mode is ");
for(i=0;i<k+1;i++)printf("%c",data[i]);
printf("\n");
}
int main(){
printf("choose a parity check to be demonstrated\n1.even parity\n2.odd
parity\n3.CRC\n4.checksum\n5.hamming \nEnter the choice: ");
int n;
scanf("%d",&n);
if (n==1){
even();
}
else if(n==2){
odd();
}
else if(n==3){
crc();
}
else if (n==4){
check();
}
else if(n==5){
ham_check();
}
}