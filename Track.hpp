#pragma once
#include "AudioFile.hpp"

class Track : public AudioFile{
    private:
        int Bitrate;
    public:
        Track(const std::string& title, int duration, const std::string fileFormat, int bitrate, std::string artist) : AudioFile(title, duration, artist, fileFormat), Bitrate(bitrate) {}
        void ShowInfo() const override {
            std::cout << "Artist: " << Artist << ", Title: " << Title << ", Duration: " << Duration << ", FileFormat: " << Format << ", Bitrate: " << Bitrate << std::endl; 
        }
        int GetBitrate();
};