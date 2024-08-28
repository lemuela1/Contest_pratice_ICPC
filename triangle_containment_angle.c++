//实现方式：当一点组成的三角形两角角度均小于另一点时，该点在另一点形成的三角形内部

#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

struct pt{
    int x;
    int y;
    int v;
    int id;
};

// 三角形左边角度大小排序
bool cmp1(const pt &p1, const pt &p2){
    p1.x * p2.y < p2.x * p1.y;
}

// 三角形右边角度大小排序
bool cmp2(const pt &p1, const pt &p2, const int &L){
    (L - p1.x) * p2.y < (L - p2.x) * p1.y;
}

int main(){
    int T, L;
    cin >> T, L;
    int A[T], B[T];
    for(int i = 0; i < T; i++){
        A[i] = i;
        B[i] = i;
        
    }
}