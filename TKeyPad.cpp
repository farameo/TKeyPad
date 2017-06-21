#include <Arduino.h>
#include "TKeyPad.h"

//--------------------------------------------------

int KeyPad::key() {
		
	delay(_nDelay);

	int nMeasuredVoltage = analogRead(PIN_READ_LCD);
	
	if (nMeasuredVoltage < 60) {
		setnLastKey(KEY_RIGHT);
		return KEY_RIGHT;
	}
	
	if (nMeasuredVoltage < 200){
		setnLastKey(KEY_UP);
		return KEY_UP;
	} 
	
	if (nMeasuredVoltage < 400) {
		setnLastKey(KEY_DOWN);
		return KEY_DOWN;
	}

	if (nMeasuredVoltage < 600) {
		setnLastKey(KEY_LEFT);
		return KEY_LEFT;
	}

	if (nMeasuredVoltage < 800) {
		setnLastKey(KEY_SELECT);
		return KEY_SELECT;
	}

	setnLastKey(KEY_NONE);
	return KEY_NONE;
}

//--------------------------------------------------

void KeyPad::setnDelay(int nDelay) {_nDelay = nDelay; }

//--------------------------------------------------

int KeyPad::getnDelay() { return _nDelay; }

//--------------------------------------------------

void KeyPad::setnLastKey(int nLastKey) { _nLastKey = nLastKey; }

//--------------------------------------------------

int KeyPad::getnLastKey() { return _nLastKey; }

//--------------------------------------------------


//--------------------------------------------------

