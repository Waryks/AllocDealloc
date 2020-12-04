#include <iostream>
#include "utilities.h"
#include "testProj.h"

using namespace std;

int main()
{
    int *vec, n, a[2],caz=0, vecStatic[250];
    testP();
    int care=0;
    cout << "1- Static, 2- Dinamic: ";
    cin >> care;
    if(care==1)
    {
        while(caz!=4)
        {
            cout << "1-ex 1, 2- ex 2, 3- ex 3, 4- iesire: ";
            cin >> caz;
            if(caz!=4)
            {
                cout << "Lungimea sirului: ";
                cin >> n;
                citireStatic(vecStatic,n);
            }
            if(caz == 1)
                subCrescStatic(vec,n,a);
            if(caz == 2)
                celMult3Static(vec,n,a);
            if(caz == 3)
                onlyPrimeStatic(vec,n,a);
            if(caz != 4)
            {
                for(int i=a[0]; i<a[0]+a[1]; i++)
                    cout << vecStatic[i] << " ";
                cout << '\n';
            }
            if(caz >= 4 || caz <=0)
                break;
        }
    }
    else
    {
        while(caz!=4)
        {
            cout << "1-ex 1, 2- ex 2, 3- ex 3, 4- iesire: ";
            cin >> caz;
            if(caz!=4)
            {
                cout << "Lungimea sirului: ";
                cin >> n;
                allocation(vec,n);
                citire(vec,n);
            }
            if(caz == 1)
                subCresc(vec,n,a);
            if(caz == 2)
                celMult3(vec,n,a);
            if(caz == 3)
                onlyPrime(vec,n,a);
            if(caz != 4)
            {
                for(int i=a[0]; i<a[0]+a[1]; i++)
                    cout << vec[i] << " ";
                deallocation(vec);
                cout << '\n';
            }
            if(caz >= 4 || caz <=0)
                break;
        }
    }
    return 0;
}
