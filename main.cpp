#include <iostream>
#include "TrackFactory.hpp"
#include "TrackRepository.hpp"
#include "RepositoryPrinter.hpp"

int main() {
    TrackRepository repo;
    TrackFactory factory;

    repo.Add(factory.CreateTrack("Pablo", 354, "flac", 1000, "Morgenshtern"));
    repo.Add(factory.CreateTrack("Ya_Russkiy", 482, "mp3", 320, "Shaman"));
    repo.Add(factory.CreateTrack("Skidka", 251, "mp3", 320, "Temniy_Princ"));
    repo.Add(factory.CreateTrack("Drama_Queen", 132, "wav", 10000, "GAVRILINA"));
    repo.Add(factory.CreateTrack("KAK_MOMMY", 482, "mp3", 320, "INSTASAMKA"));
    repo.Add(factory.CreateTrack("Rvanie_djinsi", 382, "mp3", 320, "Eljey"));


    RepositoryPrinter printer;
    printer.Print(repo.GetDisk());

    std::cout << "Total duration: " << repo.GetTotalDuration() << " seconds." << std::endl;

    repo.SaveToFile("playlist_info.txt");
    std::cout << "Duration saved to playlist_info.txt" << std::endl;

    return 0;
}