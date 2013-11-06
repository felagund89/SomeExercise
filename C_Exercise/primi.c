#include <stdio.h>
#include <conio.h>
main ()
  {
  int n,a,r,controllo;
  controllo=1;
  do
    {
    clrscr();
    printf ("Introduci il numero\n");
    scanf ("%d",&n);
    }
  while (n<=1);
  r=(int)(sqrt(n));
  for (a=2;a<r;a++)
    if (!(n%a) && (a!=n)) controllo=0;
  if (controllo)
    printf ("%d Š un numero primo.",n);
  else
    printf ("%d non Š un numero primo.",n);
  while (!kbhit());
  }
