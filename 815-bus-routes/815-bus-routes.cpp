class Solution {
public:
   int numBusesToDestination(vector<vector<int>>& routes, int src , int target) {

        unordered_map<int , vector<int>>adj;
        for(int i = 0 ; i < routes.size() ; i++)
        {
            int busno = i;
            for(auto& stop : routes[i])
            {
                adj[stop].push_back(busno);
            }
        }
        int ttl_buses = routes.size();
        vector<int>vis_bus(ttl_buses , 0);
        unordered_map<int , int>vis_stop;
        
        queue<int>q;
        q.push(src);
        int time_taken = 0;
        vis_stop[src] = 1;
        while(q.size())
        {
            int s = q.size();
            while(s--)
            {
                auto curr_stop = q.front(); q.pop();
                if(curr_stop == target) return time_taken;
                for(auto& bus_from_stop : adj[curr_stop])
                {
                    if(vis_bus[bus_from_stop] == 1) continue;
                    vis_bus[bus_from_stop] = 1;
                    vector<int>& stops_rechable = routes[bus_from_stop];
                    for(auto& stopp : stops_rechable)
                    {
                        if(vis_stop[stopp] == 1) continue;
                        vis_stop[stopp] = 1;
                        q.push(stopp);
                    }
                }
            }
            time_taken++;
        }
        return -1;
    }
};