#include<bits/stdc++.h>
using namespace std;

//BFS O(V+E)
//SC()
vector<Station> shortestPath(string from, string to){
			
			if(stations.find(from) == stations.end() || stations.find(to)==stations.end() ) {
				
				return null;
			}
			
			Station fromStation = stations[from];
			
			queue<Station> que;
			que.push(fromStation);
			
      
        //Keep tracker as well as avoid visiting the same node twice. 
			unordered_map<Station, Station> hMap ;
			hMap[fromStation]  = null;
			
			while(!que.empty()) {
				
				Station currentStation = que.front();
        que.pop();
				
				if(currentStation.getName().equals(to)) {
					break;
				}
        
				
				for(Station xyz: currentStation.getNeighbours())
				{
					if(hMap.find(xyz) == hMap.end()) {
						hMap[xyz] =  currentStation;
						que.push(xyz);	
					}
				}
			}

			vector<Station> outputList ;
			
			Station destinationStation = stations[to];
			
        //Back track all the way from destination to source,
        //Note source is mapped to null, Loop will break once source is encountered.
        
			while(destinationStation != null) {
				outputList.push_back(destinationStation);
				destinationStation = hMap[destinationStation];
			}
			
			reverse(outputList.begin(), outPutList.end());
						
			return outputList;
		}
