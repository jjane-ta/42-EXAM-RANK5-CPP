#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;
class ATarget
{
    public:
        ATarget(std::string & type);
        virtual ~ATarget(void);

        std::string const & getType(void) const;
        virtual ATarget * clone(void) const = 0;
        void getHitBySpell(ASpell const & var) const;



    protected:
        std::string type;


    private:

        ATarget(void);
        ATarget(ATarget const & other);
        ATarget & operator=(ATarget const & other);
};
