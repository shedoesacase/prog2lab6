#pragma once
#include "TrackRepository.hpp"
#include <iostream>

class RepositoryPrinter
{
public:
    void Print(const std::vector<AbstractMusic*>& disk);
};
