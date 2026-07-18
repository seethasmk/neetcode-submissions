class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        heights.push_back(0);
        for(int i=0; i < heights.size(); i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int top = st.top(); st.pop();
                int height = heights[top];
                int right = i;
                int left = st.empty()? -1: st.top();
                int width = right - left - 1;
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }
        return maxArea;
    }
};
