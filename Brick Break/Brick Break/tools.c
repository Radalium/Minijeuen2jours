#include "tools.h"
#include "time.h"
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
    if (sfTime_asSeconds(sftime) > 1.0f)
        return 1.0f;
    else
        return sfTime_asSeconds(sftime);
}

void restartClock()
{
    sftime = sfClock_restart(sfclock);
}
