#pragma once
#include <iostream>
#include <string>

class AbstractMusic{
    protected:
        std::string Title;
        int Duration;
        std::string Artist;
    public:
        AbstractMusic(const std::string& title, int duration, const std::string artist) : Title(title), Duration(duration), Artist(artist) {}
        virtual void ShowInfo() const = 0;
        virtual ~AbstractMusic() = default;
	    int GetDuration() const;
	    std::string GetTitle() const;
        std::string GetArtist() const;
};