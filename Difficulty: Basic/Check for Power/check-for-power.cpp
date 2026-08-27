class Solution {
public:
    bool isPower(int x, int y) {

        if(x == 1) {
            if(y == 1)
                return true;
            else
                return false;
        }

        while(y % x == 0) {
            y = y / x;
        }

        if(y == 1)
            return true;
        else
            return false;
    }
};