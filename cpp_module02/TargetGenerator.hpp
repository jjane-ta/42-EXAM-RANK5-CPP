#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    public:
        TargetGenerator(void);

        virtual ~TargetGenerator(void);
        
        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &type);


    protected:


    private:
        std::map<std::string,ATarget *> store;

        TargetGenerator(TargetGenerator const & other);
        TargetGenerator & operator = (TargetGenerator const & other);

};
