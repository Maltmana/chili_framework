#include "Board.h"

Board::Board(int _x, int _y, int _boardWidth, int _boardHeight, int _nBoardRow, int _nBoardColumn, int _tileWidth, int _tileHeight,  Graphics& _gfx, int _r, int _g, int _b, int _checkerContrast)
	:
	gfx(_gfx)
{
	x = _x;
	y = _y;
	boardWidth = _boardWidth;
	boardHeight = _boardHeight;
	nBoardRow = _nBoardRow;
	nBoardColumn = _nBoardColumn;
	nTiles = _nBoardRow * _nBoardColumn;
	tileWidth = _tileWidth;
	tileHeight = _tileHeight;
	r = _r;
	g = _g;
	b = _b;
	checkerContrast = _checkerContrast;
}

void Board::Update()
{
	int offsetX = 0;
	int offsetY = 0;
	int row = 0;
	int checkerColor = 0;

	gfx.DrawRect(x, y, boardWidth, boardHeight, r, g, b);

	for (int t = 0; t < nTiles; t++)
	{
		gfx.DrawRect(x + (offsetX * tileWidth), y +(offsetY * tileHeight), tileWidth, tileHeight, r + checkerColor, g + checkerColor, b + checkerColor);
		offsetX++;
		if (offsetX == nBoardColumn)
		{
			offsetX = 0;
			offsetY++;
		}

		if (t%2 == 0)
		{
			checkerColor = checkerContrast;
		}
		else
		{
			checkerColor = 0;
		}
	}

	assert(offsetY <= nBoardRow);
	assert(offsetX <= nBoardColumn);

}
