#pragma once

void delkey() {
    HKEY hKey;
    LPCTSTR sk = TEXT("SOFTWARE\\Microsoft\\Windows");

    LONG openRes = RegOpenKeyExA(HKEY_LOCAL_MACHINE, sk, 0, KEY_ALL_ACCESS, &hKey);

    LPCTSTR name = TEXT("KEYNAMEHERE");
    LONG delRes = RegDeleteValueA(hKey, name); 

    LONG closeOut = RegCloseKey(hKey);
}

bool savekey(std::string key) {
    HKEY hKey;
    LPCTSTR sk = TEXT("SOFTWARE\\Microsoft\\Windows");

    LONG openRes = RegOpenKeyExA(HKEY_LOCAL_MACHINE, sk, 0, KEY_ALL_ACCESS, &hKey);
    if (!openRes == ERROR_SUCCESS) {
        return false;
    }

    LPCTSTR name = TEXT("SAMEKEYNAMEHERE");
    LPCTSTR value = TEXT(key.c_str());
    LONG setRes = RegSetValueExA(hKey, name, 0, REG_SZ, (LPBYTE)value, 32);
    if (!setRes == ERROR_SUCCESS) {
        return false;
    }

    LONG closeOut = RegCloseKey(hKey);
    if (!closeOut == ERROR_SUCCESS) {
        return false;
    }

    return true;
}

std::string checkkey() {
    HKEY hKey;
    LPCTSTR sk = TEXT("SOFTWARE\\Microsoft\\Windows");

    LONG openRes = RegOpenKeyExA(HKEY_LOCAL_MACHINE, sk, 0, KEY_ALL_ACCESS, &hKey);
    if (!openRes == ERROR_SUCCESS) {
        return "unresolved";
    }
    
    LPCTSTR name = TEXT("KEYNAMEHERE");
    const DWORD SIZE = 1024;
    TCHAR szValue[SIZE] = _T("");
    DWORD dwValue = SIZE;
    DWORD dwType = 0;
    LONG getRes = RegQueryValueExA(hKey, name, NULL, &dwType, (LPBYTE)&szValue, &dwValue);
    if (!getRes == ERROR_SUCCESS) {
        return "unresolved";
    }

    LONG closeOut = RegCloseKey(hKey);
    if (!closeOut == ERROR_SUCCESS) {
        return "unresolved";
    }

    return szValue;
}
