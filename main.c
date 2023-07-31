
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float C;
    int F;
    //process
    printf("enter degree Fahrenheit:\n");
    scanf("%d",&F);
    C=(F-32)*(5/9);
    //output
    printf("Celsius  %f \n",C);


    int dist,time;
    float avg;
    //inputs
    printf("enter distance travelled(m):\n");
    scanf("%d",&dist);
    printf("enter time taken(s):\n");
    scanf("%d",&time);
    //process
    avg=dist/time;
    //output
    printf("average = %f \n",avg);



    printf("%5d%5d%5d\n",2,4,8);
    printf("%5d%5d%5d\n",3,9,27);
    printf("%5d%5d%5d\n",4,16,64);
    printf("\n\n\n");


  int age;
   printf("HI,HOW OLD ARE YOU?\n");
   scanf("%d",&age);
   // output
   printf(" WELCOME %d \n ",age);
   printf("LET'S BE FRIENDS!");


}
