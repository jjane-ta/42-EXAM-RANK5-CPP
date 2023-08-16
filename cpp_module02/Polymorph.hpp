#pragma once

#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
    public:
        Polymorph(void);

        virtual ~Polymorph(void);
        virtual Polymorph * clone(void) const;




    protected:


    private:
        static std::string baseName;
        static std::string baseEffects;


        Polymorph(Polymorph const & other);
        Polymorph & operator = (Polymorph const & other);
};
