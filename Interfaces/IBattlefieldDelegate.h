#pragma once

#include "../Structs/GridBox.h"

namespace AutoBattle
{
    namespace Interface
    {
        class IBattlefieldDelegate
        {
        public:
            virtual void UpdateGridBox(int index, GridBox gridBox) = 0;
            virtual void UpdateGridBoxXY(int x, int y, GridBox gridBox) = 0;
            virtual void DrawBattlefield() = 0;
            virtual bool IndexExists(int index) = 0;
        };
    }
}
