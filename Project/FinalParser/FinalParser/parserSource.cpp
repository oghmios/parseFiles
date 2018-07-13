#include "stdafx.h"



double * parserSource::calculateMousePosition() {

	POINT p;
	static double mousePosition[2];
	GetCursorPos(&p);
	mousePosition[0] = p.x;
	mousePosition[1] = p.y;

	return mousePosition;
}

