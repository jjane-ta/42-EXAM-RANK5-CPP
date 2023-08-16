#include "Polymorph.hpp"

std::string Polymorph::baseName = "Polymorph";
std::string Polymorph::baseEffects = "turned into a critter";

Polymorph::Polymorph(void ): ASpell( Polymorph::baseName,Polymorph::baseEffects) {}
Polymorph::~Polymorph(void){}
Polymorph* Polymorph::clone(void) const {return new Polymorph();}
