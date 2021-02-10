#include <iostream>
#include "Common.h"
#include "IniParser.h"


int main()
{
    CIniParser* IniParser = new CIniParser();
    IniParser->szFile = ExePath() + "\\Config.ini";

    if (!FileExists(IniParser->szFile))
    {
        IniParser->WriteInt(std::to_string(7).c_str(), "bind", 32);
    }


    int key = IniParser->ReadInt(std::to_string(7).c_str(), "bind");
    return 0;
}