#include <iostream>
#include "utilities.h"
#include "testProj.h"
#include <cassert>

using namespace std;

void testP()
{
    //Exercitiul 1
    int a[2],*v;
    v = new int[5];
    v[1]=1;
    v[2]=2;
    v[3]=3;
    v[4]=2;
    v[5]=1;
    subCresc(v,5,a);
    assert(a[1]==3);
    delete[] v;
    v = NULL;
    //Exercitiul 3
    v = new int[5];
    v[1]=2;
    v[2]=3;
    v[3]=5;
    v[4]=2;
    v[5]=4;
    onlyPrime(v,5,a);
    assert(a[1]==2);
    delete[] v;
    v = NULL;
}
