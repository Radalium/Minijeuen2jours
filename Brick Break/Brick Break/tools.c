#include "tools.h"
#include <time.h>
#include <math.h>
#include "SFML/Graphics.h"

sfTime sftime;
sfClock* sfclock;

void initTools()
{
	sfclock = sfClock_create();
	srand(time(NULL));
}

float getDeltaTime()
{
	return sfTime_asSeconds(sftime);
}

void restartClock()
{
	sftime = sfClock_restart(sfclock);
} 