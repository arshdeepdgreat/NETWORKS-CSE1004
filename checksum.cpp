#include<stdio.h>
#include<stdlib.h>
int main()
{
 int m,n;
 printf("Enter the number of data words\n");
 scanf("%d",&m);
 printf("Enter the size of each data word\n");
 scanf("%d",&n);
 int dt[m][n];
 int i,j;
 printf("Enter the data words:\n");
 for(i=0; i<m; i++)
 for(j=0; j<n; j++)
 scanf("%d",&dt[i][j]);
 int sum[n],c=0,k=0;
 for(i=n-1; i>=0; i--)
 {
 for(j=0; j<m; j++)
 {
 c+=dt[j][i];
 }
 if(c%2==1)
 {
 sum[i]=1;
 c--;
 }
 else
 sum[i]=0;
 c=c/2;
 }
 i=0;
 m=0;
 while(i<c)
 {
 if(pow(2,i)<=c)
 i++;
 }
 int ojsum[100],ocsum[100];
 j=0;
 k=0;
 printf("\nActual Sum Is:\n");
 for(i; i>=0; i--)
 {
 if(fmod(c,pow(2,i))!=c)
 {
 ojsum[k]=1;
 printf("1")
 ;
 c-=pow(2,i);
 }
 else
 {
 ojsum[k]=0;
 printf("0");
 }
 k++;
 }
 j=0;
 for(i=0; i<n; i++)
 {
 ocsum[j];
 if(sum[i]==0)
 {
 printf("0");
 ocsum[j]=0;
 }
 else
 {
 printf("1");
 ocsum[j]=1;
 }
 j++;
 }
 int sumi[100];
 j--;
 k--;
 int z=j;
 c=0;
 while(k>=0)
 {
 c+=ojsum[k]+ocsum[j];
 if(c%2==0)
 sumi[j]=0;
 else
 {
 sumi[j]=1;
 c-=1;
 }
 c=c/2;
 j--;
 k--;
 }
 while(j>=0)
 {
 if(c==1)
 {
 if(ocsum[j]==1)
 {
 sumi[j]=0;
 j--;
 }
 else
 {
 sumi[j]=1;
 j--;
 c--;
 }
 }
 else
 {
 sumi[j]=ocsum[j];
 j--;
 }
 }
 printf("\n\nSUM IS (IN %d BITS):\n",n);
 for(i=0; i<=z; i++)
 {
 printf("%d",sumi[i]);
 }
 printf("\n");
 printf("\nCHECKSUM IS:\n");
 for(i=0; i<=z; i++)
 {
 if(sumi[i]==0)
 printf("1");
 else
 printf("0");
 }
 printf("\n\nEnter the number of data words\n");
 scanf("%d",&m);
 printf("Enter the size of each data word\n");
 scanf("%d",&n);
 int dt_[m][n];
 printf("Enter the data words (receiver side):\n");
 for(i=0; i<m; i++)
 for(j=0; j<n; j++)
 scanf("%d",&dt_[i][j]);
 int sum_[n],c_=0;
 for(i=n-1; i>=0; i--)
 {
 for(j=0; j<m; j++)
 {
 c_+=dt_[j][i];
 }
 if(c_%2==1)
 {
 sum_[i]=1;
 c_--;
 }
 else
 sum_[i]=0;
 c_=c_/2;
 }
 i=0;
 m=0;
 while(i<c_)
 {
 if(pow(2,i)<=c_)
 i++;
 }
 int ojsum_[100],ocsum_[100];
 j=0;
 k=0;
 printf("\nActual Sum Is:\n");
 for(i; i>=0; i--)
 {
 if(fmod(c_,pow(2,i))!=c)
 {
 ojsum_[k]=1;
 printf("1")
 ;
 c_-=pow(2,i);
 }
 else
 {
 ojsum_[k]=0;
 printf("0");
 }
 k++;
 }
 j=0;
 for(i=0; i<n; i++)
 {
 ocsum_[j];
 if(sum_[i]==0)
 {
 printf("0");
 ocsum_[j]=0;
 }
 else
 {
 printf("1");
 ocsum_[j]=1;
 }
 j++;
 }
 int sumi_[100];
 j--;
 k--;
 int z_=j;
 c_=0;
 while(k>=0)
 {
 c_+=ojsum_[k]+ocsum_[j];
 if(c_%2==0)
 sumi_[j]=0;
 else
 {
 sumi_[j]=1;
 c_-=1;
 }
 c_=c_/2;
 j--;
 k--;
 }
 while(j>=0)
 {
 if(c_==1)
 {
 if(ocsum_[j]==1)
 {
 sumi_[j]=0;
 j--;
 }
 else
 {
 sumi_[j]=1;
 j--;
 c_--;
 }
 }
 else
 {
 sumi_[j]=ocsum_[j];
 j--;
 }
 }
 printf("\n\nSUM IS (IN %d BITS):\n",n);
 for(i=0; i<=z_; i++)
 {
 printf("%d",sumi_[i]);
 }
 printf("\n");
 printf("\nCHECKSUM IS:\n");
 for(i=0; i<=z_; i++)
 {
 if(sumi_[i]==0)
 printf("1");
 else
 printf("0");
 }
 int qp=-1;
 for(i=0; i<4; i++)
 for(j=0; j<8; j++)
 {
 if(dt[i][j]!=dt_[i][j]){
 qp=(i+1)*(j+1);
 printf("\n\nerror in bit %d",qp);
 break;
 }
 }
 if(qp==-1){
 printf("\n\nNo errors in the receiver checksum\n");
 }
}