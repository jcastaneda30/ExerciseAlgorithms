void printVectorOfVector(int n, vector<vector<string>> board) {
    for (int i=0;i<board.size();i++) {
        for (string j:board[i]) {
            cout << j << "\n";
        }
        cout << endl;
    }
}