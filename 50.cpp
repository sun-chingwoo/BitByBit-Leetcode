class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if (x==0.0)
        {
            return (0.0);
        }
        if (x==1.0)
        {
            return (1.0);
        }
        if (n<0)
        {
            x=1/x;
        }
        return powr(x,n);

    }


    double powr(double x,long n)
    {
        if (n==0)
        {
            return 1;
        }
        long halfn=n/2;
        double half=powr(x,halfn);
        if (n%2==0)
        {
            return half*half;
        }
        else
        {
            return half*half*x;
        }
    }
};
