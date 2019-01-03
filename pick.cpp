//
// Created by mongmongi on 19. 1. 3.
//


#include "pick.h"

using namespace std;

/**
 *
 * @param n         전체 원소의 수
 * @param picked    지금까지 고른 원소들의 번호
 * @param toPick    더 고를 원소의 수
 */
void algotrithm::pick(int n, vector<int>& picked, int toPick){
    // 기저사례
    if(toPick == 0) {
        return;
    }

    int smallest = picked.empty() ? 0 :  picked.back() + 1;

    for(int next = smallest; next < n; ++next){
        picked.push_back(next);
        pick(n, picked, toPick - 1);
        picked.pop_back();
    }
}