/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:36:51 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 14:41:29 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <iostream>

#include "../includes/Player.hpp"
#include "../includes/AEnemys.hpp"
#include "../includes/AProjs.hpp"
#include "../includes/Game.hpp"
#include "../includes/AFly.hpp"

int main(void)
{
	Game e;

	getGame(&e);
	int n = 0;
	int quit = 0;
	AFly objs;
	Player p;
	objs.add(&p);
	p.setPosition(LINES / 2, COLS / 2);
	WINDOW * win = newwin(200, 150, 0, 0);
	system("afplay ./music/sound.mp3&");
	start_color();
	has_colors();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_BLUE, COLOR_BLACK);
	init_pair(5, COLOR_BLACK, COLOR_RED);
	init_pair(6, COLOR_BLACK, COLOR_GREEN);
	init_pair(7, COLOR_BLACK, COLOR_YELLOW);
	init_pair(8, COLOR_BLACK, COLOR_BLUE);
	init_pair(9, COLOR_BLACK, COLOR_GREEN);
	init_pair(10, COLOR_BLUE, COLOR_YELLOW);
	init_pair(11, COLOR_WHITE, COLOR_BLACK);
	init_pair(12, COLOR_WHITE, COLOR_MAGENTA);
	init_pair(13, COLOR_BLACK, COLOR_CYAN);
	init_pair(14, COLOR_WHITE, COLOR_WHITE);
	assume_default_colors(COLOR_BLACK, COLOR_RED);

	while (!quit)
	{
		switch((getch()))
		{
			case 27:
			{
				system("killall afplay");
				exit(1);
				break;
			}
			case KEY_UP:
				p.setY(p.getY() - 3);
				break;
			case KEY_DOWN:
				p.setY(p.getY() + 3);
				break;
			case KEY_LEFT:
				p.setX(p.getX() - 3);
				break;
			case KEY_RIGHT:
				p.setX(p.getX() + 3);
				break;
			case ' ':
			{
				system("afplay ./music/laser.mp3&");
				objs.add(new AProj(p.getY() - 1, p.getX()));
				objs.add(new AProj(p.getY() - 1, p.getX() + 7));
				if (p.getScore() >= 55)
				{
					objs.add(new AProj(p.getY() - 3, p.getX() + 5));
					objs.add(new AProj(p.getY() - 3, p.getX() + 2));
				}
				else if (p.getScore() >= 30)
					objs.add(new AProj(p.getY() - 3, p.getX() + 3));
				
				break;
			}
			default:
				break;
		}
		n++;
		if (n >= 200)
		{
			objs.add(new AEnemy);
			n = 0;
		}
		clear();
		if (!quit)
		{
			Objects **raw = objs.getArray();
			for (int i = 0; i < objs.getLast(); i++)
			{
				Objects *ptr = raw[i];
				if (ptr == NULL)
					continue;
				ptr->update();
				for (int c = 0; c < objs.getLast(); c++)
				{
					Objects *cptr = raw[c];
					if (cptr == NULL || cptr == ptr)
						continue;
					if (ptr->getType() != "player" && cptr->getType() != "player")
					{
						if (abs(cptr->getX() - (ptr->getX() + cptr->getH())) < ptr->getW() & abs(cptr->getY() - ptr->getY()) < 2)
						{
							p.setScore(p.getScore() + 2);
							objs.remove(c);
							objs.remove(i);
							ptr = NULL;
							break;
						}
					}
					else if (abs(cptr->getX() - (ptr->getX() + 2)) < 2 & abs(cptr->getY() - ptr->getY()) < 2)
					{
						mvprintw(3, 3, "U LUSE");
						nodelay(stdscr, FALSE);
						refresh();
						char t = '\0';
						while (t != 27)
							t = getch();
						system("killall afplay");
						delwin(win);
						endwin();
						exit(1);
					}
						
				}
				if (ptr == NULL)
					continue;
				ptr->draw();
			}
		}
		box(win, 0, 0);
		wmove(win, 1, 1);
		refresh();
		napms(1);
	}

	return 0;
}
