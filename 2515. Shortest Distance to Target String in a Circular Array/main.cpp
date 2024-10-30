class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int i=startIndex, j=startIndex, k, dis1=0, dis2=0;
        k=0;
        while(k<words.size())
        {
            if(words[i]!=target)
            {
                dis1++;
                if((i+1)<words.size())
                {
                    i++;
                }
                else
                {
                    i = 0;
                }
            }
            if(words[j]!=target)
            {
                dis2++;
                if((j-1)>=0)
                {
                    j--;
                }
                else
                {
                    j = words.size()-1;
                }
            }
            if(words[i]==target && words[j]==target)
            {
                if(dis1<=dis2)
                    return dis1;
                return dis2;
            }
            k++;
        }
        return -1;
    }
};