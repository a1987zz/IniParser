#include <iostream>
#include "Common.h"
#include "IniParser.h"

int main()
{
    int key;
    CIniParser* IniParser = new CIniParser();
    IniParser->szFile = ExePath() + "\\Config.ini";

    if (!FileExists(IniParser->szFile))
    {
        IniParser->WriteInt(std::to_string(7).c_str(), "bind", 32);
           IniParser->Write(std::to_string(7).c_str(), "login", "123abc");
        IniParser->Write(std::to_string(7).c_str(), "password", "123abc");
    }
    key = IniParser->ReadInt(std::to_string(7).c_str(), "bind");
    char* keyss = _strdup(IniParser->ReadString(std::to_string(7).c_str(), "login").c_str());
    char* keye = _strdup(IniParser->ReadString(std::to_string(7).c_str(), "password").c_str());
    
    std::cout << key << std::endl;
    std::cout << keyss << std::endl;
    std::cout << keye << std::endl;
    return 0;
}
