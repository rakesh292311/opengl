#pragma once
#include <string>
#include <SDL2\SDL.h>

class Display
{
public:
	Display(int width, int height, const std::string& title);
	virtual ~Display();
	void Update();
	bool IsClosed();
private:
	Display(const Display & other) {}
	Display & operator=(const Display& other) {}

	SDL_Window *m_window;
	SDL_GLContext m_glcontext;
	bool m_isClosed;

};

