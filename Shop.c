#include<stdio.h>

void main(){

float unit[4],gst[4],quantity[4];

printf("1. Leather Wallet\n 2. Umbrella\n3. Cigarette \n4. Honey\n");

printf("enter the unit price of all products\n ");

for(int i=0;i<4;i++){

scanf("%d",&unit[i]);
}
printf("enter the GST of all products\n");

for(int i=0;i<4;i++){

scanf("%d",&gst[i]);

} 
printf("enter the qantity of all products\n");

for(int i=0;i<4;i++){

scanf("%d",&quantity[i]);

}

float total=0;

for(int i=0;i<4;i++){

if(unit[i]>=500.00) {
unit[i]=unit[i]*0.95;

}
total=total+(unit[i]+(unit[i]*(gst[i]/100.00))) * quantity[i];

}

float maxgst=0;
int k;

for(int i=0;i<4;i++){

if(((unit[i]*(gst[i]/100.00))* quantity[i]) > maxgst) {
 maxgst =unit[i]*(gst[i]/100.00)*quantity[i]; 
 k = 1+1;
}
} 
printf("the max gst is for the product %d\n", k);
printf("the total amount paid = %d Rupees", total);
}
