# My Collection of Random (Probably Useless) Shit
All of these are single header utilities, simply include the desired header using **#include "NAME.h"** (use the proper relative filepath to the header if it isn't in the same directory as the file referring to it). Hopefully all of this works, if it doesn't, it means I didn't test it and it's probably an easy fix.
## keycode2str.h
- long ass switch case statement that returns a string name/descriptor for the hexadecimal value of abritrarily important (common) VK codes
- useful for converting 0x2D to "Insert" for example
- made this because I couldn't find a native function that returned the name/discriptor of the VK code (even if passing in the hex of backspace, for example, would return VK_BACKSPACE)
- an array with all keycode names/descriptors would suffice but I made this, idk why
