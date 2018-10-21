#include "quickheader2.h"

int main(int argc,char *argv[])
{

int i,N,sw,*a;
clock_t start=clock();
srand(time(NULL));
if(argc<3)
printf("you have not entered enough arguements:N and sw requied!\n");
else
{
N=atoi(argv[1]);
a=malloc(N*sizeof(int));
sw=atoi(argv[2]);
srand(time(0));
 if (sw)
  
for(i=0;i<N;i++)

a[i]=rand()%100000+1;


else

while(scanf("%d",&a[N])==1)
N++;
printf("initial:");
for(i=0;i<N;i++)
printf("%d->",a[i]);

quicksort(a,0,N-1);
printf("\n");


printf("\n After:");
for(i=0;i<N;i++)
printf("%d->",a[i]);
printf("\n");

}
clock_t end=clock();


double seconds=((double)(end-start))/CLOCKS_PER_SEC;
printf("\n Time taken: %f \n",seconds);
return 0;
}
