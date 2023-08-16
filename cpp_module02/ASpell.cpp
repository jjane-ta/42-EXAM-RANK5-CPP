#include "ASpell.hpp" 

ASpell::ASpell(std::string & name, std::string & effects): name(name), effects(effects){}
ASpell::~ASpell(void){}

std::string const & ASpell::getName(void) const {return this->name;}
std::string const & ASpell::getEffects(void) const {return this->effects;}

void ASpell::launch(ATarget const & var){var.getHitBySpell(*this);}
