#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
float rez;
void permutare(int v[5])
{
   int i,a[5];
   for(i=1;i<=4;i++)
        a[i]=0;
   for(i=1;i<=4;i++)
   {
        v[i]=rand()%4+1;
        if(a[v[i]]==0)
        {
            a[v[i]]++;
        }
        else
        {
            while(a[v[i]]!=0)
                v[i]=rand()%4+1;
        }
        a[v[i]]++;
   }
}
void afisare(int v[5])
{
    int i;
    for(i=1;i<=4;i++)
    {
        cout<<i<<' ';
    }
    cout<<endl;
    for(i=1;i<=4;i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
}
void sortare(int a1[5], int a2[5])
{
    int i,j;
    for(i=1;i<=3;i++)
        for(j=i+1;j<=4;j++)
        {
            if(a1[i]>a1[j])
            {
                swap(a2[i],a2[j]);
                swap(a1[i],a1[j]);
            }
        }
}
void inversa(int v[5])
{
    int i,a1[5],a2[5];
    for(i=1;i<=4;i++)
    {
        a1[i]=i;
        a2[i]=v[i];
    }
    sortare(a2,a1);
    afisare(a1);
}
int nr_inv(int v[5])
{
    int i,j,nr=0,n;
    for(i=1;i<=3;i++)
    {
        n=0;
        for(j=i+1;j<=4;j++)
            if(v[i]>v[j])
                n++;
        nr=nr+n;
    }
    return nr;
}
void signatura(int v[5])
{
    int n;
    n=nr_inv(v);
    if(n%2==0)
        cout<<"Signatura=1 => permutare para"<<endl;
    else
        cout<<"Signatura=-1 => permutare impara"<<endl;
}
void compunerea(int v1[5], int v2[5], int c[5])
{
    int i,n;
    for(i=1;i<=4;i++)
    {
        n=v2[i];
        c[i]=v1[n];
    }
}
bool corecteaza(char r, char s)
{
    if(r==s)
        return true;
    return false;
}
void alege(char r)
{
    char s;
    cout<<"Raspunsul este: ";
    cin>>s;
    if(corecteaza(r,s)==true)
    {
        rez=rez+2.25;
        cout<<"Corect!"<<endl;
    }
    else
        cout<<"Gresit! Raspuns corect: "<<r<<endl;
    system("pause");
}
void intrebare1(int v[5])
{
    rez=0;
    cout<<"Signatura permutarii date este: "<<endl;
    cout<<"a) Signatura=-1 => permutare para"<<endl;
    if(nr_inv(v)%2==0)
        cout<<"b) Signatura=-1 => permutare impara"<<endl;
    else
        cout<<"b) Signatura=1 => permutare para"<<endl;
    cout<<"c) ";
    signatura(v);
    cout<<"d) Nu stiu!"<<endl;
}
void intrebare2 (int v1[5], int v2[5])
{
    int c[5];
    compunerea(v1,v2,c);
    cout<<"a)"<<endl;
    afisare(c);
    cout<<"b)"<<endl;
    swap(c[1],c[2]);
    afisare(c);
    cout<<"c)"<<endl;
    swap(c[2],c[3]);
    afisare(c);
    cout<<"d) Nu stiu!"<<endl;
}
void intreb3(int v1[5])
{
    cout<<"Inversa permutarii date este: "<<endl;
    cout<<"a)"<<endl; inversa(v1);
    swap(v1[1],v1[2]);
    cout<<"b)"<<endl; inversa(v1);
    swap(v1[1],v1[4]);
    cout<<"c)"<<endl; inversa(v1);
    cout<<"d) Nu stiu!"<<endl;
}
void intrebare4(int v[5])
{
    int n;
    n=nr_inv(v);
    cout<<"Numarul de inversiuni al permutarii date este: "<<endl;
    cout<<"a) "<<n+1<<endl;
    cout<<"b) "<<n<<endl;
    cout<<"c) "<<n-1<<endl;
    cout<<"d) Nu stiu!"<<endl;
}
int main()
{
    int optiune,opt1,opt2,p[5],c[5],comp[5];
    char r;
    do
    {
        system("cls");
        cout<<"PERMUTARI"<<endl;
        cout<<"Acest program te va ajuta sa intelegi capitolul Permutari din Algebra superioara de clasa a XI-a"<<endl;
        cout<<"Te rog sa alegi o optiune din urmatoarele:"<<endl;
        cout<<"1. Intelegere permutari"<<endl;
        cout<<"2. Verificarea cunostintelor"<<endl;
        cout<<"3. Parasire program"<<endl;
        cout<<"Numarul optiunii tale este: ";
        cin>>optiune;
        if(optiune!=1 and optiune!=2 and optiune!=3)
        {
            cout<<"Numarul optiunii este incorect!"<<endl;
            system("pause");
        }
        else
        {
            switch(optiune)
            {
                case 1:
                    do
                    {
                        system("cls");
                        cout<<"PERMUTARI. Intelegere"<<endl;
                        cout<<"1)Permutarea inversa"<<endl;
                        cout<<"2)Numarul de inversiuni"<<endl;
                        cout<<"3)Signatura unei permutari"<<endl;
                        cout<<"4)Compunerea permutarilor"<<endl;
                        cout<<"5)Revin la meniul principal"<<endl;
                        cout<<endl<<"Optiunea ta este: ";
                        cin>>opt1;
                        if(opt1<1 or opt1>5)
                        {
                            cout<<"Numarul optiunii este incorect!"<<endl;
                            system("pause");
                        }
                        else
                        {
                            srand(time(NULL));
                            permutare(p);
                            switch(opt1)
                            {
                            case 1:
                                system("cls");
                                cout<<"1)Permutarea inversa"<<endl;
                                cout<<"Se considera permutarea: "<<endl;
                                afisare(p);
                                cout<<"Inversa este:"<<endl;
                                inversa(p);
                                system("pause");
                                break;
                            case 2:
                                system("cls");
                                cout<<"2)Numaul de inversiuni"<<endl;
                                cout<<"Se considera permutarea: "<<endl;
                                afisare(p);
                                cout<<"Numarul de inversiuni este: "<<nr_inv(p)<<endl;
                                system("pause");
                                break;
                            case 3:
                                system("cls");
                                cout<<"3)Signatura unei permutari"<<endl;
                                cout<<"Se considera permutarea: "<<endl;
                                afisare(p);
                                signatura(p);
                                system("pause");
                                break;
                            case 4:
                                system("cls");
                                cout<<"4)Compunerea permutarilor"<<endl;
                                cout<<"Se considera permutarea: "<<endl;
                                afisare(p);
                                cout<<"compusa cu permutarea:"<<endl;
                                permutare(c);
                                afisare(c);
                                cout<<"este egala cu: "<<endl;
                                compunerea(p,c,comp);
                                afisare(comp);
                                system("pause");
                                break;
                            case 5:
                                system("cls");
                                cout<<"O sa te intorci la meniul principal!";
                                break;
                            }
                        }
                    }while(opt1!=5);
                    break;
                case 2:
                    system("cls");
                    cout<<"PERMUTARI. Verificarea cunostintelor"<<endl;
                    cout<<"Vei primi o serie de 4 intrebari, fiecare punctata cu 2.25 puncte."<<endl;
                    cout<<"Se acorda 1 punct din oficiu."<<endl;
                    cout<<"Succes!"<<endl;
                    opt2=1;
                    system("pause");
                    do
                    {
                        system("cls");
                        cout<<"Alege litera corespunzatoare a raspunsului corect!"<<endl;
                        cout<<"Cerinta "<<opt2<<endl;
                        switch(opt2)
                        {
                        case 1:
                            cout<<"Se da permutarea: "<<endl;
                            permutare(p);
                            afisare(p);
                            intrebare1(p);
                            r='c';
                            alege(r);
                            break;
                        case 2:
                            cout<<"Permutarea: "<<endl;
                            permutare(p);
                            afisare(p);
                            cout<<"compusa cu permutarea:"<<endl;
                            permutare(c);
                            afisare(c);
                            cout<<"este egala cu: "<<endl;
                            intrebare2(p,c);
                            r='a';
                            alege(r);
                            break;
                        case 3:
                            cout<<"Se da permutarea: "<<endl;
                            permutare(p);
                            afisare(p);
                            intreb3(p);
                            r='a';
                            alege(r);
                            break;
                        case 4:
                            cout<<"Se da permutarea: "<<endl;
                            permutare(p);
                            afisare(p);
                            intrebare4(p);
                            r='b';
                            alege(r);
                            break;
                        }
                        opt2++;
                    }while(opt2<=4);
                    system("cls");
                    cout<<"Ai terminat testul!"<<endl;
                    cout<<"Fiecare exercitiu corect s-a punctat cu 2.25 puncte, iar un punct este din oficiu"<<endl;
                    cout<<"Nota ta este: "<<rez+1<<" (";
                    if(rez<=5)
                        cout<<"Nu ai exersat cat trebuie!)"<<endl;
                    else
                        if(rez<=8.5)
                            cout<<"POTI MAI MULT!)"<<endl;
                        else
                            cout<<"SUPER! Continua la fel!)"<<endl;
                    system("pause");
                    break;
                case 3:
                    system("cls");
                    cout<<"Sper ca ti-am fost de ajuor! La revedere!"<<endl;
                    break;
            }
        }
    }while(optiune!=3);
}
