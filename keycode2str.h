#pragma once

#include <string>

std::string keycode2str(int keycode) {
	switch (keycode) {
	case 0x04:
		return "Mouse 3";
		break;
	case 0x05:
		return "Mouse 4";
		break;
	case 0x06:
		return "Mouse 5";
		break;
	case 0x08:
		return "Backspace";
		break;
	case 0x09:
		return "Tab";
		break;
	case 0x0D:
		return "Enter";
		break;
	case 0x10:
		return "Shift";
		break;
	case 0x11:
		return "Control";
		break;
	case 0x12:
		return "Alt";
		break;
	case 0x13:
		return "Pause";
		break;
	case 0x14:
		return "Caps Lock";
		break;
	case 0x1B:
		return "Escape";
		break;
	case 0x20:
		return "Space";
		break;
	case 0x21:
		return "Page Up";
		break;
	case 0x22:
		return "Page Down";
		break;
	case 0x23:
		return "End";
		break;
	case 0x24:
		return "Home";
		break;
	case 0x25:
		return "Left Arrow";
		break;
	case 0x26:
		return "Up Arrow";
		break;
	case 0x27:
		return "Right Arrow";
		break;
	case 0x28:
		return "Down Arrow";
		break;
	case 0x2C:
		return "Print Screen";
		break;
	case 0x2D:
		return "Insert";
		break;
	case 0x2E:
		return "Delete";
		break;
	case 0x30:
		return "0";
		break;
	case 0x31:
		return "1";
		break;
	case 0x32:
		return "2";
		break;
	case 0x33:
		return "3";
		break;
	case 0x34:
		return "4";
		break;
	case 0x35:
		return "5";
		break;
	case 0x36:
		return "6";
		break;
	case 0x37:
		return "7";
		break;
	case 0x38:
		return "8";
		break;
	case 0x39:
		return "9";
		break;
	case 0x41:
		return "A";
		break;
	case 0x42:
		return "B";
		break;
	case 0x43:
		return "C";
		break;
	case 0x44:
		return "D";
		break;
	case 0x45:
		return "E";
		break;
	case 0x46:
		return "F";
		break;
	case 0x47:
		return "G";
		break;
	case 0x48:
		return "H";
		break;
	case 0x49:
		return "I";
		break;
	case 0x4A:
		return "J";
		break;
	case 0x4B:
		return "K";
		break;
	case 0x4C:
		return "L";
		break;
	case 0x4D:
		return "M";
		break;
	case 0x4E:
		return "N";
		break;
	case 0x4F:
		return "O";
		break;
	case 0x50:
		return "P";
		break;
	case 0x51:
		return "Q";
		break;
	case 0x52:
		return "R";
		break;
	case 0x53:
		return "S";
		break;
	case 0x54:
		return "T";
		break;
	case 0x55:
		return "U";
		break;
	case 0x56:
		return "V";
		break;
	case 0x57:
		return "W";
		break;
	case 0x58:
		return "X";
		break;
	case 0x59:
		return "Y";
		break;
	case 0x5A:
		return "Z";
		break;
	case 0x5B:
		return "L. Windows";
		break;
	case 0x5C:
		return "R. Windows";
		break;
	case 0x60:
		return "Numpad 0";
		break;
	case 0x61:
		return "Numpad 1";
		break;
	case 0x62:
		return "Numpad 2";
		break;
	case 0x63:
		return "Numpad 3";
		break;
	case 0x64:
		return "Numpad 4";
		break;
	case 0x65:
		return "Numpad 5";
		break;
	case 0x66:
		return "Numpad 6";
		break;
	case 0x67:
		return "Numpad 7";
		break;
	case 0x68:
		return "Numpad 8";
		break;
	case 0x69:
		return "Numpad 9";
		break;
	case 0x6A:
		return "Numpad Mult.";
		break;
	case 0x6B:
		return "Numpad Add";
		break;
	case 0x6C:
		return "Numpad Min.";
		break;
	case 0x6D:
		return "Numpad Sub.";
		break;
	case 0x6E:
		return "Numpad Dec.";
		break;
	case 0x6F:
		return "Numpad Div.";
		break;
	case 0x70:
		return "F1";
		break;
	case 0x71:
		return "F2";
		break;
	case 0x72:
		return "F3";
		break;
	case 0x73:
		return "F4";
		break;
	case 0x74:
		return "F5";
		break;
	case 0x75:
		return "F6";
		break;
	case 0x76:
		return "F7";
		break;
	case 0x77:
		return "F8";
		break;
	case 0x78:
		return "F9";
		break;
	case 0x79:
		return "F10";
		break;
	case 0x7A:
		return "F11";
		break;
	case 0x7B:
		return "F12";
		break;
	case 0x7C:
		return "F13";
		break;
	case 0x7D:
		return "F14";
		break;
	case 0x7E:
		return "F15";
		break;
	case 0x7F:
		return "F16";
		break;
	case 0x80:
		return "F17";
		break;
	case 0x81:
		return "F18";
		break;
	case 0x82:
		return "F19";
		break;
	case 0x83:
		return "F20";
		break;
	case 0x84:
		return "F21";
		break;
	case 0x85:
		return "F22";
		break;
	case 0x86:
		return "F23";
		break;
	case 0x87:
		return "F24";
		break;
	case 0xA0:
		return "L. Shift";
		break;
	case 0xA1:
		return "R. Shift";
		break;
	case 0xA2:
		return "L. Control";
		break;
	case 0xA3:
		return "R. Control";
		break;
	default:
		return "UNKNOWN";
		break;
	}
}
