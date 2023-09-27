#pragma once

#include <optional>
#include "../Grid.h"
#include "../Structs/GridBox.h"
#include "../Interfaces/IBattlefieldDataSource.h"

//using namespace AutoBattle;

namespace AutoBattle
{
	namespace Manager
	{
		class BattlefieldManager : public Interface::IBattlefieldDataSource
		{
			int XSize;
			int YSize;
			Grid Gridd;

        public:

			BattlefieldManager() : XSize(5), YSize(5), Gridd(XSize, YSize) {}
			
            // Initializes the grid
            BattlefieldManager(const int SizeX, const int SizeY) : XSize(SizeX), YSize(SizeY), Gridd(SizeX, SizeY) {}

            // Retrieves a random position of th grid
            GridBox GetRandomPosition() override;

            // Retrieves the X size
            int GetXSize() override;

            // Retrieves the Y size
            int GetYSize() override;

            //// Update a gridBox by using it's index
            void UpdateGridBox(int index, GridBox gridBox);
            //{
            //    grid.UpdateElementAt(index, gridBox);
            //}

            //// Update a gridBox by using x and y coordinates
            //public void UpdateGridBoxXY(int x, int y, GridBox gridBox)
            //{
            //    grid[y, x] = gridBox;
            //}

            //// Calls the grid to draw the battle field
            //public void DrawBattlefield()
            //{
            //    grid.DrawBattlefield();
            //}

            //// Checks if a given index exists on the grid
            //public bool IndexExists(int index)
            //{
            //    return grid.CheckIfIndexExists(index);
            //}

            // Retrieves a random alive target from the opposite character team
            Character* GetRandomAliveTargetFromOppositeTeam(Enum::CharacterTeam characterTeam) override;
            // {
            //     return grid.FindDifferentTeamAliveCharacter(characterTeam).Character;
            // }

            // Retrieves a GridBox by using an index
            GridBox GetElementAt(int index) override;

            // Retrieves a GridBox? by using an x and y coordinate.
            // Returns null if the coordinate does not exist in the grid
            std::optional<GridBox> GetElementXY(int x, int y) override;

		};
	}
}
