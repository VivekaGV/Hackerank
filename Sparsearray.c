int* matchingStrings(int stringList_count, char** stringList, int queries_count, char** queries, int* result_count) {
    
    int *res=(int*)malloc(queries_count*sizeof(int*));
    
     for(int i=0;i< queries_count;i++){
        res[i] = 0;
        for(int j=0;j<stringList_count;j++){
         if (strcmp(queries[i], stringList[j]) == 0) {
                res[i]++;
        }  
     }
     }
      *result_count=queries_count;
      return res;
    

}