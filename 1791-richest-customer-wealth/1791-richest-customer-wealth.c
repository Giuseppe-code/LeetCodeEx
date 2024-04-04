int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max=0;
    int tot=0;
    for (int i = 0; i < accountsSize; i++){
        for(int j=0; j< accountsColSize[i]; j++){
            tot+=accounts[i][j];
        }
        if(tot>max)
        max=tot;
        tot=0;
    }
    return max;
}