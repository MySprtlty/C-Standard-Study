#include <stdio.h>

int one_11; // 외부 연결
int one_12; // 외부 연결
extern int one_2; //외부 연결

int main() {
    extern int one_11; // 외부 연결

    {
        int one_12; // 연결 없음
        extern int other_one_2; // 외부 연결

        {
            extern int one_12; // 외부 연결
        }
    }

    {
        extern int one_12; // 외부 연결
    }
    return 0;
}

extern int one_11; // 외부 연결