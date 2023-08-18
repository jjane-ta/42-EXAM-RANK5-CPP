#include "SpellBook.hpp"

SpellBook::SpellBook(void){}

SpellBook::~SpellBook(void)
{
    while(this->store.begin() != this->store.end())
    {
        delete this->store.begin()->second;
        this->store.erase(store.begin());
    }
    this->store.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
    {
        this->forgetSpell(spell->getName());
        this->store[spell->getName()] = spell->clone();
    }
}
void SpellBook::forgetSpell(std::string const &spell)
{
    if (this->store[spell])
        delete this->store[spell];
    this->store.erase(spell);
    
}
ASpell* SpellBook::createSpell(std::string const &spell)
{
    if(this->store[spell])
        return this->store[spell]->clone();
    return NULL;
}