#ifndef array_HPP
#define array_HPP
#include <cmath>
#include <iostream>
namespace array
{

 struct DoubleArray
{
    
    double *base;
int size;
};

struct CharacterArray
{
    double charPointer[];
    int size;
};

int countCharacter(char *base, int arraySize, char e)
{
int j=0;
if(e=='A'){
for(int i=0;i<arraySize;i++)
{
if(base[i]=='A')
j++;
}
return j;
}

if(e=='T'){
for(int i=0;i<arraySize;i++)
{
if(base[i]=='T')
j++;
}
return j;
}

if(e=='G'){
for(int i=0;i<arraySize;i++)
{
if(base[i]=='G')
j++;
}
return j;
}

if(e=='C'){
for(int i=0;i<arraySize;i++)
{
if(base[i]=='C')
j++;
}
return j;
}




}
void printAll(double *base, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << base[i] << std::endl;
    }
}

void printAll(DoubleArray array)
{

    for (int i = 0; i < array.size; i++)
    {
        std::cout << array.base[i] << std::endl;
    }
}

double maxArray(double *base, int arraySize)
{
    double max = base[0];
    for (int i = 1; i < arraySize; i++)
    {
        if (base[i] > max)
            max = base[i];
    }
    return max;
}

double maxArray(DoubleArray array)
{
    double max = array.base[0];
    for (int i = 1; i < array.size; i++)
    {
        if (array.base[i] > max)
            max = array.base[i];
    }
    return max;
}

double minArray(double *base, int arraySize)
{
    double min = base[0];
    for (int i = 1; i < arraySize; i++)
    {
        if (base[i] < min)
            min = base[i];
    }
    return min;
}

double minArray(DoubleArray array)
{
    double min = array.base[0];
    for (int i = 1; i < array.size; i++)
    {
        if (array.base[i] < min)
            min = array.base[i];
    }
    return min;
}

double meanArray(double *base, int arraySize)
{
    double sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum = sum + base[i];
    }
    return sum / arraySize;
}

double meanArray(DoubleArray array)
{
    double sum = 0;
    for (int i = 0; i < array.size; i++)
    {
        sum = sum + array.base[i];
    }
    return sum / array.size;
}

double varianceArray(double *base, int arraySize)
{
    double mean;
    mean = meanArray(base, arraySize);
    double diff[arraySize];
    double v[arraySize];
    double sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        diff[i] = mean - base[i];
        v[i] = pow(diff[i], 2);
        sum = sum + v[i];
    }
    return sum / arraySize;
}

double varianceArray(DoubleArray array)
{
    double mean;
    mean = meanArray(array);
    double diff[array.size];
    double v[array.size];
    double sum = 0;
    for (int i = 0; i < array.size; i++)
    {
        diff[i] = mean - array.base[i];
        v[i] = pow(diff[i], 2);
        sum = sum + v[i];
    }
    return sum / array.size;
}
}

#endif // array_HPP
