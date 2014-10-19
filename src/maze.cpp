#include "maze.hpp"

Player::Player(Pointer startPos) :
		m_maze(maze),
		m_position(startPos)
{
}

bool Player::move(Direction d)
{
	Pointer p = m_position.getNextInDirection(d);
	if (!m_maze(p)) {
		m_position = p;
		return true;
	}
	return false;
}

Pointer Player::getPos()
{
	return m_position;
}

////////////////////////////////////////////////////////////////

Maze::Maze(BaseMaze* m) :
		m_maze(m),
		m_player(m_maze->getStart());
{
}

Maze::~Maze()
{}

bool Maze::move(Direction d)
{
	return m_player.move(d);
}

bool** getWorld()
{
	return m_maze->get()
}

Pointer getPlayer()
{
	return m_player.getPos();
}

bool win()
{
	return (m_maze->getEnd() == m_player.getPos())
}
