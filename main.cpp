#include <iostream>

using namespace std;
void letra();
void meses();
void figura();
void fibonacci();
void multiplos();
void primos();
void facprimo();
void sumprimos();
void espiral();
void triangular();

int main()
{
    int opcion=1;
    while(opcion!=0)
    {
        cout<<"Seleccione una opcion"<<endl;
        cout<<"1.saber si es vocal o consonante"<<endl;
        cout<<"2.saber si el mes y dia son validos"<<endl;
        cout<<"3.figura de numero impar"<<endl;
        cout<<"4.suma de n terminos par de fibonacci"<<endl;
        cout<<"5.suma de todos los multiplos"<<endl;
        cout<<"6.posicion de un numero primo"<<endl;
        cout<<"7.maximo factor primo"<<endl;
        cout<<"8.suma de los primeros n numeros primos"<<endl;
        cout<<"9.suma de la espiral"<<endl;
        cout<<"10.divisores numero triangular"<<endl;
        cout<<"0.Para salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {

        case 1:
        letra();
            break;
        case 2:
        meses();
            break;
        case 3:
        figura();
            break;
        case 4:
        fibonacci();
            break;
        case 5:
        multiplos();
            break;
        case 6:
        primos();
            break;
        case 7:
        facprimo();
            break;
        case 8:
        sumprimos();
            break;
        case 9:
        espiral();
            break;
        case 10:
        triangular();
            break;
        default:
        if(opcion!=0)
            cout<<"Opcion no es valida"<<endl;
        }
    cout<<endl;
    }
    return 0;
}
void letra()
    {
     char j;
     cout<<"Ingrese letra : ";
     cin>>j;
     if(j>=65 and j<=90)
         {
         if(j==65 or j==69 or j==73 or j==79 or j==85)
            cout<<j<<" es una vocal"<<endl;
         else
            cout<<j<<" es una consonant"<<endl;
         }
     else if(j>=97 and j<=122)
        {
        if(j==97 or j==101 or j==105 or j==111 or j==117)
            cout<<j<<" es una vocal"<<endl;
        else
            cout<<j<<" es una consonante"<<endl;
        }
     else
         cout<<"No es una letra"<<endl;
    }
void meses()
    {
    int m,d;
    cout<<"Ingrese mes : ";
    cin>>m;
    if(m>=1 and m<=12)
        {
        cout<<"Ingrese dias : ";
        cin>>d;
        if (m<=7)
            {
            if(d<=31 and d>=1)
                {
                if(m%2==0 and m!=2 and d<=30)
                    cout<<d<<"/"<<m<<" es una fecha valida"<<endl;
                else if(m%2==1 and d<=31)
                    cout<<d<<"/"<<m<<" es una fecha valida"<<endl;
                else if(m==2)
                     {
                     if(d==29)
                        cout<<d<<"/"<<m<<" es valido bisiesto"<<endl;
                     else if(d>=1 and d<=28)
                        cout<<d<<"/"<<m<<" es una fecha valida"<<endl;
                     else
                        cout<<d<<"/"<<m<<" es una fecha invalida"<<endl;
                     }
                  else
                      cout<<d<<"/"<<m<<" es una fecha invalida"<<endl;
                 }
            else
                cout<<d<<"/"<<m<<" es una fecha invalida"<<endl;
            }
        else if(m>=8)
            {
            if(d>=1 and d<=31)
                {
                if(m%2==0 and d<=31)
                    cout<<d<<"/"<<m<<" es una fecha valida"<<endl;
                else if(m%2==1 and d<=30)
                    cout<<d<<"/"<<m<<" es una fecha valida"<<endl;
                else
                    cout<<d<<"/"<<m<<" es una fecha invalida"<<endl;
                }
            else
                cout<<d<<"/"<<m<<" es una fecha invalida"<<endl;
            }
        }
    else
        cout<<m<<" es un mes invalido"<<endl;
    }
void figura()
    {
    int t,y=1;
    cout<<"Numero impar del tamano de la figura : ";
    cin>>t;
    for(int j=t/2;j>=0;j--)
        {
        for(int f=j;f>0;f--)
            cout<<" ";
        for(int g=1;g<=y;g++)
             cout<<"*";
        y+=2;
        cout<<endl;
        }
    for(int j=1;j<=t/2;j++)
        {
        for(int f=1;f<=j;f++)
            cout<<" ";
        for(int g=t-(2*j);g>0;g--)
            cout<<"*";
        cout<<endl;
        }
    }
void fibonacci()
    {
    int a=1,b=1,p=0,h=0,in;
    cout<<"Ingrese numero : ";
    cin>>in;
    while(h<in)
        {
        h=a+b;
        a=b;
        b=h;
        if(h%2==0 and h<in)
            p=p+h;
        }
    cout<<"El resutado de la suma : "<<p<<endl;
    }
void multiplos()
    {
    int a,b,c,d=0,e=1,f;
    cout<<"Ingrese el primer numero : ";
    cin>>a;
    cout<<"Ingrese seguno numero : ";
    cin>>b;
    cout<<"Ingrese tercer numero : ";
    cin>>c;
    f=a;
    while(f<c)
        {
        d+=f;
        cout<<f;
        e++;
        f=a*e;
        if(f<c)
            cout<<"+";
        }
    a=f/e;
    e=1;
    f=b;
    while(f<c)
        {
        if(f%a!=0)
            {
            d+=f;
            cout<<"+"<<f;
            }
        e++;
        f=b*e;
        }
    cout<<"="<<d<<endl;
    }
void primos()
    {
    int a,b=0,c=1,d=1,y=1;
    cout<<"Ingrese posicion de numero primo : ";
    cin>>a;
    while(c<=a)
        {
        while(y<=d and b<3)
            {
            if(d%y==0)
                b++;
            y++;
            }
        if(b==2)
            c++;
        d++;
        b = 0;
        y = 1;
        }
    cout<<"El primo numero "<<a<<" es: "<<d-1<<endl;
    }
void facprimo()
    {
    int a,b=0,c=0,d=1,y=1;
    cout<<"Maximo factor primo : ";
    cin>>a;
    while(d<=a)
        {
        while(y<=d and b<3)
            {
            if(d%y==0)
                b++;
            y++;
            }
        if(b==2)
            {
            if(a%d==0)
                c=d;
            }
        d++;
        b = 0;
        y = 1;
        }
    cout<<"El mayor factor primo de "<<a<<" es: "<<c<<endl;
    }

void sumprimos()
    {
    int a,b=0,c=0,d=1,y=1;
    cout<<"Suma de primo : ";
    cin>>a;
    while(d<a)
        {
        while(y<=d and b<3)
            {
            if(d%y==0)
                b++;
            y++;
            }
        if(b==2)
            c+=d;
        d++;
        b = 0;
        y = 1;
        }
    cout<<"El resultado de la suma es : "<<c<<endl;

    }

void espiral()
    {
    int n,a=2,b,c=1,d=0,f;
    cout<<"Ingrese numero impar : ";
    cin>>n;
    f=n;
    while(f>=3)
        {
        b=1;
        while(b<=4)
            {
            d+=c;
            c+=a;
            b++;
            }
        f-=2;
        a+=2;
        }
    d+=c;
    cout<<"En una espiral "<<n<<"x"<<n<<", La suma es : "<<d<<endl;
    }
void triangular()
    {
    int a,b=0,c=0,d=0,n=1;
    cout<<"Ingrese numero : ";
    cin>>a;
    while(d<=a)
        {
        d=0;
        b=1;
        c=n*(n+1)/2;
        while(b<=c)
            {
            if(c%b==0)
                d++;
            b++;
            }
        n++;
        }
    cout<<"El numero es: "<<c<<" y tiene "<<d<<" divisores"<<endl;
    }
