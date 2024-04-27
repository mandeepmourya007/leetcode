class Solution {
public:
    void pre_compute(vector<bool> &is_prime,int n )
    {
        for(int i=2;i*i<=n;i++)
        {
            if(is_prime[i])
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    is_prime[j] = false;
                }
            }

        }
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        vector<bool>is_prime(101,true);
        pre_compute(is_prime,101);
        is_prime[0]=0;
        is_prime[1]=0;

        int first_prime=-1,last_prime = -1;
        for(int i=0;i<n;i++)
        {
            if(is_prime[nums[i]])
            {
                if(first_prime==-1)
                    first_prime = i;
                last_prime = i;
            }

        }
        return last_prime - first_prime;
    }
};