#ifndef UTIL_H
#define UTIL_H
    void allocation(int*& lista, int length);
    void deallocation(int*& lista);
    void subCresc(int*& lista, int lenght, int a[2]);
    void celMult3(int*& lista, int lenght, int a[2]);
    void citire(int*& lista, int lenght);
    void onlyPrime(int*& lista, int lenght, int a[2]);
    bool isPrime(int x);
    void diferite(int*& lista, int lenght, int a[2]);
    void celMult3Static(int lista[], int lenght, int a[2]);
    void onlyPrimeStatic(int lista[], int lenght, int a[2]);
    void subCrescStatic(int lista[], int lenght, int a[2]);
    void citireStatic(int lista[], int lenght);
#endif // UTIL_H
