#include <bits/stdc++.h>
using namespace std;
int main(){
 int a1[8];
 int a2[8];
 int a3[8];
 int a4[8];
 int a5[8];
 int a1_[8];
 int a2_[8];
 int a3_[8];
 int a4_[8];
 int a5_[8];
 cout<<"enter data to send\n";
 for(int i=0;i<8;i++){
 cin>>a1[i];
 }
 for(int i=0;i<8;i++){
 cin>>a2[i];
 }
 for(int i=0;i<8;i++){
 cin>>a3[i];
 }
 for(int i=0;i<8;i++){
 cin>>a4[i];
 }
 for(int i=0;i<8;i++){
 int sum =a1[i]+a2[i]+a3[i]+a4[i];
 a5[i]=sum%2;
 }
 cout<<"the data to send is :";
 for(int i=0;i<8;i++){
 cout<<a1[i];
 }
 cout<<" ";
 for(int i=0;i<8;i++){
 cout<<a2[i];
 }
 cout<<" ";
 for(int i=0;i<8;i++){
 cout<<a3[i];
 }
 cout<<" ";
 for(int i=0;i<8;i++){
 cout<<a4[i];
 }
 cout<<" ";
 for(int i=0;i<8;i++){
 cout<<a5[i];
 }
 cout<<"\n";
 cout<<"ENTER THE DATA RECIEVED :\n";
 for(int i=0;i<8;i++){
 cin>>a1_[i];
 }
 for(int i=0;i<8;i++){
 cin>>a2_[i];
 }
 for(int i=0;i<8;i++){
 cin>>a3_[i];
 }
 for(int i=0;i<8;i++){
 cin>>a4_[i];
 }
 for(int i=0;i<8;i++){
 int sum =a1_[i]+a2_[i]+a3_[i]+a4_[i];
 a5_[i]=sum%2;
 }
 cout<<"the lrc changed in reciever end is \n";
 for(int i=0;i<8;i++){
 cout<<a1_[i];
 }
 cout<<" ";
 for(int i=0;i<8;i++){
 cout<<a2_[i];
 }
 cout<<" ";
 for(int i=0;i<8;i++){
 cout<<a3_[i];
 }
 cout<<" ";
 for(int i=0;i<8;i++){
 cout<<a4_[i];
 }
 cout<<" ";
 for(int i=0;i<8;i++){
 cout<<a5_[i];
 }
 cout<<"\n";
 bool k=true;
 for(int i=0;i<8;i++){
 if(a1[i]!=a1_[i]){
 k=false;
 }
 }
 for(int i=0;i<8;i++){
 if(a2[i]!=a2_[i]){
 k=false;
 }
 }
 for(int i=0;i<8;i++){
 if(a3_[i]!=a3[i]){
 k=false;
 }
 }
 for(int i=0;i<8;i++){
 if(a4[i]!=a4_[i]){
 k=false;
 }
 }
 for(int i=0;i<8;i++){
 if(a5[i]!=a5_[i]){
 k=false;
 }
 }
 if (k){
 cout<<"the data is free of errors";
 }
 else{
 cout<<"errors detected in the reciever end";
 }
}
