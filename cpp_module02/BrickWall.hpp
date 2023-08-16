#pragma once

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
    public:
        BrickWall(void);
        virtual ~BrickWall(void);
        virtual BrickWall * clone(void) const;




    protected:


    private:

        static std::string baseType;

        BrickWall(BrickWall const & other);
        BrickWall & operator = (BrickWall const & other);
};
