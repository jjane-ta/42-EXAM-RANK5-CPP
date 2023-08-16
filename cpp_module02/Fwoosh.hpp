#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    public:
        Fwoosh(void);

        virtual ~Fwoosh(void);
        virtual Fwoosh * clone(void) const;




    protected:


    private:
        static std::string baseName;
        static std::string baseEffects;


        Fwoosh(Fwoosh const & other);
        Fwoosh & operator = (Fwoosh const & other);
};
