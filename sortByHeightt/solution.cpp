std::vector<int> sortByHeight(std::vector<int> a) {
    vector<int> newA;
    for(int i =0 ; i < a.size(); i++)
    {
        if (a[i] != -1){newA.push_back(a[i]);}
    }
    std::sort(newA.begin(), newA.end());
    for(int j,i =0 ; i < a.size(); i++){        std::cout << a[i] << endl;

        if (a[i] != -1){
            a[i] = newA[j];
            j++;
        }
    }
    return a;
}
