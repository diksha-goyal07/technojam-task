class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int t = 0;
        for (int i = 1; i < points.size(); i++){
            const int h = abs(points[i][0] - points[i-1][0]);
            const int v = abs(points[i][1] - points[i-1][1]);
            t += std::min(h, v) + abs(h - v);
        }
        return t;
    }
};