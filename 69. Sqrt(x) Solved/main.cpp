class Solution {
public:
     long long int sqrtInteger(int n) {
        
        long long s=0, e=n, ans, mid;  
        while(s<=e){             
            mid=(s+e)/2;
            if(mid*mid==n) return mid; 
            else if(mid*mid<n){             
                s=mid+1;    
                ans=mid;  
                
            }
            else e=mid-1;       
        }
        return ans;   
    }

    int mySqrt(int x) {
        return sqrtInteger(x);
    }
};