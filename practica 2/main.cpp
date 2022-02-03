#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <cmath>
using namespace std;

void aleatorio(char *b);
void punto2();
void punto3();
void punto4();
void punto6();
void punto9();
void punto11();
void cupunto11(char **a);
void punto12();
void cuadr14(int **asd);
void punto14();
void punto16();
void punto18();

int main()
{
    int asdf=1;

    while(asdf!=0)
    {
        cout<<"Ingrese numero del punto o para salir ingrese cero: "<<endl;
        cin>>asdf;

        switch(asdf)
        {
        case 2:
            punto2();
            break;

        case 3:
            punto3();
            break;

        case 4:

            punto4();
            break;

        case 6:

            punto6();
            break;

        case 9:

            punto9();
            break;

        case 11:
            punto11();
            break;

        case 12:

            punto12();
            break;

        case 14:

            punto14();
            break;

        case 16:

            punto16();
            break;

        case 18:

            punto18();
        break;

        }

    }

    return 0;
}
void aleatorio(char *b)
{
srand(time(NULL));
char ale;
for(int i=0;i<200;i++)
{ale = rand()%(90-65+1)+65;
b[i]=ale;
}
}
void punto2()
{
    char a[200];
    char *b = a;
    aleatorio(b);
    for(int l=0;l<200;l++)
    cout<<b[l];
    cout<<endl;
    for(char j=65;j<=90;j++)
    {
    int t=0;
    for(int k=0;k<200;k++)
        {
        if(j==b[k])
            t++;
        }
    cout<<j<<": "<<t<<endl;
    }
}
void punto3()
{
    char *a=NULL,*b=NULL;
    a=new char[100];b=new char[100];
    int gh=100;
    bool w=true;
    cout<<"Ingrese primera cadena de caracteres: "<<endl;
    cin>>a;
    cout<<"Ingrese segunda cadena de caracteres: "<<endl;
    cin>>b;

    for(int j=0;j<=gh;j++)
        {
            if(a[j]!=b[j])
                {
                w=false;
                break;
                }
            else if(a[j]==0 and b[j]==0)
                {
                break;
                }
         }
    if(w==true)
        cout<<"Verdadero"<<endl;
    else
        cout<<"Falso"<<endl;
    delete[] a;delete[] b;
}
void punto4()
{
    char *a=NULL;a=new char [100];
    int i=0,h=0,yu=0;
    cout<<"ingrese cadena de caracteres numericos :"<<endl;
    cin>>a;
    for(i=0;i<10;i++)
        {
        if(a[i]==0)
            break;
        }
    int *b=NULL;b=new int[i];
    for(int j=0;j<i;j++)
        {
        b[j]=a[j]-48;
        }
    int n=i;
    for(int k=0;k<i;k++)
        {
        yu = pow(10,n-1);
        h+=b[k]*(yu);
        n--;
        }
    cout<<h<<endl;
    delete[] a;delete[] b;
}
void punto6()
{
    char *a=NULL;a=new char[100];
    int i=0;
    cout<<"Ingrese cadena de caractares a convertir : "<<endl;
    cin>>a;
    for(i=0;i<100;i++)
        {
        if(a[i]==0)
            break;
        }
    char *b=NULL;
    b=new char[i];
    for(int j=0;j<i;j++)
        {
        if(a[j]>=97 and a[j]<=122)
            b[j]=a[j]-32;
        else
            b[j]=a[j];
        }
    for(int j=0;j<i;j++)
        cout<<b[j];
    cout<<endl;
    delete[] b;delete[] a;
}
void punto9()
{
    char *a=NULL;a=new char[100];
    int i=0,n=0,cs=0,cf=0,hj=0;
    cout<<"ingrese cadena de caracteres numericos :"<<endl;
    cin>>a;
    cout<<"ingrese numero n :"<<endl;
    cin>>n;
    for(i=0;i<100;i++)
        {
        if(a[i]==0)
            break;
        }
    i--;
    int jk=(i+1)/n;
    if((i+1)%n!=0)
        {
        hj=i;
        while(hj%n!=0)
            {
            jk++;
            hj=jk*n;
            cs=hj-i-1;
            }
        cf=cs;
        i=hj;
        }
    int *b=NULL;b=new int[i];
    for(int j=0;j<i;j++)
        {
        if(cs>0)
            {
            b[j]=0;
            cs--;
            }
        else
            b[j]=a[j-cf]-48;
        }
    int df=0,yu=0,m=0;
    for(int j=0;j<n;j++)
        {
        int g=jk,h=0;
        while(g>0)
            {
            yu = pow(10,g-1);
            h+=b[m]*(yu);
            g--;
            m++;
            }
        df+=h;
        }
    int o=0;
    cout<<"Original: ";
    while(a[o]!=0)
        {
        cout<<a[o];
        o++;
        }
    cout<<endl;
    cout<<"Suma: "<<df<<endl;
    delete[] a;delete[] b;
}
void punto11()
{
    char f=NULL;
    int ds=NULL,hj=0;
    bool a=NULL;
    char **ag=NULL;ag=new char* [15];
    for(int i=0;i<15;i++)
        ag[i]=new char [20];
    for(int yu=0;yu<15;yu++)
    {
        for(int i=0;i<20;i++)
            ag[yu][i]=45;
    }
    cout<<"si desea hacer reserva ingrese 1,o cancelacion 0: ";
    cin>>a;
    cout<<"ingrese fila(a-o): ";
    cin>>f;
    cout<<"ingrese numero de silla(1-20): ";
    cin>>ds;
    for(char h=97;h<=111;h++)
    {
        hj++;
        if(h==f)
            break;
    }
    hj--;
    ds--;
    if(a==1)
        ag[hj][ds]=43;
    else
        ag[hj][ds]=45;
    cupunto11(ag);
    for(int i=0;i<15;i++)
            delete[] ag[i];
    delete[] ag;
}
void cupunto11(char **ag)
{
    char a=218,b=196,c=194,d=179,e=191,f=217,g=195,h=196,k=197,l=180,n=192,m=217,v=193;int df=0;
    cout<<a<<b<<b<<b;
    for(int i=0;i<19;i++)
        cout<<c<<b<<b<<b;
    cout<<e<<endl;
    for(df=0;df<14;df++)
    {
        for(int i=0;i<20;i++)
            cout<<d<<" "<<ag[df][i]<<" ";
        cout<<d<<endl;
        cout<<g<<b<<b<<b;
        for(int i=0;i<19;i++)
            cout<<k<<b<<b<<b;
        cout<<l<<endl;
    }
    for(int i=0;i<20;i++)
        cout<<d<<" "<<ag[df][i]<<" ";
    cout<<d<<endl;
    cout<<n<<b<<b<<b;
    for(int i=0;i<19;i++)
        cout<<v<<b<<b<<b;
    cout<<m<<endl;
}
void punto12()
{
    char a=218,b=196,c=194,d=179,e=191,f=217,g=195,h=196,k=197,l=180,n=192,m=217,v=193;
    int df=0,qw=0,**asd=NULL,dh=0;
    cout<<"Ingrese tamanio de la matriz: ";
    cin>>qw;
    asd=new int* [qw];
    for(int i=0;i<qw;i++)
        asd[i]=new int [qw];
    for(int yu=0;yu<qw;yu++)
    {
        cout<<"ingrese fila "<<yu+1<<": "<<endl;
        for(int i=0;i<qw;i++)
        {
            cout<<"ingrese termino "<<i+1<<": ";
            cin>>dh;
            asd[yu][i]=dh;
        }
    }
    cout<<a<<b<<b<<b;
    for(int i=0;i<qw-1;i++)
        cout<<c<<b<<b<<b;
    cout<<e<<endl;
    for(df=0;df<qw-1;df++)
    {
        for(int i=0;i<qw;i++)
            cout<<d<<" "<<asd[df][i]<<" ";
        cout<<d<<endl;
        cout<<g<<b<<b<<b;
        for(int i=0;i<qw-1;i++)
            cout<<k<<b<<b<<b;
        cout<<l<<endl;
    }
    for(int i=0;i<qw;i++)
        cout<<d<<" "<<asd[df][i]<<" ";
    cout<<d<<endl;
    cout<<n<<b<<b<<b;
    for(int i=0;i<qw-1;i++)
        cout<<v<<b<<b<<b;
    cout<<m<<endl;
    int jui=0,fgh=0;
    bool xc=1;
    for(int i=0;i<qw;i++)
    {
        fgh=jui;
        jui=0;
        for(int j=0;j<qw;j++)
            jui+=asd[i][j];
        if(fgh!=jui and fgh!=0)
        {
            xc=0;
            break;
        }
    }
    if(xc==1)
    {
        for(int i=0;i<qw;i++)
        {
            fgh=jui;
            jui=0;
            for(int j=0;j<qw;j++)
                jui+=asd[j][i];
            if(fgh!=jui and fgh!=0)
            {
                xc=0;
                break;
            }
        }
        if(xc==1)
        {
            jui=0;
            for(int i=0;i<qw;i++)
                jui+=asd[i][i];
            if(jui!=fgh)
                xc=0;
            if(xc==1)
            {
                jui=0;
                for(int i=0,k=qw;i<qw;i++,k--)
                    jui+=asd[k-1][i];
                if(jui!=fgh)
                    xc=0;
                if(xc==1)
                    cout<<"Verdadero"<<endl;
                else
                    cout<<"Falso"<<endl;
            }
            else
                cout<<"Falso"<<endl;
        }
        else
            cout<<"Falso"<<endl;
    }
    else
        cout<<"Falso"<<endl;
    for(int i=0;i<qw;i++)
        delete[] asd[i];
    delete[] asd;
}
void cuadr14(int **asd)
{
    char a=218,b=196,c=194,d=179,e=191,f=217,g=195,h=196,k=197,l=180,n=192,m=217,v=193;
    int df=0,qw=5;
    cout<<a<<b<<b<<b<<b;
    for(int i=0;i<qw-1;i++)
        cout<<c<<b<<b<<b<<b;
    cout<<e<<endl;
    for(df=0;df<qw-1;df++)
    {
        for(int i=0;i<qw;i++)
        {
            if(asd[df][i]<10)
                cout<<d<<" "<<asd[df][i]<<"  ";
            else
                cout<<d<<" "<<asd[df][i]<<" ";
        }
        cout<<d<<endl;
        cout<<g<<b<<b<<b<<b;
        for(int i=0;i<qw-1;i++)
            cout<<k<<b<<b<<b<<b;
        cout<<l<<endl;
    }
    for(int i=0;i<qw;i++)
    {
        if(asd[df][i]<10)
            cout<<d<<" "<<asd[df][i]<<"  ";
        else
            cout<<d<<" "<<asd[df][i]<<" ";
    }
    cout<<d<<endl;
    cout<<n<<b<<b<<b<<b;
    for(int i=0;i<qw-1;i++)
        cout<<v<<b<<b<<b<<b;
    cout<<m<<endl;
}
void punto14()
{
    char a=218,b=196,c=194,d=179,e=191,f=217,g=195,h=196,k=197,l=180,n=192,m=217,v=193;
    int qw=5,**asd=NULL,dh=1;
    asd=new int* [qw];
    for(int i=0;i<qw;i++)
        asd[i]=new int [qw];
    for(int yu=0;yu<qw;yu++)
    {
        for(int i=0;i<qw;i++)
        {
            asd[yu][i]=dh;
            dh++;
        }
    }
    cuadr14(asd);
    cout<<90<<endl;
    dh=1;
    for(int yu=qw-1;yu>=0;yu--)
    {
        for(int i=0;i<qw;i++)
        {
            asd[i][yu]=dh;
            dh++;
        }
    }
    cuadr14(asd);
    cout<<180<<endl;
    dh=1;
    for(int yu=qw-1;yu>=0;yu--)
    {
        for(int i=qw-1;i>=0;i--)
        {
            asd[yu][i]=dh;
            dh++;
        }
    }
    cuadr14(asd);
    cout<<270<<endl;
    dh=1;
    for(int yu=0;yu<qw;yu++)
    {
        for(int i=qw-1;i>=0;i--)
        {
            asd[i][yu]=dh;
            dh++;
        }
    }
    cuadr14(asd);
    for(int i=0;i<qw;i++)
        delete[] asd[i];
    delete[] asd;
}
void punto16()
{
    unsigned long long int b=1;int n=0;
    cout<<"ingrese tamanio de la malla: ";
    cin>>n;
    for(int i=n+1;i>0;i--)
        b=b*i;
    cout<<"Para una malla de "<<n<<"x"<<n<<" puntos hay "<<b<<" caminos."<<endl;
}
void punto18()
{
    int n=0,tam=10,*a=NULL;a=new int [tam];
    int*b=NULL;b=new int [10];int*c=NULL;c=new int [10];
    cout<<"Ingrese numero de permutacion: ";
    cin>>n;
    n++;
    int j=n;
    for(int i=0;i<10;i++)
        b[i]=i;
    for(int i=1;i<=tam;i++)
    {
        a[tam-i]=j%i;
        j=j/i;
    }
    for(int i=0;i<tam;i++)
    {
        c[i]=b[a[i]];
        for(int j=a[i];j<tam;j++)
            b[j]=b[j+1];
    }
    cout<<"La permutacion numero "<<n-1<<" es: ";
    for(int i=0;i<tam;i++)
        cout<<c[i];
    cout<<endl;
    delete[] a;delete[] b;delete[] c;
}
