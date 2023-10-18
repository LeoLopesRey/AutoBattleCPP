#pragma once
#include <unordered_map>
#include <vector>

#include "Enums/CharacterTeam.h"
#include "Structs/GridBox.h"
#include "Structs/GridCoordinate.h"

namespace AutoBattle
{
	class Grid
	{
		int XSize = 0;
		int YSize = 0;
		
		std::unordered_map<int, GridCoordinate> GridCoordinateDict;
		std::vector<GridBox> Grids;
		// GridBox GridsArr [,];
		std::vector<std::vector<GridBox>> GridsArr; //(rows, std::vector<GridBox>(columns)); // initializing at the declaration


	public:
		// Grid(int Lines, int Columns) : XSize(Lines), YSize(Columns) {}
		Grid(int Rows, int Columns);
		
		GridBox GetElementAt(int Index) const;

		// Updates the GridBox variables corresponding to the given index
		void UpdateElementAt(int Index, GridBox GridBox);
		
		// Retrieves the index by using x, y and current column
		int GetIndex(int Columns, int X, int Y);

		// Returns the first available GridBox that has a character from the opposing team that is alive
		GridBox FindDifferentTeamAliveCharacter(Enum::CharacterTeam characterTeam) const;

		int VectorSize();

		void PrintTile(std::string message);
		
		void DrawBattlefield();
	};
}

