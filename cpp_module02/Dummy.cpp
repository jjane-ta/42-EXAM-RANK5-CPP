#include "Dummy.hpp"

std::string Dummy::baseType = "Target Practice Dummy";

Dummy::Dummy(void): ATarget(Dummy::baseType){}
Dummy::~Dummy(void){}
Dummy * Dummy::clone(void) const{return new Dummy;}