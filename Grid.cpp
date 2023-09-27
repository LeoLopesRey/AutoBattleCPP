#include "Grid.h"

using namespace AutoBattle;

Grid::Grid(int Rows, int Columns) : XSize(Rows), YSize(Columns)
{
    // Initializing GridsArr after the declaration
    GridsArr.resize(XSize);
    for (size_t i = 0; i < static_cast<size_t>(XSize); ++i) {
        GridsArr[i].resize(YSize);
    }

    for (int i = 0; i < XSize; i++)
    {
        for (int j = 0; j < YSize; j++)
        {
            int index = GetIndex(YSize, i, j);
            Character* character = nullptr;
            GridBox newBox = GridBox(j, i, false, character, GetIndex(YSize, i, j));
            Grids.push_back(newBox); // grids.Add(newBox);
            GridsArr[j][i] = newBox;
            GridCoordinateDict[index] = GridCoordinate { j, i };
        }
    }
    // Console.WriteLine($"The battle field has been created ({xSize}x{ySize})\n");
    // Console.ReadKey();
}

GridBox Grid::GetElementAt(const int Index) const
{
    return Grids.at(Index);
}

void Grid::UpdateElementAt(int Index, GridBox GridBox)
{
    Grids[Index] = GridBox;
    
    // Retrieves the corresponding X and Y coordinates from the dictionary using the grid index given
    // and updates the gridsArray as well
    GridCoordinate Coord = GridCoordinateDict[Index];
    GridsArr[Coord.X][Coord.Y] = GridBox;
}

int Grid::GetIndex(const int Columns, const int X, const int Y)
{
    return (Columns * X + Y);
}

GridBox Grid::FindDifferentTeamAliveCharacter(Enum::CharacterTeam characterTeam) const
{
    for (const GridBox& grid : Grids) {
        if (grid.Characterr != nullptr &&
            grid.Characterr->GetTeam() != characterTeam &&
            !grid.Characterr->IsDead()) {
            return grid;
            }
    }

    // return Grids.Find(x => x.Character != null && 
    //                                 x.Character.GetTeam() != characterTeam && 
    //                                 !x.Character.IsDead() );
}

int Grid::VectorSize()
{
    return Grids.size();
}
