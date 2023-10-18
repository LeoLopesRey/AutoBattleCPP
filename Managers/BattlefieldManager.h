#pragma once

#include <optional>
#include "../Grid.h"
#include "../Structs/GridBox.h"
#include "../Interfaces/IBattlefieldDataSource.h"
#include "../Interfaces/IBattlefieldDelegate.h"

//using namespace AutoBattle;

namespace AutoBattle
{
	namespace Manager
	{
		class BattlefieldManager : public Interface::IBattlefieldDataSource, public Interface::IBattlefieldDelegate
		{
			int XSize;
			int YSize;
			Grid Gridd;

        public:

			BattlefieldManager() : XSize(5), YSize(5), Gridd(XSize, YSize) {}
			
            // Initializes the grid
            BattlefieldManager(const int SizeX, const int SizeY) : XSize(SizeX), YSize(SizeY), Gridd(SizeX, SizeY) {}

            // Retrieves a random position of th grid
            virtual GridBox GetRandomPosition() override;

            // Retrieves the X size
            virtual int GetXSize() override;

            // Retrieves the Y size
            virtual int GetYSize() override;

			// Retrieves a random alive target from the opposite character team
			virtual Character* GetRandomAliveTargetFromOppositeTeam(Enum::CharacterTeam characterTeam) override;
			
			// Retrieves a GridBox? by using an x and y coordinate.
			// Returns null if the coordinate does not exist in the grid
			virtual std::optional<GridBox> GetElementXY(int x, int y) override;
			
			// Retrieves a GridBox by using an index
			virtual GridBox GetElementAt(int index) override;


			// Update a gridBox by using it's index
			virtual void UpdateGridBox(int index, GridBox gridBox) override;

			// Update a gridBox by using x and y coordinates
			virtual void UpdateGridBoxXY(int x, int y, GridBox gridBox) override;
			
            // Calls the grid to draw the battle field
			virtual void DrawBattlefield() override;

            // Checks if a given index exists on the grid
            virtual bool IndexExists(int index);

            
			

		};
	}
}
