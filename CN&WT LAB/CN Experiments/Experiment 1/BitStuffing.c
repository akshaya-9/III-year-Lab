#include<stdio.h>
 int main(){

   int data[100] , temp[100],frames,count=0,i,j=0;
    printf("Enter number of frames: ");
    scanf("%d",&frames);
    printf("Enter Data:\n");
     for(i=0;i<frames;i++){
     scanf("%d",&data[i]);
    }
    for(i=0;i<frames;i++){
     if(data[i] == 1){
         count++;
       } else{
          count = 0;
       }
        temp[j] = data[i];
        j++;
         if(count==5){
           count = 0;
          temp[j] = 0;
            j++;
        }
    }
        printf("\nAt Sender");
        printf("\nBefore  Bit stuffing :");
        for(i=0;i<frames;i++){
                printf("%d",data[i]);
 }



        printf("\nAt Receiver");
        printf("\nData received is: 01111110 ");
        for(i=0;i<j;i++){
               printf("%d",temp[i]);
            }
        printf(" 01111110");

        printf("\nAfter De-Stuffing at receiver's side: ");
        count=0;
        for(i=0;i<j;i++){
           if(temp[i] == 1){
           count++;
          } else{
             count=0;
         }
        printf("%d",temp[i]);
        if(count==5){
           i++;
          }
        }

return 0;
}
