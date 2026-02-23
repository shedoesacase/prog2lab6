#pragma once
#include "AbstractMusic.hpp"
#include <vector>
#include <fstream>

class TrackRepository
{
private:
    std::vector<AbstractMusic*> disk;
public:
    void Add(AbstractMusic* track);

    int GetTotalDuration() const;

    void SaveToFile(const std::string& filename) const;

    std::vector<AbstractMusic*> GetDisk();

    int GetDiskSize();

    AbstractMusic* GetTrackFromDisk(int number);

    void DeleteTrackFromDisk(int index);

    ~TrackRepository();

    void InsertAt(int index, AbstractMusic* track);
    
};
