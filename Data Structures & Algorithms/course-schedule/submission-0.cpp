class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        for(auto& p: prerequisites){
            int a = p[0], b = p[1];
            graph[b].push_back(a);
        }
        vector<int> state(numCourses, 0);

        for(int course = 0; course < numCourses; course++){
            if(!dfs(course, graph, state)){
                return false;
            }
        }
        return true;
    }

    bool dfs(int course, vector<vector<int>>& graph, vector<int>& state){
        if(state[course] == 1)return false;
        if(state[course] == 2)return true;
        state[course] = 1;
        for(int neighbor: graph[course]){
            if(!dfs(neighbor, graph, state)){
                return false;
            }
        }
        state[course] = 2;
        return true;
    }
};
