#include <gtest/gtest.h>
#include "../TrackRepository.hpp"
#include "../Track.hpp"

TEST(RepositoryTest, CheckTotalDuration) {
    TrackRepository repo;
    repo.Add(new Track("Test", 200, "mp3", 320, "Artist")); 
    
    EXPECT_EQ(repo.GetTotalDuration(), 200); 
}

TEST(RepositoryTest, CheckDeletion) {
    TrackRepository repo;
    repo.Add(new Track("Test", 200, "mp3", 320, "Artist"));
    repo.DeleteTrackFromDisk(0);
    
    EXPECT_EQ(repo.GetDiskSize(), 0);
}