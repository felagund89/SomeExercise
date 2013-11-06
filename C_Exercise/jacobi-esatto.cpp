// JACOBI-MiGl
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define eps 0.0001
const int DIM=50;
typedef float matrice [DIM][DIM];
typedef float vettore [DIM];
void leggi_dim (int&);
void leggi_matrice (int,matrice);
void leggi_vett (int,vettore);
void vett_iniziale(int,vettore);
void matrix_M (int,matrice,matrice);
void vettore_d (int,matrice,vettore,vettore);
void prodotto_mat_vett(int,vettore,matrice,vettore);
void somma_vett(int,vettore,vettore,vettore);
void differenza_vett(int dim,vettore,vettore,vettore);
float lambda (int,matrice);
float delta(int,vettore);
void jacobi(int,vettore,matrice,vettore,vettore,matrice);
float modulo(float);
main ()
{ int n; matrice a,M; vettore b,d,x_k,diff;float y;
  leggi_dim (n);
  leggi_matrice (n,a);
  leggi_vett (n,b);
  vett_iniziale(n,x_k);
  matrix_M (n,a,M);
  vettore_d (n,a,b,d);
  jacobi(n,x_k,M,d,diff,a);
  printf("\n\n");
  system("pause");
  return 0;
}
void leggi_dim (int& dim)
    {printf("\n Inserici la dimensione: ");scanf ("%d",&dim);
     while (dim<=0 || dim>=DIM)
              { printf ("\n ATTENZIONE!!!");
               printf("\nLa dimensione inserita non e' permessa.\n Inserisci dinuovo la dimensione: ");
                     scanf ("%d",&dim);}
     return;}
  
void leggi_matrice (int dim,matrice a)
    {int i,j;float p,som;
     printf ("\nInserisci i coefficienti della matrice:\n");
     for (i=1;i<=dim;i++)
         { for (j=1;j<=dim;j++)
                  {printf ("a[%d][%d]=",i,j); scanf ("%f",&a[i][j]);}}   
     som=0;
     for(i=1;i<=dim;i++)
         {for(j=1;j<=dim;j++)
                 {p=a[i][j]; som=som+p; 
          if(modulo(a[i][i])<modulo(som)) 
                {printf("\n ATTENZIONE!!!");
                 printf("la matrice non e' dominante diagonale nella %d riga",i);
                 printf("\n riprova\n"); 
                 for (i=1;i<=dim;i++)
                     for (j=1;j<=dim;j++)
                        {printf ("a[%d][%d]=",i,j);scanf ("%f",&a[i][j]);}}
          som=0;}}
     return;}
void leggi_vett (int dim,vettore b)
    {int i;
    printf ("\nInserisci i coefficienti del vettore dei termini noti:\n");
     for (i=1;i<=dim;i++)
         {printf ("b[%d]=",i); scanf ("%f",&b[i]);}
     return;}
void vett_iniziale(int dim,vettore x_k)
    {int i;
    printf ("\nInserisci i coefficienti di x_k:\n");
     for (i=1;i<=dim;i++)
         {printf ("x_k[%d]=",i); scanf ("%f",&x_k[i]);}
     return;}
     
void matrix_M (int dim,matrice a,matrice M)
    {int i,j;
    for(i=1;i<=dim;i++)
       { for(j=1;j<=dim;j++)
                {if(i!=j) M[i][j]=-(a[i][j]/a[i][i]);
                 else    M[i][j]=0;}}
    return;}
    
void vettore_d (int dim,matrice a,vettore b,vettore d)
    {int i,j;
     for(i=1;i<=dim;i++)
          for(j=1;j<=dim;j++)
                   d[i]=b[i]/a[i][i];
     return;} 
void prodotto_mat_vett(int dim,vettore v,matrice a,vettore p)
    {int i,b; float c,som;
    som=0;
    for (i=1;i<=dim;i++)
        {for (b=1;b<=dim;b++)
                {c=a[i][b]*v[b];
                        som=som+c;}
        p[i]=som; 
        som=0;}
    return;}
   
void somma_vett(int dim,vettore a,vettore b,vettore s)
    {int i;
     for (i=1;i<=dim;i++)
          s[i]=a[i]+b[i];
     return;}
     
void differenza_vett(int dim,vettore a,vettore b,vettore d)
    {int i;
     for (i=1;i<=dim;i++)
          d[i]=a[i]-b[i];
     return;}
    
float lambda (int dim,matrice a)
    {int i,j;float c,som,max;vettore tot;
     som=0;
     for(i=1;i<=dim;i++)
         {for(j=1;j<=dim;j++)
             {c=a[i][j]/a[i][i];
             som=som+c;}
          tot[i]=modulo(som-1);}
     max=tot[1];
     for(i=1;i<=dim;i++)
          if(tot[1]>max) tot[i]=max;
     return(max);}
float delta(int dim,vettore diff)
    {int i;  float max; 
     max=modulo(diff[1]);
     for(i=1;i<=dim;i++)
     if(modulo(diff[i])>max) max=diff[i];
     return(max);}
void jacobi(int dim,vettore x_k,matrice M,vettore d,vettore diff,matrice a)
    {int i,n,t; vettore x_old,app; float la,de;
     la=lambda(dim,a);
     t=1;
     do {  for (i=1;i<=dim;i++) x_old[i]=x_k[i];
         prodotto_mat_vett(dim,x_old,M,app);
         somma_vett(dim,app,d,x_k);   t++;
         differenza_vett(dim,x_old,x_k,diff);
         for (i=1;i<=dim;i++)  x_old[i]=x_k[i];
         //for(i=1;i<=dim;i++)
                   //printf("\n x[%d]= %f",i,x_k[i]);
         de=delta(dim,diff);
         //printf("\n delta %f",de);
         /*system("PAUSE");*/}
     while(modulo(de*la)>=eps);
     printf("\n\nla soluzione e'\n" );
     for(i=1;i<=dim;i++)
          printf("\n x[%d]= %f",i,x_k[i]);
     return ;}
float modulo(float a)
    { if(a>=0) return a;
      else return -a;}
