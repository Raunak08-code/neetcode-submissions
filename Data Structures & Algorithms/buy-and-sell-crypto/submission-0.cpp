class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int mprice = prices[0];
        int maxprof = 0;

        vector<int> minprices(n);
        vector<int> maxprofit(n);

        minprices[0] = prices[0];
        maxprofit[0] = 0;

        for(int i=1; i<n; i++){
            mprice = min(mprice, prices[i]);
            minprices[i] = mprice;
            maxprof = max(maxprof, prices[i]-mprice);
            maxprofit[i] = maxprof;
        }


        int sol =0;
        for(int i=0; i<n; i++){
            sol = max(sol, maxprofit[i]);
        }

        return sol;
    }
};
