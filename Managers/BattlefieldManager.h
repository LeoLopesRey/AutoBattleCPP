#pragma once

#include "../Grid.h"
#include "../Structs/GridBox.h"

//using namespace AutoBattle;

namespace AutoBattle
{
	namespace Manager
	{
		class BattlefieldManager
		{
			int XSize;
			int YSize;
			Grid Grid;

        public:

			BattlefieldManager() : XSize(5), YSize(5), Grid(XSize, YSize) {}
			
            // Initializes the grid
            BattlefieldManager(const int SizeX, const int SizeY) : XSize(SizeX), YSize(SizeY), Grid(SizeX, SizeY) {}

            // Retrieves a random position of th grid
            GridBox GetRandomPosition() const;

            //// Retrieves the X size
            int GetXSize() const;

            //// Retrieves the Y size
            int GetYSize() const;

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

            //// Retrieves a random alive target from the opposite character team
            //public Character GetRandomAliveTargetFromOppositeTeam(CharacterTeam characterTeam)
            //{
            //    return grid.FindDifferentTeamAliveCharacter(characterTeam).Character;
            //}

            //// Retrieves a GridBox by using an index
            //public GridBox GetElementAt(int index)
            //{
            //    return grid.GetElementAt(index);
            //}

            //// Retrieves a GridBox? by using an x and y coordinate.
            //// Returns null if the coordinate does not exist in the grid
            //public GridBox ? GetElementXY(int x, int y)
            //{
            //    return grid[x, y];
            //}


		};
	}
}
