/*
 * TimeTableActivity.h
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad
 */

#ifndef TIMETABLEACTIVITY_H_
#define TIMETABLEACTIVITY_H_

#include "U8glib.h"
#include <Arduino.h>

class TimeTableActivity {
public:
	TimeTableActivity();
	virtual ~TimeTableActivity();
	void draw();

private:
	U8GLIB_SSD1306_128X64 *u8g;
	int input;
};

#endif /* TIMETABLEACTIVITY_H_ */
