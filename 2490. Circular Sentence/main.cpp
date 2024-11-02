class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence[0]!=sentence[sentence.length()-1]) return false;

        char start=sentence[0];
        bool ans=true;
        for(int i=0;i<sentence.length()-1;i++){
            if(isspace(sentence[i])){
                if(sentence[i-1]==sentence[i+1]){
                }else{
                    ans=false;
                }
            }
        }

        if(ans==true && start==sentence[sentence.length()-1]){
            return true;
        }
        return false;
    }
};