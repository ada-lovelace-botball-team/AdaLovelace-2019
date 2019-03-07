//This is the Ada Lovelace team's testing programs.

//Included Libraries:
#include <kipr/botball.h>
#include "create_library.h"
#include "variables.h"

int main()
{
    create_connect();
    printf ("blue\n");
    enable_servo(1);
    printf ("blue\n");
    servo(1, claw_up);
    printf ("blue\n");
    disable_servo(1);
    create_stop();
    create_disconnect();
    return 0;
}
