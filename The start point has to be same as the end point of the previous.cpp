#include <bits/stdc++.h>

using namespace std;

int main() {
vector<pair<int,int>> v = {{5,1},{4,5},{9,4},{11,9}};

unordered_map<int,int> mp;

set<int> s;

for(int i = 0; i<v.size(); i++){
    pair<int,int> p = v[i];
    
    if(mp.find(p.first) == mp.end()){
        mp[p.first] = p.second;
    }else{
        cout<<"Duplicate";
    }
    
    s.insert(p.second);
}

pair<int,int> start;
vector<pair<int,int>> ans;


for(int i=0;i<v.size();i++){
    pair<int,int> p = v[i];
    
    if(s.find(p.first) == s.end()){
        start = v[i];
        break;
    }
}

ans.push_back(start);
mp.erase(start.first);

while(mp.size()>0){
    int f = start.second;
    int s = mp[f];
    mp.erase(f);
    start = {f,s};
    ans.push_back(start);
}

for(int i=0; i<ans.size(); i++){
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
    
}
}
