int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    int* resarr=(int*)malloc(arr_count * sizeof(int));
    d=d%arr_count;
    for(int i=0;i<arr_count;i++) {
        resarr[i]=arr[(i+d)%arr_count];
    }

    *result_count=arr_count;
    return resarr;
}
