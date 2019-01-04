//
// Created by mongmongi on 19. 1. 4.
//


#include "algorithm.h"

using namespace std;


const int dx[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
const int dy[8] = {-1, 0, 1, -1, 0, 1, -1, 1};

bool algotrithm::inRange(int x, int y){
    return !(x < 0 || y < 0 || x >= 5 || y >= 5);
}

bool algotrithm::hasWord(char** board, int x, int y, const string& word){
    // 기저사례 1 : 시작 위치가 범위 밖이면 무조건 실패
    if(!inRange(x, y)) return false;
    // 기저사례 2 : 첫 글자가 일치하지 않으면 실패
    if(board[x][y] != word[0]) return false;
    // 기저사례 3 : 단어 길이가 1이면 성공
    if(word.size() == 1) return true;

    // 인접한 여덟칸을 검사한다.
    for(int direction = 0; direction < 8; ++direction){
        int nextX = x + dx[direction];
        int nextY = y + dy[direction];

        if(hasWord(board, nextX, nextY, word.substr(1)))
            return true;
    }

    return true;
}
