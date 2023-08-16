#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void){}

TargetGenerator::~TargetGenerator(void)
{

    while(this->store.begin() != this->store.end())
    {
        delete this->store.begin()->second;
        this->store.erase(store.begin());
    }
    this->store.clear();

}

void TargetGenerator::learnTargetType(ATarget * target)
{
    if (target)
        this->store[target->getType()] = target->clone();
}
void TargetGenerator::forgetTargetType(std::string const &type)
{
    if (this->store[type])
        delete this->store[type];
    this->store.erase(type);
    
}
ATarget* TargetGenerator::createTarget(std::string const &type)
{
    if(this->store[type])
        return this->store[type]->clone();
    return NULL;
}