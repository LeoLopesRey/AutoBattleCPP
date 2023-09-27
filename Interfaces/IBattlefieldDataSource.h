#pragma once

#include <optional>
#include "../Structs/GridBox.h"
#include "../Enums/CharacterTeam.h"

namespace AutoBattle
{
    namespace Interface
    {
        class IBattlefieldDataSource
        {
        public:
            // The = 0 at the end of each virtual function declaration indicates that these functions have no implementation
            // in the interface and must be implemented by any class that derives from it.
            virtual GridBox GetRandomPosition() = 0;
            virtual int GetXSize() = 0;
            virtual int GetYSize() = 0;
            virtual Character* GetRandomAliveTargetFromOppositeTeam(Enum::CharacterTeam CharacterTeamEnum) = 0;
            virtual std::optional<GridBox> GetElementXY(int x, int y) = 0; 
            virtual GridBox GetElementAt(int index) = 0;
        };
    }
}

// to enable optional (c++17). Right click the project, properties, C++ Standard Language - THIS ACTUALLY DIDN'T WORK
// I had to open the project in visual studio 2022 and do this https://developercommunity.visualstudio.com/t/c17-not-available-by-default/9696
//  project --->properties -->C/C++ --> Command Line --add /std:c++17