/**
Please cjeck that it gives wrong answer at online judge
**/


class Solution {
public:
    bool lemonadeChange(vector<int> &bills) {
        
        int five = 0, ten = 0, twenty = 0;
        
        for(int i = 0; i < bills.size(); i++) {
            if(bills[0] != 5) { return false; }
            else if(bills[i] == 5) { five++; continue; }
            else if(bills[i]  == 10) {
               
                if(five >= 1) { five--;  ten++; continue; }
                else { return false; }
            }
            else if(bills[i]  == 20) {
                
                if(five >= 3) { five =  five - 3; twenty++; continue; }
                else if(ten >= 1 && five >= 1) { ten--; five--; twenty++; continue; }
                else { return false; }
            }
            else { return false; }
        }
        
        return true;
    }
};

