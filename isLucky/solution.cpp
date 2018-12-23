bool isLucky(int n) {
    string input = to_string(n);
    int sum[2] = {0};
    for (int i = 0 ; i < input.length() ; i++){
        if(i<input.length()/2) sum[0] += (int)input[i]; 
        else sum[1] += (int)input[i]; 
    }
    if(sum[0] == sum[1]) return true;
    return false;
}
