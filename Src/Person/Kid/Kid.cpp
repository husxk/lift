#include "Kid.h"

Kid::Kid(uint32_t floors_number, uint32_t current_floor)
{
    specifier = kid;
    set_floor(floors_number, current_floor);
}

uint32_t Kid::event(uint32_t kid_number)
{
    if(get_person_random_event_chance())
    {
        if(kid_number > 1)
        {
            turn_off_random_event();
            return 1;
        }
        else return 0;
    }
    else return 0;
}