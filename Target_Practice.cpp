#include <iostream>

using namespace std;

// int board[10][10] = {
//     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
//     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
//     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
//     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
//     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
//     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
//     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
//     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
//     };

// void solve() {
//     int t = 1;
//     cin >> t;

//     while (t--) {
//         int total = 0;
//         for (int r = 0; r < 10; r++) {
//             for (int c = 0; c < 10; c++) {
//                 char ch;
//                 cin >> ch;

//                 // Check if the character is not '.'
//                 if (ch !='.') {
//                     total += board[r][c];
//                 }
//             }
//         }
//         cout << total << endl;
//     }
// }

int main() {
    // solve();
    int t;
    cin>>t;

    while(t--){
        int ans=0;
        for(int i=0;i<10;i++){
            for(int j =0;j<10;j++){
                char x;
                cin>>x;

                if(x=='X'){
                    int val = min(i+1,10-i);
                    val = min(val,min((j+1),10-j));
                    ans+=val;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
