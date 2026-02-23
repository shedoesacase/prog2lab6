cmake_minimum_required(VERSION 3.10.0)
project(MusicProject VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(SRC
    AbstractMusic.cpp AbstractMusic.hpp
    RepositoryPrinter.cpp RepositoryPrinter.hpp
    TrackFactory.cpp TrackFactory.hpp
    TrackRepository.cpp TrackRepository.hpp
    AudioFile.cpp AudioFile.hpp
    Track.cpp Track.hpp
    IMusicFactory.hpp
)

add_library(MusicCD STATIC ${SRC})

target_include_directories(MusicCD PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

enable_testing()
add_subdirectory(tests)