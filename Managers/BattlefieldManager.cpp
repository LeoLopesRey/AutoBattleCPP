#include "BattlefieldManager.h"

#include "../Utils/RandomUtils.h"

using namespace AutoBattle;
using namespace Utils;
using namespace Manager;

GridBox BattlefieldManager::GetRandomPosition() const
{
    const int Random = RandomUtils::GetRandomInt(0, XSize * YSize);
    return Grid.GetElementAt(Random);
}

int BattlefieldManager::GetXSize() const
{
    return XSize;
}

int BattlefieldManager::GetYSize() const
{
    return XSize;
}

void BattlefieldManager::UpdateGridBox(int index, GridBox gridBox)
{
    Grid.UpdateElementAt(index, gridBox);
}
