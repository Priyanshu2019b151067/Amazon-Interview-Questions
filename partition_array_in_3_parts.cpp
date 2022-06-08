class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
       int sum = 0;
        for (int num : A) {
            sum += num;
        }
        if (sum % 3 != 0) {
            return false;
        }
        int c_S = 0;
        int count = 0;
        for (int num : A) {
            c_S += num;
            if (c_S == sum/3){
                count++;
                if(count == 3){
                    return true;
                }
                c_S = 0;
            }
        } 
        return false;
    }
};
