/*
Copyright 2018 Massdrop Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ctrl.h"
#include "led_matrix.h"

//Teal <-> Salmon
led_setup_t leds_teal_salmon[] = {
    { .hs = 0,  .he = 33,  .rs = 24,  .re = 24,  .gs = 215, .ge = 215, .bs = 204, .be = 204, .ef = EF_NONE },
    { .hs = 33, .he = 66,  .rs = 24,  .re = 255, .gs = 215, .ge = 114, .bs = 204, .be = 118, .ef = EF_NONE },
    { .hs = 66, .he = 100, .rs = 255, .re = 255, .gs = 114, .ge = 114, .bs = 118, .be = 118, .ef = EF_NONE },
    { .end = 1 },
};

//Off
led_setup_t leds_off[] = {
    { .hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Add new LED animations here using one from above as example
//The last entry must be { .end = 1 }
//Add the new animation name to the list below following its format

void *led_setups[] = {
    leds_teal_salmon,
    leds_off
};

const uint8_t led_setups_count = sizeof(led_setups) / sizeof(led_setups[0]);
