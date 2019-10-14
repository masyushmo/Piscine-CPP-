/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:36:57 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 08:37:55 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <csignal>
#include "../includes/Game.hpp"
#include "../includes/Player.hpp"
#include "../includes/AEnemys.hpp"
#include "../includes/AProjs.hpp"
#include "../includes/Game.hpp"
#include "../includes/AFly.hpp"

Game::Game(void) : _x(0), _y(0)
{
	initscr();
	cbreak();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	scrollok(stdscr, FALSE);
	getmaxyx(stdscr, this->_y, this->_x);
}

Game::Game(Game const &) {}

Game& Game::operator=(Game const &) { return *this; }


Game::~Game(void) { }

void Game::setWin(int y, int x)
{
	this->_y = y;
	this->_x = x;
}

Game* getGame(Game *g)
{
	static Game* game;

	if (g != NULL)
		game = g;
	return game;
}

int Game::getX(void) { return this->_x; } 

int Game::getY(void) { return this->_y; }

// void gameInit()
// {
// 	int n = 0;
// 	bool quit = false;
// 	bool lost = false;
// 	AFly entities;
// 	Player p;
// 	entities.add(&p);
// 	p.setPosition(LINES / 2, COLS / 2);
// 	assume_default_colors(COLOR_RED,COLOR_BLUE);
// 	WINDOW * win = newwin(3, 10, LINES / 2 - 2, COLS / 2 - 5);

// };