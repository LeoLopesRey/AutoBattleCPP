#include "BattlefieldManager.h"

#include "../Utils/RandomUtils.h"

using namespace AutoBattle;
using namespace Utils;
using namespace Manager;

GridBox BattlefieldManager::GetRandomPosition()
{
    const int Random = RandomUtils::GetRandomInt(0, XSize * YSize);
    return Gridd.GetElementAt(Random);
}

int BattlefieldManager::GetXSize()
{
    return XSize;
}

int BattlefieldManager::GetYSize()
{
    return YSize;
}

void BattlefieldManager::UpdateGridBox(int index, GridBox gridBox)
{
    Gridd.UpdateElementAt(index, gridBox);
}

Character* BattlefieldManager::GetRandomAliveTargetFromOppositeTeam(Enum::CharacterTeam characterTeam)
{
    return Gridd.FindDifferentTeamAliveCharacter(characterTeam).Characterr;
}

GridBox BattlefieldManager::GetElementAt(int index)
{
    return Gridd.GetElementAt(index);
}

std::optional<GridBox> BattlefieldManager::GetElementXY(int x, int y)
{
    // return Gridd[x][y]; // original C#

    const int index = Gridd.GetIndex(YSize, x, y);
    
    if (index > Gridd.VectorSize())
    {
        return std::nullopt;
    }
    else
    {
        return Gridd.GetElementAt(index);
    }
}

