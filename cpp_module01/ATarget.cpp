#include "ATarget.hpp" 

ATarget::ATarget(std::string & type): type(type){}
ATarget::~ATarget(void){}
std::string const & ATarget::getType(void) const {return this->type;}

void ATarget::getHitBySpell(ASpell const &var) const
{
    std::cout << this->getType() << " has been " << var.getEffects() << "!\n";
}

