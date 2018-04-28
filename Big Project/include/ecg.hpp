#ifndef ECG_HPP
#define ECG_HPP
#include "arrays.hpp"
#include<cmath>
#include<iostream>
namespace ecg{
void analyzeECG( double *base , int arraySize , double &mean, double &variance, double &max, double &min )
{
    mean=array::meanArray(base,arraySize);
    variance=array::varianceArray(base,arraySize);
    max=array::maxArray(base,arraySize);
    min=array::minArray(base,arraySize);
}








struct Statistics{
double mean=0;
double variance=0;
double min=0;
double max=0;

};
typedef array::DoubleArray ECGArray;


Statistics analyzeECG( ECGArray ecg )
{
    Statistics analysis;

    analysis.mean =array::meanArray(ecg);
    analysis.variance =array::varianceArray(ecg);
    analysis.max=array::maxArray(ecg);
    analysis.min=array::minArray(ecg);
    return analysis;
}



}
#endif // ECG_HPP
