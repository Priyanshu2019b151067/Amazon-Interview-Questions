int Solution::maxSubArray(const vector<int> &A) {
    int cs = 0;
    int ms = INT_MIN;
    for(int i = 0; i < A.size();i++){
        cs += A[i];
        if(A[i] > cs){
            cs = A[i];
        }
        ms = max(ms,cs);
    }
    return ms;
}
