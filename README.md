# My Collection of Garbage
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT) [![star this repo](https://githubbadges.com/star.svg?user=ethanxo&repo=the-great-pacific-garbage-patch&style=flat)](https://github.com/ethanxo/the-great-pacific-garbage-patch) [![fork this repo](https://githubbadges.com/fork.svg?user=ethanxo&repo=the-great-pacific-garbage-patch&style=flat)](https://github.com/ethanxo/the-great-pacific-garbage-patch/fork)

All of these are single-header utilities, simply include the desired header using **#include "NAME.h"** (use the proper relative filepath to the header if it isn't in the same directory as the file referring to it). Hopefully all of this works, if it doesn't, it means I didn't test it and it's probably an easy fix. Also, these are all likely horribly ineffecient if at all useful :), just sharing in case someone out there needs a solution to the same problem I couldn't find one for.
## [keycode2str.h](https://github.com/ethanxo/the-great-pacific-garbage-patch/blob/master/keycode2str.h)
- long ass switch case statement that returns a string name/descriptor for the hexadecimal value of abritrarily important (common) VK codes
- useful for converting 0x2D to "Insert" for example
- made this because I couldn't find a native function that returned the name/discriptor of the VK code (even if passing in the hex of backspace, for example, would return VK_BACKSPACE)
- an array with all keycode names/descriptors would suffice but I made this, idk why
## [registry.h](https://github.com/ethanxo/the-great-pacific-garbage-patch/blob/master/registry.h)
- 3 functions to save a registry key, read a registry key, and delete a registry key
- the read function returns "unresolved" if it fails but you can change the return
- creates the key in "Computer\HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows" by default (not its own folder, just a key in the windows folder in regedit)
- path is customizable, you should know how to change it by looking at the code
- common information but I feel like uploading more useful shit here :smile:
