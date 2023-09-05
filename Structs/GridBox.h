#pragma once

#include "../Character.h"

namespace AutoBattle
{
    struct GridBox
    {
        int IndexX;
        int IndexY;

        bool Occupied;
        Character Characterr;
        int Index;

        GridBox(): IndexX(0), IndexY(0), Occupied(false), Index(0) {}

        GridBox(int indexX, int indexY, bool occupied, Character character, int index) :
        IndexX(indexX), IndexY(indexY), Occupied(occupied), Characterr(character), Index(index) {}
    
    };
    
}
