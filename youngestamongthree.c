#include<stdio.h>
void main()
{
 int ram,shyam,ajay;
 printf("Enter the ages of ram,shyam,ajay:");
 scanf("%d %d %d",&ram,&shyam,&ajay);
 if(ram<shyam)
  {
   if(ram<ajay)
    printf("Ram is younger");
  }
  else
   {
    if(shyam<ajay)
     printf("Shyam is younger");
    else
     printf("Ajay is younger");
   }
}    
