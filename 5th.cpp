class Solution {
public:

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int a = matrix.size();
        int b = matrix[0].size();
        int cont  = a;
        int y = 0;
        int x = 0;
        int minx = 0;
        int miny = 0;
        int maxy = b-1;
        int maxx = a-1;
        bool right = true;
        vector<int>v;
        while(v.size() != a*b-1){
            if(right){
                if(y < maxy){
                    v.push_back(matrix[x][y]);
                    y++;
                }
                else if(x < maxx){
                    v.push_back(matrix[x][y]);
                    x++;
                }
                else{
                    minx++;
                    maxy--;
                    right = false;
                }
            }
            else{
                if(y > miny){
                    v.push_back(matrix[x][y]);
                    y--;
                }
                else if(x > minx){
                    v.push_back(matrix[x][y]);
                    x--;
                }
                else{
                    miny++;
                    maxx--;
                    right = true;
                }
            }
        }
        v.push_back(matrix[x][y]);
        return v;
    }
};
