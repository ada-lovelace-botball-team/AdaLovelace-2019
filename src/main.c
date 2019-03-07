//This is the Ada Lovelace team's testing programs.

//Temporary Placement of defines
#define lift 0
#define claw 1
#define sweeper 3

#define lift_up 1065

#define claw_open 1442
#define claw_close 873

//Included Libraries:
#include <kipr/botball.h>
#include "create_library.h"
#include "variables.h"

//Functions
void grabbing_botguy();

int main()
{
    create_connect();
    printf ("blue\n");
    grabbing_botguy();
    /*enable_servo(1);
    printf ("blue\n");
    servo(1, claw_up);
    printf ("blue\n");
    disable_servo(1);*/
    create_stop();
    create_disconnect();
    return 0;
}

void grabbing_botguy() {
    enable_servo(claw);
    enable_servo(lift);
    servo(lift, lift_up);
    servo(claw, claw_open);
    create_drive_direct(70, 70);
    msleep(6500);
    create_stop();
    servo(claw, claw_close);
    create_drive_direct(-70, -70);
    msleep(3000);
    create_stop();
}
