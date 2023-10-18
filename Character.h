#pragma once
#include "Enums/CharacterTeam.h"

namespace AutoBattle
{
    class Character
    {
    private:
        Enum::CharacterTeam CharacterTeam;
        bool bIsDead = false;
        int characterIndex;
        
    public:
        Enum::CharacterTeam GetTeam() const;

        bool IsDead() const;
        int GetCharacterIndex() const;
    };
}
