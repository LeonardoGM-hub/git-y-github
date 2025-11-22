#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n,con=0;
    cin >> n;
    vector<int>arre(n);
    for(int i=0; i < n; i++){
        cin >> arre[i];
    }
     for (int i = 0; i < n; i++){
         int num = arre[i];
         while (num > 0){
             if (num % 10 == 8){
                con = 1;
                break;
             }
             num /= 10;
         }
         if(con == 1)break;
     }
    cout<< con << endl;
    return 0;
}
