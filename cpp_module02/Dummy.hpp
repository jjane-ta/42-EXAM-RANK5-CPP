#pragma once

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
    public:
        Dummy(void);
        virtual ~Dummy(void);
        virtual Dummy * clone(void) const;




    protected:


    private:

        static std::string baseType;

        Dummy(Dummy const & other);
        Dummy & operator = (Dummy const & other);
};
