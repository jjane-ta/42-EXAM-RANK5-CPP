#include "Fwoosh.hpp"

std::string Fwoosh::baseName = "Fwoosh";
std::string Fwoosh::baseEffects = "fwooshed";

Fwoosh::Fwoosh(void ): ASpell( Fwoosh::baseName,Fwoosh::baseEffects) {}
Fwoosh::~Fwoosh(void){}
Fwoosh* Fwoosh::clone(void) const {return new Fwoosh();}
