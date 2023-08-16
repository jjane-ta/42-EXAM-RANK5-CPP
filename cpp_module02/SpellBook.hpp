#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    public:
        SpellBook(void);

        virtual ~SpellBook(void);
        
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const &spell);
        ASpell* createSpell(std::string const &spell);


    protected:


    private:
        std::map<std::string,ASpell *> store;

        SpellBook(SpellBook const & other);
        SpellBook & operator = (SpellBook const & other);

};
