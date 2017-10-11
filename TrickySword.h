//
//  TrickySword.h
//  
//
//  Created by Alex Coalla on 10/10/17.
//

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef TrickySword_h
#define TrickySword_h

class TrickySword : public Weapon{
    
public:
    
    TrickySword : Weapon("Trick Sword", 55.0) {}
    
    virtual ~TrickSword(){};
    virtual double hit(double armor);
    
};

#endif /* TrickySword_h */
