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
    }
    key = IniParser->ReadInt(std::to_string(7).c_str(), "bind");
    
    std::cout << key << std::endl;
    return 0;
}
