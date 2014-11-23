class Solution {
public:
    double pow(double x, int n) {
        double t;
        if (0 == n)
            return 1;
        t = pow(x, n/2);
        if (0 == n%2)
            return t*t;
        else{
            if (n > 0)
                return x*t*t;
            else
                return t*t/x;
        }
    }
};