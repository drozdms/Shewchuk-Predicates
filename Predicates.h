//////////////////////////////////////////////////////////////////////
//	Predicates.h
//
//	Robust geometric predicates API
//
//	Jonathan Richard Shewchuk (http://www.cs.cmu.edu/~quake/robust.html)
//

#pragma once

#define REAL double

namespace exact
{
	enum position
	{
		on = 0,
		left = 1,
		right = -1,
		inside = 1,
		outside = -1
	};

	// Необходимо вызвать один раз перед первым вызовом функций orient2d() и incircle().
	void Init();
	
	// Возвращает ориентацию точки pc отностительно прямой, проходящей через pa и pb.
	// Точки заданы в виде массива размера [2] координат (x,y), оси направлены: x - влево, y - вверх.
	position orient2d(REAL* pa, REAL* pb, REAL* pc);
	
	// Возвращает ориентацию точки pd отностительно окружности, проходящей через pa, pb и  pc.
	// Точки заданы в виде массива размера [2] координат (x,y), оси направлены: x - влево, y - вверх.
	position incircle(REAL* pa, REAL* pb, REAL* pc, REAL* pd);
}

