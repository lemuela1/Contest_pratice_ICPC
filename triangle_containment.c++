#include <iostream>

using namespace std;

int main(){
    int T, L;
    cin >> T >> L;
    int arr[T][3];
    for(int i = 0; i < T*3; i++){
    cin >> arr[i/3][i%3];
    }

    for(int k = 0; k < T; k++){
        int res = 0;
        double k1, k2, b2;
        k1 = (double)arr[k][1] / (double)arr[k][0];
        k2 = (double)arr[k][1] / (double)(arr[k][0] - L);
        b2 = (-1 * (double)arr[k][1] * (double)L / (double)(arr[k][0] - (double)L));
        for(int j = 0; j < T; j++){
            if(arr[k][0] >= 0 && arr[k][0] <= L)
            {
                if(((double)arr[j][1] < (double)arr[j][0] * k1) && ((double)arr[j][0] <= (double)arr[k][0])){
                    res += arr[j][2];
                }
                
                else if(((double)arr[j][1] < (double)arr[j][0] * k2  + b2) && ((double)arr[j][0] > (double)arr[k][0])){
                    res += arr[j][2];
                }
            }
            
            else if(arr[k][0] > L)
            {
                if(((double)arr[j][1] < (double)arr[j][0] * k1) && ((double)arr[j][1] > (double)arr[j][0] * k2  + b2)){
                    res += arr[j][2];
                }
            }

            else if(arr[k][0] < 0)
            {   
                if(((double)arr[j][1] > (double)arr[j][0] * k1) && ((double)arr[j][1] < (double)arr[j][0] * k2  + b2)){
                    res += arr[j][2];
                }
            }

        }
        cout << res << '\n';
    }

}