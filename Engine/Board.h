#pragma once
#include "Graphics.h"
#include "Graphics.h"
#include <random>

class Board
{
public:
	Board(int _x, int _y, int _boardWidth, int _boardHeight, int _nTiles, int _tileHeight, int _tileWidth, Graphics& _gfx, int _r, int _g, int _b);
	void Update();


private:
	int x = 0; 
	int y = 0; //replace with self made vector when you figure it out
	int boardHeight = 0;
	int boardWidth = 0;
	int nTiles = 0;
	int tileHeight = 0;
	int tileWidth = 0;
	Graphics& gfx;
	int r = 0;
	int g = 0;
	int b = 0;
};

