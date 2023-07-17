#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> bigSet;
vector<int> subset;
int inndex =3;
int a=0;
void utilSub(vector<vector<int>> &bigSet,vector<int> &subset,int index){
    if(index==3+1){
        bigSet.push_back(subset);
    }else{
        subset.push_back(index+1);
        utilSub(bigSet,subset,index+1);
        subset.pop_back();
        utilSub(bigSet,subset,index+1);
    }

}
void printVectorOfVectors(const vector<vector<int>>& vec) {
  for (const auto& innerVec : vec) {
    cout << "[";
    for (int i = 0; i < innerVec.size(); i++) {
      cout << innerVec[i];
      if (i != innerVec.size() - 1) {
        cout << ", ";
      }
    }
    cout << "]" << endl;
  }
}
int main()
{
    // find the subsets of below vector.
    vector<int> array = { 1, 2, 3 };
 
    // res will store all subsets.
    // O(2 ^ (number of elements inside array))
    // because total number of subsets possible
    // are O(2^N)
    utilSub(bigSet,subset,0);
    // Print result
    printVectorOfVectors(bigSet);
 
    return 0;
}