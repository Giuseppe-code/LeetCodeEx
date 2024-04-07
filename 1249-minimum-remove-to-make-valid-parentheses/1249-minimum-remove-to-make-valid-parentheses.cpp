class Solution {
public:
    string minRemoveToMakeValid(string s) {
    int countA=0;// (
    int countB=0;// )
    int index=0;

    vector<int> posA;
    do{
        if(s.at(index) == ')')
            countB++;
        else if(s.at(index) == '(') {
            countA++;
            posA.push_back(index);
        }
        if(countB>countA){
            s.erase(index, 1);
            countB--;
            index--;
        }
        index++;
    }while(index < s.size());
    
    int rangeDel= countA-countB;
    for (int i=0; i<rangeDel; i++) {
        s.erase(posA.back(),1);
        posA.pop_back();
    }
    return s;
    }
};