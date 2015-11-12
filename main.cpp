#include <iostream>

using namespace std;
    int suma(int x, int y)
        {
            int z;
            z=x+y;
            return z;
        }
    int dif(int x, int y)
        {
            int z;
            z=x-y;
            return z;
        }
    int prod(int x, int y)
        {
            int z;
            z=x*y;
            return z;
        }
    int did(int x, int y)
        {
            int z;
            if (y==0)
            {
                cout<<"Nu se poate realiza impartirea! \n";

            }
            else
                {
                z=x/y;
                }
            return z;
        }
int main(int argc, char *argv[])
{
    int a,b;
     cout<<"Introduceti a= \n";
    cin>>a;
      cout<<"introduceti b= \n";
      cin>>b;
    char operatie;
    cout<<"Introduceti operatia: ";cin>>operatie;
    switch(operatie)

    {


    case '1' : cout<<"Suma este: "<<suma(a,b);
            break;
    case '2' : cout<<"Diferenta este: "<<dif(a,b);
            break;
    case '3' : cout<<"Produsul este: "<<prod(a,b);
            break;
    case '4' : cout<<"Rez. impartirii este: "<<did(a,b)<<" \n";
            break;
    default:cout<<"Ooops...";
    }



    system("Pause");
    return EXIT_SUCCESS;
}
