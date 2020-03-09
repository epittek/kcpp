/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.09
 * \brief Cout whole array in C++
 * v0.01
 */

#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
 
int main()
{
   int  array[] = {1,2,3,4,5,6,7};

   /* int size = sizeof(array)/sizeof(array[0]);   
    * std::copy(array, array+size, std::ostream_iterator<int>(std::cout," ")); */
   std::copy(std::begin(array), std::end(array), std::ostream_iterator<int>(std::cout," "));
   std::cout << std::endl;
}
