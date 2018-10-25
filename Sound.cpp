#include "Sound.h"

void playMusic() {
	PlaySound("background.wav", NULL, SND_SYNC | SND_ASYNC);
}