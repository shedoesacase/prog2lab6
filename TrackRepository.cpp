#include "TrackRepository.hpp"

void TrackRepository::Add(AbstractMusic* track){
        disk.push_back(track);
    }

int TrackRepository::GetTotalDuration() const {
    int totalDuration = 0;
    for(auto a : disk){
        totalDuration += a->GetDuration();
    }
    return totalDuration;
}

void TrackRepository::SaveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if(file.is_open()){
        file << "Total duration: " << GetTotalDuration();
    }
}

std::vector<AbstractMusic*> TrackRepository::GetDisk(){
    return disk;
}

TrackRepository::~TrackRepository() {
    for(auto track : disk){
        delete track;
    }
}

int TrackRepository::GetDiskSize(){
    return disk.size();
}

AbstractMusic* TrackRepository::GetTrackFromDisk(int index){
    return disk.at(index);
}

void TrackRepository::DeleteTrackFromDisk(int index){
    delete disk.at(index);
    disk.erase(disk.begin() + index);
}

void TrackRepository::InsertAt(int index, AbstractMusic* track) {
    disk.insert(disk.begin() + index, track);
}