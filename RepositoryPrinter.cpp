#include "RepositoryPrinter.hpp"

void RepositoryPrinter::Print(const std::vector<AbstractMusic*>& disk){
        for(auto track : disk){
        std::cout << "Title: " << track->GetTitle() << " Duration: " << track->GetDuration() << std::endl;
        }
    }