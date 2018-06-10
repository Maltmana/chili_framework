#include "Board.h"

Board::Board(int _x, int _y, int _boardWidth, int _boardHeight, int _nTiles, int _tileHeight, int _tileWidth, Graphics& _gfx, int _r, int _g, int _b)
	:
	gfx(_gfx)
{
	x = _x;
	y = _y;
	boardWidth = _boardWidth;
	boardHeight = _boardHeight;
	nTiles = _nTiles;
	tileWidth = _tileWidth;
	tileHeight = _tileHeight;
	r = _r;
	g = _g;
	b = _b;
}

void Board::Update()
{
	int offsetX = 0;
	int offsetY = 0;
	int row = 0;

	gfx.DrawRect(x, y, boardWidth, boardHeight, r, g, b);

	for (int t = 0; t < nTiles; t++)
	{
		for (int ix = x + offsetX; ix < tileWidth + x + offsetX; ix++)
		{
			for (int iy = y; iy < tileHeight + y; iy++)
			{
				gfx.PutPixel(ix, iy, r, g, b);
			}
			//offsetX = tileWidth*nTiles;
		}
	}


}
