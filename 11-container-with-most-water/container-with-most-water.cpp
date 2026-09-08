class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;
        int maxarea=0;
        while(lp<rp){
            int width=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currarea=width*ht;
            maxarea=max(maxarea,currarea);
            height[lp]<height[rp]?lp++:rp--;
        }
        
        return maxarea;
    }
    
};