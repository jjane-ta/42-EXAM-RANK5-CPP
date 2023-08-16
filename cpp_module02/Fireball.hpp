#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
    public:
        Fireball(void);

        virtual ~Fireball(void);
        virtual Fireball * clone(void) const;




    protected:


    private:
        static std::string baseName;
        static std::string baseEffects;


        Fireball(Fireball const & other);
        Fireball & operator = (Fireball const & other);
};
