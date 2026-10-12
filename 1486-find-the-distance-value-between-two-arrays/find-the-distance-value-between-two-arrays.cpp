class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int temp=0;
        int sub =0;
        int n = arr1.size();
        int m = arr2.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
               sub=abs(arr1[i]-arr2[j]);
               if(sub<=d){
                break;
               }
            }
            if(sub>d){
                temp++;
            }
        }
        return temp;
    }
};