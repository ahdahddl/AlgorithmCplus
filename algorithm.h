//
// Created by mongmongi on 19. 1. 3.
//

#include <vector>
#include <string>
#include <iostream>

#ifndef ALGORITHMCPLUS_PICK_H
#define ALGORITHMCPLUS_PICK_H



namespace algotrithm{
    // 150p n개의 원소 중 m개를 고르는 모든 조합을 찾는 알고리즘
    void pick(int n, std::vector<int>& picked, int toPick);

    bool inRange(int x, int y);

    bool hasWord(char** board, int x, int y, const std::string& word);
}

#endif //ALGORITHMCPLUS_PICK_H