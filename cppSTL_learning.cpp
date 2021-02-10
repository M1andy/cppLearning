//
// Created by 27433 on 2021/2/10.
//

#include "bits/stdc++.h"

using namespace std;
class vecFunc{
private:
    vector<int> oriArr {5,32,4,21,4,61,54,6};

public:
    // 二分查找
    bool isexist(int i){
        return binary_search(oriArr.begin(), oriArr.end(), i);
    }
    // 二分查找出元素插入的位置
    int firstLoc(int i){
        return lower_bound(oriArr.begin(), oriArr.end(), i) - oriArr.begin();
    }
    int lastLoc(int i){
        return upper_bound(oriArr.begin(), oriArr.end(), i) - oriArr.begin();
    }

    void sortArr(void){
        sort(this->oriArr.begin(), this->oriArr.end());
    }
    // 输出数组
    void coutArr(void){
        for (auto s : this->oriArr){
            cout << s << " ";
        }
        cout << endl;
    }

    void changeArr(void){
        int length;
        cout << "input New array length" << endl;
        cin >> length;
        this->oriArr.clear();
        this->oriArr.resize(length);
        for(int i=0; i<length; i++){
            int s = 0;
            cin >> s;
            this->oriArr[i] = s;
        }
        cout << "input Successfully!" << endl;

    }
};