#include<stdio.h>
#include<string.h>

int main()
{
char data[20][20];
int n;
int i;


printf("Enter the number of frames:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
  printf("Frames %d:\n",i+1);
    scanf("%s",&data[i]);
}
for(i=0;i<n;i++){
    tmp[i] =strlen(data[i]);
}
printf("Sender Frames: \n");
for( i=0;i<n;i++){
 printf("Frame %d:%d%s\n",i+1,(strlen(data[i])+1),data[i]);
}
printf("Data Transmitted: \n");
for(int i=0;i<n;i++){
    printf("%d%s",(strlen(data[i])+1),data[i]);
}
printf("\n");
printf("Receiver Frames: \n");
for( i=0;i<n;i++){
 printf("Frame %d:%s\n",i+1,data[i]);
}

return 0;
}

