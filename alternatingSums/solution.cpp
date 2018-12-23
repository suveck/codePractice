std::vector<int> alternatingSums(std::vector<int> a) {
    int one =0;
    int two = 0 ;
    for(int i = 0 ; i < a.size() ; i++){
        if(i%2 == 0)one+=a[i];
        else two += a[i];
    }
    vector<int> result;
    result.push_back(one);
    result.push_back(two);
        std::cout << one << "\t" << two<< endl;
    return result;//the data return is odd with returning a tuple, assigning a direct int to an entry in the vector was problematic but puch back works. the compiler does not seem to work flawlessly on this site as evidence that the "int a,b = 0 ;"does not work (as it should in cpp)
}
