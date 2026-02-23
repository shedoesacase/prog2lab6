#include "AbstractMusic.hpp"

int AbstractMusic::GetDuration() const{
	return Duration;
	}

std::string AbstractMusic::GetTitle() const{
	return Title;
	}

std::string AbstractMusic::GetArtist() const{
	return Artist;
	}