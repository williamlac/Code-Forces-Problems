#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string w;
  int n;
  cin >>n;
  for (size_t i = 0; i < n; i++) {
    cin>>w;
    if(w.size()>10){
      cout<<w[0]<<w.size()-2<<w[w.size()-1]<<endl;
    }
    else{
      cout<<w<<endl;
    }
  }

  return 0;
}
