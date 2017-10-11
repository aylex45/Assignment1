//
//  CrazyRandomSword.cpp
//  
//
//  Created by Alex Coalla on 10/10/17.
//

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    
    int rand();
    int ran = (rand()%.5);
    
    double damage = hitpoint - (armor * ran);
    
    return damage;
}
