#include "ecg.hpp" // for ecg::analyzeECG
#include "helpers.hpp" // for helpers::loadECG
#include<cmath>
using namespace std;
int main( 	int argc , char **argv )
{
    if( argc != 2 )
    {
        std::cout << "Invalid usage!" << std::endl;
        return 1;
    }
    else
    {
        int size = 0;
        double *ecgArray = helpers::getECG( argv[1] , size );

        ecg::ECGArray ecg {ecgArray,size};
        ecg::Statistics stats=ecg::analyzeECG( ecg );

        double average = 0, standardDev = 0, max = 0 , min = 0;
        ecg::analyzeECG( &ecgArray[0] , size ,average , standardDev , max , min );

        std::cout <<"ECG average : " << average << std::endl;
                std::cout << "ECG variance: " << standardDev << std::endl;
               std::cout  << "ECG range   : (" << min << "," << max << ")" << std::endl;



std::cout <<"ECG average : " << stats.mean << std::endl;
           std::cout      << "ECG variance: " << stats.variance << std::endl;
             std::cout    << "ECG range   : (" << stats.min << "," << stats.max << ")" << std::endl;


        delete [] ecgArray;
        return 0;
    }
}
