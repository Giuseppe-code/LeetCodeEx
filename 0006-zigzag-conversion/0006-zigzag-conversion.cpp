class Solution {
public:
    string convert(string s, int numRows) {
    int maxIndex=s.length();
    bool flag=true;
    int index=0;
    string x;
    int newNumRows=numRows;
    x.push_back(s.at(0));

    if(maxIndex==1){flag=false;}
    if(numRows==1){return s;}
    while (flag){
        index+=(numRows-newNumRows)*2;//buffer 2
        if(index>=maxIndex ){
            newNumRows--;
            index=0;
            index-=(numRows-newNumRows);//buffer1
            if(newNumRows==0)
                flag=false;
            continue;
        }
        if((numRows-newNumRows)*2!=0)
            x.push_back(s.at(index));

        index+=(newNumRows-1)*2;//aumento
        if(index>=maxIndex){
            newNumRows--;
            index=0;
            index-=(numRows-newNumRows);//buffer1
            if(newNumRows==0)
                flag=false;
            continue;
        }
        if(((newNumRows-1)*2!=0))
            x.push_back(s.at(index));
    }
    return x;
    }
};