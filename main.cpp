#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rvrs(vector<int>& vct){
  reverse(vct.begin(),vct.end());
  for(int i=0; i<vct.size();i++){
    cout<< vct[i] <<" "<<endl;
  }
}


