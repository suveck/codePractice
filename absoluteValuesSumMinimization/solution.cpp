int absoluteValuesSumMinimization(std::vector<int> a) {
    vector<int> result(a.size(),0);
    for(int i = 0 ; i < a.size() ; i++){
        for(int j = 0; j < a.size(); j++){
            result[i] += abs(a[j] - a[i]);
        }
    }//now that we hav results we need to check for min
    int min = INT_MAX;
    for(int i = 0; i <a.size(); i ++){
        if (result[i] < min){min = result[i];}
    }
    for(int i = 0 ; i < a.size();i++){
        if (result[i] == min){return a[i];}
    }
    
    return 0;
}