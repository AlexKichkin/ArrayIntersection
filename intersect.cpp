#include <cstdlib>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

vector <int> itersection (vector <int> A, vector <int> B){
    sort (A.begin(), A.end());
    sort (B.begin(), B.end());
    vector <int> C;
    int la = A.size();
    int lb = B.size();
    int i=0, j=0;
    while ((i<la)&&(j<lb)){
        if (A[i]==B[j]){
            C.push_back(A[i]);
            i++;
            j++;
        }else{
            if (A[i]<B[j]){
                i++;
            }else{
                j++;
            }
        }
    }
    return C;
}

