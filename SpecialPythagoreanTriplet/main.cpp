//
//  main.cpp
//  SpecialPythagoreanTriplet
//
//  Created by Michael Wienands on 9/22/17.
//  Copyright © 2017 Michael Wienands. All rights reserved.
//  https://github.com/mwienands/SpecialPythagoreanTriplet.git

//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.



#include <iostream>
#include <cmath>



void pythagoreanTriplets(int limit)
{
    // triplet:  a^2 + b^2 = c^2
    int a, b, c=0;
    
    //  loop from 2 to max_limitit
    int m = 2;
    
    // Limiting c would limit all a, b and c
    while (c < limit)
    {
        // now loop on j from 1 to i-1
        for (int n = 1; n < m; ++n)
        {
            // Evaluate and print triplets using
            // the relation between a, b and c
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m + n*n;
            
            if (c > limit)
                break;
            if(a+b+c == 1000){
                std::cout<< a <<", " <<b<<", " << c <<"\n";
            }
            
            
        }
        m++;
    }
}

int main(int argc, const char * argv[]) {
    
    
   
    pythagoreanTriplets(1000);
    
    
    
    std::cout << "hello World";
    return 0;
}
