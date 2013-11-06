// GAUSS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define DIM 50
#define eps 0.0001
typedef float matrice [DIM][DIM];
typedef float vettore [DIM];
void errore(int);
void leggi_dim (int&);
float modulo(float);
void leggi_mat (int,matrice,vettore);
void copia_matrice(int,matrice,matrice);
void copia_vettore(int,vettore,vettore);
void Gauss (int,matrice,vettore);
int trova_massimo (int, matrice, int, int);
void change_lines (int,int,int,matrice,vettore);
void vett_soluz (int,matrice,vettore,vettore);
void print_soluzione (int,vettore);
void prodotto_mat_vett(int,vettore,matrice,vettore);
void differenza_vett(int,vettore,vettore,vettore);
float delta(int,vettore);
void verifica(int,matrice,vettore,vettore);
main ()
{ int n; matrice a,d; vettore b,g,sol;
  leggi_dim (n);
  leggi_mat (n,a,b);
  copia_matrice(n,a,d);
  copia_vettore(n,b,g);
  Gauss (n,a,b);
  vett_soluz (n,a,b,sol);
  print_soluzione (n,sol);
  verifica (n,d,g,sol);
  printf("\n\n");
  system ("PAUSE");
  return 0;
}
void leggi_dim (int& dim)
    {printf("\nInserici la dimensione: ");
     scanf ("%d",&dim);
          while (dim<=0 || dim>=DIM)
              {printf ("\nAttenzione!");
               printf("\nLa dimensione inserita non e' permessa.\n Inserisci dinuovo la dimensione: ");
                     scanf ("%d",&dim);}
     return;}
void leggi_mat (int dim,matrice a,vettore b)
    {int i,j;
     printf ("\nInserisci i coefficienti della matrice:\n");
     for (i=1;i<=dim;i++)
         { for (j=1;j<=dim;j++)
                  {printf ("a[%d][%d]=",i,j); scanf ("%f",&a[i][j]);}  } 
     printf ("\nInserisci i coefficienti del vettore dei termini noti:\n");
     for (i=1;i<=dim;i++)
         {printf ("b[%d]=",i); scanf ("%f",&b[i]);}
     return;}
void Gauss (int dim,matrice a,vettore b)
    {int i,j,k,r; float m;
     for (k=1;k<dim;k++)
         {for (i=k;i<=dim;i++)
               {r=trova_massimo (dim,a,i,k); if (r!=i) change_lines (dim,i,r,a,b);}
          for (i=k+1;i<=dim;i++) 
               {if(a[k][k]==0) errore(1);
                m=a[i][k]/a[k][k]; a[i][k]=0;
	                    for (j=k+1;j<=dim;j++) a[i][j]=a[i][j]-m*a[k][j];
                b[i]=b[i]-m*b[k];}  }
     return;}
int trova_massimo (int dim,matrice a,int i,int k)
    {int imax=i;
     for (int j=i+1;j<=dim;j++)
        {if (modulo(a[j][k])>modulo(a[imax][k])) imax=j;}
     return imax;}
void change_lines (int dim,int i,int j,matrice a,vettore b)
    {float aux;
     for (int l=1;l<=dim;l++)
         {aux=a[i][l]; a[i][l]=a[j][l]; a[j][l]=aux;}
     aux=b[i]; b[i]=b[j]; b[j]=aux;
     return;}
void vett_soluz (int dim,matrice a,vettore b,vettore x)
    {if(a[dim][dim]==0) errore(2);
     x[dim]=b[dim]/a[dim][dim];
     for (int i=dim-1;i>=1;i--)
         {for (int j=i+1;j<=dim;j++) 
                  b[i]=b[i]-a[i][j]*x[j];
          x[i]=b[i]/a[i][i];}   
    return;}
void print_soluzione (int dim,vettore x)
    {printf ("\n\nLe soluzioni del sistema sono:");
     for (int i=1;i<=dim;i++)
         printf ("\n\nx[%d]=%f",i,x[i]);
     printf ("\n\n");
     return;}
void errore (int x)
    {if(x==1){printf("\nAttenzione, la matrice inserita e' singolare\n");
         system ("PAUSE");exit(1);}
     if(x==2){printf("\nAttenzione il sistema non e' compatibile\n");
         system ("PAUSE");exit(1);}
     }
     
float modulo(float a)
    { if(a>=0) return a;
      else return -a;}
      
void copia_matrice(int dim,matrice a,matrice d)
    {int i,j;
     for (i=1;i<=dim;i++)
         for (j=1;j<=dim;j++)
              d[i][j]=a[i][j];
     return;}
     
void copia_vettore(int dim,vettore b,vettore g)
    {int i;
     for (i=1;i<=dim;i++)
          g[i]=b[i];
     return;} 
     
void prodotto_mat_vett(int dim,vettore v,matrice a,vettore p)
    {int i,j; float c,som;som=0;
    for (i=1;i<=dim;i++)
        {for (j=1;j<=dim;j++)
                {c=a[i][j]*v[j]; som=som+c;}         
        p[i]=som; som=0;}
    return;}
    
void differenza_vett(int dim,vettore a,vettore b,vettore diff)
    {int i;
     for (i=1;i<=dim;i++)
          diff[i]=a[i]-b[i];
     return;}
float delta(int dim,vettore diff)
    {int i;  float max; 
     max=modulo(diff[1]);
     for(i=1;i<=dim;i++)
     if(modulo(diff[i])>max) max=diff[i];
     return(max);}
     
void verifica(int n,matrice d,vettore g,vettore sol)
    {int i,j; vettore app,diff;float de;
     prodotto_mat_vett(n,sol,d,app);
     differenza_vett(n,app,g,diff);
     de=delta(n,diff);
     if (de<eps) printf("\n riduzione corretta");
          else printf("\n riduzione non corretta");
     return;}
