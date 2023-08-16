#include "Fireball.hpp"

std::string Fireball::baseName = "Fireball";
std::string Fireball::baseEffects = "burnt to a crisp";

Fireball::Fireball(void ): ASpell( Fireball::baseName,Fireball::baseEffects) {}
Fireball::~Fireball(void){}
Fireball* Fireball::clone(void) const {return new Fireball();}
