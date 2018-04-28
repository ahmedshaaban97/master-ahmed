#include <iostream>


// Solved: P1. Declare an integer with name (v) and initialize it with 2, in the global scope.
int v = 2;

// P2. Declare  an integer with name (u) and initialize it with v + 5, in the global scope.

int u = v + 5;

// Solved: P3. Given the function declaration (header), return the square of a given double (x).
double square( double x )
{
    return x * x;
}

// P4. Given the function declaration (header), return the cube of a given double (x).
double cube( double x )
{
     return x*x*x;
}

        




// P5. Using for or while loop, compute the summation of integers from 1 to 15.
// Hints: before entering the loop, you need to declare and initialize a variable to accumulate the values.
int sumOfFirst15Integers()
{

     int sumOffirst15integers(0);
   for(int x=1;x<=15;x++)
   {
   sumOffirst15integers=sumOffirst15integers+x;

   }
  return sumOffirst15integers;


}



// P6. Using while loop, compute the summation of first 15 odd integers (starting from 1).
// Hints: before entering the loop, make a 3 variables:
// 1- Counter for iteration over integers starting from 1,
// 2- Accumulater for summing odd integers,
// 3- And a variable that counts the odd integers, so the loop terminates once it reaches 15.

// Hints: use the expression ( x % 2 ) == 1 in if conditions to determine whether (x) is odd or even.
int sumOfFirst15OddIntegers()
{

int i=0;
int sumOffirst15oddnumber=0;
int oddnumber=1;
  while(i!=16)
  {
if((oddnumber%2)==0){
oddnumber++;
sumOffirst15oddnumber=sumOffirst15oddnumber+oddnumber;
}else{
sumOffirst15oddnumber=sumOffirst15oddnumber+oddnumber;
}
oddnumber++;
  i++;
}
return sumOffirst15oddnumber;

}

                
// You know that our DNA is double stranded. Each base has its complementary base.
// Adenine (A) binds to Thymine (T)
// Guanine (G) binds to Cytocine (C)
// Example:
// A-G-T-A-T-C-A-A-C
// T-C-A-T-A-G-T-T-G

// If you don't know what DNA is? see this short video: https://www.youtube.com/watch?v=zwibgNGe4aY

// P7. Given the following implemented function with (if-else if-else) that returns the complementary base,
// Convert this function to do the same logic with (switch-case).


char complementaryBase( char base )
{
    if( base == 'A' )
    {
        return 'T';
    }
    else if( base == 'T' )
    {
        return 'A';
    }
    else if( base == 'C' )
    {
        return 'G';
    }
    else
    {
        return 'C';
    }
}

//p7 sol.
namespace dna{

char complementaryBase( char base )
{
switch(base){
    case 'A':
        return 'T';
        break;

   case 'T':
        return 'A';
         break;

    case 'C' :

        return 'G';
         break;

    default:

        return 'C';
         break;

}
}
}


// P8. In the previous problem, enclose the function complementaryBase inside a namespace with name (dna).

int main()
{

    std::cout << "u = " << u << std::endl;
    std::cout << "The square of u = " << square( u ) << std::endl;
    std::cout << "The cube of u = " << cube( u ) << std::endl;

    std::cout << "The sum of integers from 1 to 15 = " << sumOfFirst15Integers() << std::endl;
    std::cout << "The sum of first 15 odd integers = " << sumOfFirst15OddIntegers() << std::endl;

    std::cout << "The complementary base of 'A' = "
              << dna::complementaryBase( 'A' ) << std::endl;

    std::cout << "The complementary base of 'C' = "
              << dna::complementaryBase( 'C' ) << std::endl;

    std::cout << "The complementary base of 'G' = "
              << dna::complementaryBase( 'G' ) << std::endl;

    std::cout << "The complementary base of 'T' = "
              << dna::complementaryBase( 'T' ) << std::endl;

    return 0;
}


