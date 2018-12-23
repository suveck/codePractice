
std::vector<int> meanScores(std::vector<int> s){
    vector<int> a(s.size());
    int t= 0;
    for (int i = 0; i < s.size(); i ++){
        if (i == 0){a[0] = s[0];t = s[0];}
        else{
            t += s[i];
            a[i] = floor(t/(i+1));
        }
    }
    return a;
}
