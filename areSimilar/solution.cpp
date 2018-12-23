bool areSimilar(std::vector<int> a, std::vector<int> b) {
    int violations = 0;
    char suspects[4];
    for (int i = 0 ; i < a.size() ; i++){
        if ((a[i] != b[i]) && (violations == 0)){
            suspects[0] = a[i];
            suspects[1] = b[i];
            violations++;
        } 
        else if ((a[i] != b[i]) && (violations == 1)){
            suspects[2] = a[i];
            suspects[3] = b[i];
            violations++;
        }
        else if ((a[i] != b[i]) && (violations == 2)) return false;
    }
    if (violations == 1) return false;
    if (violations == 0) return true;
    if ((suspects[0] == suspects[3])&&(suspects[1] == suspects[2])) return true;
    else return false;
}
