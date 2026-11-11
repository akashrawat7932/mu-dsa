class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long totalCost = 0;
        long long common = min(need1, need2);
        totalCost += common * min(( long long )costBoth, (long long)cost1 + cost2);
        need1 -= common;
        need2 -= common;
        if (need1 > 0){
            totalCost += (long long)need1 * min((long long)costBoth,(long long)cost1);
        }
        if(need2 > 0){
            totalCost += (long long)need2 * min(( long long)costBoth,(long long)cost2);
        }
        return totalCost;
    }
};