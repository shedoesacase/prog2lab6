#pragma once
#include "AbstractMusic.hpp"

class IMusicFactory
{
public:
    virtual ~IMusicFactory() = default;
    virtual AbstractMusic* CreateTrack(const std::string& title, int duration, const std::string& format, int bitrate, const std::string& artist) = 0;
};