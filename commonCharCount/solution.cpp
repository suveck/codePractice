int commonCharacterCount(std::string s1, std::string s2) {
// I will be compairing the strings by checking each incremental letter against the remainder of the second word before checking the next letter in the first word, I will then add a sum along it and return sum
// 
//  this logic is flawed as I need to black list letters that have already been counted as similar, adding this now
//  
//  nvm a hashing table seemed easier... sooo that
//  
//char test='z';
//int testI = test-97;
//std::cout << testI << endl;
    //this was for testing the ascii offset
    int sum = 0;
    int letterTable[2][26] ={};

    for(int i = 0 ; i < s1.length() ; i++){
        letterTable[0][s1[i]-97]++;
        }
    for(int i = 0 ; i < s2.length() ; i++){
        letterTable[1][s2[i]-97]++;
        }
    // now that we have populated the two hash tables we need to compair them
    for(int i = 0 ; i < 26 ; i++){
        int diff = abs(letterTable[0][i] - letterTable[1][i]);
        sum += max(letterTable[0][i], letterTable[1][i])- diff;
        //std::cout << letterTable[0][i] << "\t" << letterTable[1][i] << endl;
        //std::cout << "diff is: " << diff << endl;
        }
    return sum;
}