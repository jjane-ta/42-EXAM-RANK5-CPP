#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{

    public:
        ASpell(std::string & name, std::string & effects);
        virtual ~ASpell(void);

        std::string const & getName(void) const ;
        std::string const & getEffects(void) const;
        virtual ASpell * clone(void) const = 0;
        void launch(ATarget const & var);

    protected:
        std::string name;
        std::string effects;

    private:

        ASpell(void);
        ASpell(ASpell const & other);
        ASpell & operator = (ASpell const & other);

    private:
};
