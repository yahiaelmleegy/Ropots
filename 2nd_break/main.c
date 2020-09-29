#include <stdio.h>
#include <stdlib.h>

int main()
{
  int degree;
  int sum;
  int avarage;
  int n;
  printf("\nenter number of subjects: ");
  scanf("%d", &n);
  for(int i=0; i<=5; i++){
    printf("\nenter your %d degree: ", i+1 );
    scanf("%d", &degree);
    sum += degree;
    if (degree>=85)
        printf("\nexcellant");
    else if (degree>=75)
        printf("\nv.good");
    else if (degree>=65)
        printf("\ngood");
    else if (degree>=50)
        printf("\npass");
    else
    printf("\nNshofak elsana elgaya");

  }
  printf("\navarage is", sum/5);

    return 0;
}
