#include <iostream>
#include "utilities.h"
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x){
   if(x == 2) return false;
   for(int i = 2; i <= x/2; ++i)
      if(x%i==0) return false;
   return true;

}

void allocation(int*& lista, int length)
{
    lista = new int[length];
}
void deallocation(int*& lista)
{
    if (lista != NULL)
    {
        delete[] lista;
        lista = NULL;
    }
}
void subCrescStatic(int lista[],int lenght, int a[2])
{
    int maxim=0, start=0, as=0, contor;
    for(int i=0; i<lenght; i++)
    {
        if(i==0)
            contor=1;
        if(i==lenght - 1 || lista[i] > lista[i+1])
        {
            if(maxim<contor)
            {
                start=as;
                maxim=contor;
            }
            contor = 0;
            as = i+1;
        }
        contor++;
    }
    a[0]=start;
    a[1]=maxim;
}
void subCresc(int*& lista, int lenght, int a[2])
{
    int maxim=0, start=0, as=0, contor;
    for(int i=0; i<lenght; i++)
    {
        if(i==0)
            contor=1;
        if(i==lenght - 1 || lista[i] > lista[i+1])
        {
            if(maxim<contor)
            {
                start=as;
                maxim=contor;
            }
            contor = 0;
            as = i+1;
        }
        contor++;
    }
    a[0]=start;
    a[1]=maxim;
}
void celMult3(int*& lista, int lenght, int a[2])
{
    int maxim=0, start=0, as=0, contor=0, lung=0, next=lenght-1;
    for(int i=0; i<lenght; i++)
    {
        lung ++;
        if(lista[as]!= lista[i])
        {
            if(contor == 0)
                next = i;
            contor ++;
        }
        if((lista[as]!= lista[i] && contor == 3) || i == lenght-1)
        {
            if(lung > maxim)
            {
                start = as;
                maxim = lung;
            }
            as = next;
            contor = 0;
            if(i != lenght-1)
                i = next - 1;
            lung = 0;
        }
    }
    a[0]=start;
    a[1]=maxim;
}
void celMult3Static(int lista[], int lenght, int a[2])
{
    int maxim=0, start=0, as=0, contor=0, lung=0, next=lenght-1;
    for(int i=0; i<lenght; i++)
    {
        lung ++;
        if(lista[as]!= lista[i])
        {
            if(contor == 0)
                next = i;
            contor ++;
        }
        if((lista[as]!= lista[i] && contor == 3) || i == lenght-1)
        {
            if(lung > maxim)
            {
                start = as;
                maxim = lung;
            }
            as = next;
            contor = 0;
            if(i != lenght-1)
                i = next - 1;
            lung = 0;
        }
    }
    a[0]=start;
    a[1]=maxim;
}
void onlyPrime(int*& lista, int lenght, int a[2])
{
    int maxim=0, start=0, as=0, contor;
    for(int i=0; i<lenght; i++)
    {
        if(i==0)
            contor=1;
        if(i==lenght - 1 || !isPrime(lista[i+1]) )
        {
            if(maxim<contor)
            {
                start=as;
                maxim=contor;
            }
            while(i==lenght - 1 || !isPrime(lista[i+1]))
                i++;
            contor = 0;
            as = i+1;
        }
        contor++;
    }
    a[0]=start;
    a[1]=maxim;
}
void onlyPrimeStatic(int lista[], int lenght, int a[2])
{
    int maxim=0, start=0, as=0, contor;
    for(int i=0; i<lenght; i++)
    {
        if(i==0)
            contor=1;
        if(i==lenght - 1 || !isPrime(lista[i+1]) )
        {
            if(maxim<contor)
            {
                start=as;
                maxim=contor;
            }
            while(i==lenght - 1 || !isPrime(lista[i+1]))
                i++;
            contor = 0;
            as = i+1;
        }
        contor++;
    }
    a[0]=start;
    a[1]=maxim;
}
/*
void diferite(int*& lista, int lenght, int a[2])
{
    int maxim=0, start=0, as=0, contor;
    for(int i=0; i<lenght; i++)
    {
        contor = 0;
        as = i;
        vector<int> aici(1000000, 0);
        for(int j=i; j<lenght; j++)
        {
            contor++;
            aici[j]++;
            if(aici[j]>=2 || j == lenght-1)
                if(contor>maxim)
                {
                    if(j!=lenght-1)
                        contor --;
                    maxim = contor;
                    start = as;
                    break;
                }
        }
    }
    a[0]=start;
    a[1]=maxim;
}*/
void citire(int*& lista, int lenght)
{
    for(int i=0; i<lenght; i++)
        cin >> lista[i];
}
void citireStatic(int lista[], int lenght)
{
    for(int i=0; i<lenght; i++)
        cin >> lista[i];
}
