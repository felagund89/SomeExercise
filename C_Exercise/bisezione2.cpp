//ricerca degli zeri: metodo di bisezione   x - x^2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define t_max 200
#define precisione1 0.0001
#define precisione2 0.000001
float valore_del_punto(float);
void prod_val(float,float);
void bisezione(float ,float );
float modulo(float );
float derivata (float);
float newton (float);
float ins_x_zero (float &,float,float);
main()
{float a,b,f_a,f_b, x_zero,y;
printf("\n estremo a dell'intervallo:");  scanf ("%f",&a);
printf("\n estremo b dell'intervallo:");  scanf ("%f",&b);
f_a=valore_del_punto(a);
printf("\n f[%f]= %f",a,f_a);
f_b=valore_del_punto(b);
printf("\n f[%f]= %f",b,f_b);
prod_val(f_a,f_b);
bisezione(a,b);
ins_x_zero (x_zero,a,b);
y=newton(x_zero);
printf("\n\n %f",y);
printf("\n\n");
system ("PAUSE");
return 0;
}
float valore_del_punto(float z)
    {float y;
    y=(z-(z*z));
    return (y);}
void prod_val(float f_a,float f_b)
    {if(f_a*f_b >0)
        printf("\n non e'verificato il teorema dell'esistenza degli zeri");
    return ;}
void bisezione(float a,float b)
    {float c,a_n,b_n,f_c,f_a_n,f_b_n;int t=1;
     a_n=a; b_n=b;
     do { c=(a_n+b_n)/2;
     f_c=valore_del_punto(c);
     f_a_n=valore_del_punto(a_n);
     f_b_n=valore_del_punto(b_n);
     if(f_c*f_b_n<0) { a_n=c; b_n=b_n; }
     else {a_n=a_n; b_n=c;}t++; }
     while( ((modulo(a_n-b_n)>=precisione1) && (modulo(f_a_n-f_b_n)>=precisione2)) ||(t<t_max));
     printf("\n\nLo zero della funzone e' %f",c);
     return ;
     }
float ins_x_zero (float &x_zero, float a, float b)
{
do{
printf("\n\nInserire x_zero per iniziare metodo di newton");
printf("\n\nAttenzione: x_zero deve essere contenuto nell'intervallo a,b\n.");
scanf("%f",&x_zero);
} while((x_zero<a) || (x_zero>b));
return(x_zero);
}
float newton (float x_zero)
{
float x_new, x_old=x_zero;
do{
x_new=x_old-(valore_del_punto(x_old)/derivata(x_old));
x_old=x_new;
}
while((modulo(x_new-x_old)>=precisione1) && (modulo(valore_del_punto(x_old))>=precisione2));
return(x_new);
}
float derivata (float x)
{
float h=0.001;
return( (valore_del_punto(x+h)-valore_del_punto(x))/h);
}
float modulo(float a)
    { if(a>=0) return a;
      else return -a;}
