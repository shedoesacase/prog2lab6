#include "TrackFactory.hpp"

AbstractMusic* TrackFactory::CreateTrack(const std::string& title, int duration, const std::string& format, int bitrate, const std::string& artist) {
        return new Track(title, duration, format, bitrate, artist);
    }