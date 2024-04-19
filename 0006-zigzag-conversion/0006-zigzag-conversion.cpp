class Solution {
public:
    string convert(string s, int numRows) {
    int maxIndex=s.length();
    bool flag=true;
    int index=0;
    string x;
    int currentNumRow=numRows;
    x.push_back(s.at(0));

    if(maxIndex==1){flag=false;}
    if(numRows == 1){return s;}
    while (flag){
        index+= (numRows - currentNumRow) * 2;
        if(index>=maxIndex ){
            currentNumRow--;
            index=0;
            index-=(numRows - currentNumRow);
            if(currentNumRow == 0)
                flag=false;
            continue;
        }
        if((numRows - currentNumRow) * 2 != 0)
            x.push_back(s.at(index));

        index+= (currentNumRow - 1) * 2;
        if(index>=maxIndex ){
            currentNumRow--;
            index=0;
            index-=(numRows - currentNumRow);
            if(currentNumRow == 0)
                flag=false;
            continue;
        }
        if(((currentNumRow - 1) * 2 != 0))
            x.push_back(s.at(index));
    }
    return x;
    }
};