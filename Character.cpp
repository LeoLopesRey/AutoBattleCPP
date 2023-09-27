#include "Character.h"

AutoBattle::Enum::CharacterTeam AutoBattle::Character::GetTeam() const
{
    return CharacterTeam;
}

bool AutoBattle::Character::IsDead() const
{
    return bIsDead;
}
