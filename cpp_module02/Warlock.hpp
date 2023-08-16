
#pragma once
#include <map>
#include <iostream>
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        SpellBook store;
        

        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &title);

        void introduce() const;



        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spell);
        void launchSpell(std::string spell, ATarget const & target);
};