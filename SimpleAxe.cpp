//
//  SimpleAxe.cpp
//  
//
//  Created by Alex Coalla on 10/10/17.
//

#include "SimpleAxe.h"

double SimepleAxe::hit(double armor){
    double damage = hitPoints - (armor * 0.8);
    
    if( armor > 0 && armor < 20)
        double damage = hitpoint - (armor * 0);
    
    return damge;
    
}
