#pragma once
#include "AbstractMusic.hpp"
#include <vector>

class AudioFile : public AbstractMusic {
    protected:
        std::string Format;
    public:
        AudioFile(const std::string& title, int duration, std::string artist, std::string format): AbstractMusic(title, duration, artist), Format(format) {}
        std::string getFormat();
        int getBitrate();
};