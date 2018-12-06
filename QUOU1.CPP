#include<stdio.h>
#include<conio.h>
void in(int);
void out(int);
void print(int);
void orderdown(int);
void orderup(int);
void create();
int full();
int empty();
int q[10],r=-1,f=0,x,i;
void main(){
int s;
clrscr();
do{
printf("\n1: In\n2: Out\n3: Print\n4: Order down\n5: Order up\n6: create\n7: Exit\t");
printf("\nEnter your choise\n");
scanf("%d",&s);
switch(s){
case 1:clrscr();in(x);
	break;
case 2:clrscr();out(x);
	break;
case 3:clrscr();print(x);
	break;
case 4:clrscr();orderdown(x);
	break;
case 5:clrscr();orderup(x);
	break;
case 6:clrscr();create();
	break;
default:clrscr();printf("\n\t\t\t data out");
}
}while(s!=7);
}

int full(){
if(r<9)
return 1;
else
return 0;
}
int empty(){
if(r<f)
return 1;
else
return 0;
}

void in(int){
if(full()){
printf("\t\tx[%d]=",++r);
scanf("%d",&q[r]);}
else
printf("\n\t\t\t STOP! queue is full\n");
}

void out(int){
if(empty()){
printf("\n\t\t\t STOP! queue is empty\n");}
else
printf("\t\tx[%d]=%d deleted",f,q[f++]);
}

void print(int){
if(empty()){
printf("\n\t\t\t STOP! queue is empty\n");}
else{
for(int i=f;i<=r;i++){
printf("\n%d",q[i]);}
printf("\n");
}}

void orderdown(int){
if(empty()){
printf("\n\t\t\t STOP! queue is empty\n");}
else{
int temp,i,j;
for(i=0;i<=r;i++){
for(j=i+1;j<=r;j++)
if(q[i]<q[j]){
temp=q[i];
q[i]=q[j];
q[j]=temp;}
printf("\n%d",q[i]); }
printf("\n");
}}

void orderup(int){
if(empty()){
printf("\n\t\t\t STOP! queue is empty\n");}
else{
int temp,i,j;
for(i=0;i<=r;i++){
for(j=i+1;j<=r;j++)
if(q[i]>q[j]){
temp=q[i];
q[i]=q[j];
q[j]=temp;}
printf("\n%d",q[i]);}
printf("\n");
}}

void create(){
r=-1;
f=0;
printf("\n\t\t\t Queue has been created\n");
}
