#include "BrickWall.hpp"

std::string BrickWall::baseType = "Inconspicuous Red-brick Wall";

BrickWall::BrickWall(void): ATarget(BrickWall::baseType){}
BrickWall::~BrickWall(void){}
BrickWall * BrickWall::clone(void) const{return new BrickWall;}