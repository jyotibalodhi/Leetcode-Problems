class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        // total Round of test = (timetoTest/TimetoDie) ie. T tests. So for each T test
        // there can be T+1  outcomes that it can die in 1st or 2nd or Tth or the last 
        // case is it won't die!

        // So T+1 tests rounds are there so for all p pigs the total combination will 
        // be (T+1) to the power p i.e (T+1)^p. Now this total combination should be 
        // greater than or equal to N.
        
        // Hence  the condition for the answer is going to be 
        // (T+1)^p >= N
        // Taking log on both sides we will get the required answee
        // p >= log(N)/ log(T+1);
        
         return ceil(log(buckets) / log(minutesToTest / minutesToDie + 1));
    }
};