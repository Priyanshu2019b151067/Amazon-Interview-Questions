class Solution {
public:
    int maxScore(vector<int>& A, int B) {

 // t.c  - O(2*K)
 // S.C - O(1)
 
    int s = 0;
    for(int i = 0;i < B;i++){
        s += A[i];
    }
    int maxi = s;
    for(int i = 0;i < B;i++){
        s = s - A[B- (i+1)] + A[A.size() - (i+1)];
        maxi = max(maxi,s);
    }
    return maxi;
     
    // T.C - O(N)
    // S.C - O(1)
     
    int s = 0;
    for(auto x : A){
        s += x;
    }
    
    int k = A.size() -B;
    if(k == 0) return s;
    int i = 0 ,j = 0;
    int mini = INT_MAX;
    int sumi = 0;
    while(j < A.size()){
        sumi += A[j];
        if(j - i +1 < k)
        {
            j++;
            continue;
        }
        else if (j-i+1 == k){
            
            mini = min(mini,sumi);
            sumi -= A[i];
            i++;
            j++;
        }
    }
         return s - mini;
    }
   
};