long arrayManipulation(int n, int queries_rows, int queries_columns, int** queries) {
     int* res=(int*)malloc(n*sizeof(int*));
     int maxsum=0;
     for(int i=0;i<queries_rows;i++){
        for(int j=0;j<1;j++){
            for(int k=queries[i][j];k<=queries[i][j+1];k++)
            {
                res[k-1]= res[k-1]+queries[i][j+2];
                if (maxsum<=res[k-1])
                maxsum=res[k-1];
       
            }
        }
     }
     return maxsum;    
}
     