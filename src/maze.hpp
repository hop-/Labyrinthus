#ifndef _MAZE_HPP_
#define _MAZE_HPP_

#include "mazeCreator.hpp"

class Player
{
	Pointer m_position;
	BaseMaze* m_maze;
public:
	Player(BaseMaze& maze, Pointer startPos);
	~Player();
	bool move(Direction d);
	Pointer getPos();
}

class Maze
{
	BaseMaze* m_maze;
	Player m_player
public:
	Maze(BaseMaze* m);
	~Maze();
	bool move(Direction d);
	bool** getWorld();
	Pointer getPlayer();
	bool win();
private:
};

#endif
