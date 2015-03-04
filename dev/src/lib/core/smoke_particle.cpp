#include <iostream>
#include "core/smoke_particle.hpp"

xsmoke::SmokeParticle::SmokeParticle() : xevo::PonctualIndividual() {
    std::cout << " xsmoke position = " << this->getPosition().x << std::endl;
}

