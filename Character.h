#pragma once
#include "Enums/CharacterTeam.h"

namespace AutoBattle
{
    class Character
    {
        Enum::CharacterTeam CharacterTeam;
        bool bIsDead = false;
        
    public:
        Enum::CharacterTeam GetTeam() const;

        bool IsDead() const;
    };
}
