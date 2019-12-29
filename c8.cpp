#include<stdio.h>
int main()
{
  int marks;
  printf("Enter marks: ");
  scanf("%d",&marks);
  if(marks<0 || marks>100)
  {
  	printf("Wrong Entrym");
  }
  else if(marks<40)
  {
  	printf("Grade F");
  }
  else if(marks>=40 && marks<55)
  {
  	printf("Grade D");
  }
  else if(marks>=55 && marks<70)
  {
  	printf("Grade C");
  }
  else if(marks>=70 && marks<84)
  {
  	printf("Grade B");
  }
  else
  {
  	printf("Grade A");
  }
}
  
