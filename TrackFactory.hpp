#pragma once
#include "IMusicFactory.hpp"
#include "Track.hpp"

class TrackFactory : public IMusicFactory {
public:
    TrackFactory() = default;

    AbstractMusic* CreateTrack(const std::string& title, int duration, const std::string& format, int bitrate, const std::string& artist) override;
    
};