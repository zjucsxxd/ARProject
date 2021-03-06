#include "turret.h"

Turret::Turret()
{
}

bool Turret::inRange(glm::vec3 pos_turret, glm::vec3 pos_objective)
{
    glm::vec3 aux = pos_turret - pos_objective;
    return aux.length() <= TURRET_RANGE;
}
