#ifndef __TKEYPAD_H__
#define __TKEYPAD_H__
#include <Arduino.h>

#pragma GCC diagnostic ignored "-Wwrite-strings"

	class KeyPad {
		public:
			#define PIN_READ_LCD	A0
			#define KEY_UP			1
			#define KEY_DOWN		2
			#define KEY_LEFT		3
			#define KEY_RIGHT		4
			#define KEY_SELECT		5
			#define KEY_NONE		6			
			
			#define NLUZLCD 		10

			 KeyPad(): _nDelay(200) {}
			 KeyPad(int nDelay): _nDelay(nDelay) {}

			int key();
			int getnLastKey();

			void setnDelay(int nDelay);
			void setnLastKey(int nLastKey);

		private:
			int _nDelay;
			int _nLastKey = KEY_NONE;

			int getnDelay();

	};

#endif



