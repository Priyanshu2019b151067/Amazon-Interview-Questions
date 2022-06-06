class Solution {
public:
    bool isturbo(vector<int>& arr , int e, int n){
            return (arr[e] > arr[e-1] && arr[e] > arr[e+1]) || (arr[e] < arr[e-1] && arr[e] < arr[e+1]);
    }
    int maxTurbulenceSize(vector<int>& arr) {
        if(arr.size() < 2) return arr.size();
        int s = 0;
        int e = 0;
        int mx = 1;
        int n = arr.size();
        while(s+1 < n){
            if(arr[s] == arr[s+1]){
                s++;
                continue;
            }
            e = s+1;
            while(e +1 < n && isturbo(arr,e,n)){
                e++;
            }
            mx = max(mx,e - s +1);
            s = e;
        }
        return mx;
    }
    
};