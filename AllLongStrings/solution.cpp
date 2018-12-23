std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
// this problem will be broken into two parts
// part one is finding the longest string
// part two is populating a vector of those strings in order of original appearance
int max = 0;
    for (int i = 0 ; i < inputArray.size();i++)
    {
        if (max < inputArray[i].size())max = inputArray[i].size();
    }//now we have set our target char limit
    std::cout << max << endl;
    
    vector<string> result;
    for (int i = 0 ; i < inputArray.size();i++)
    {
        if (max == inputArray[i].size()){
            result.insert(result.end(),inputArray[i]);
            std:: cout << inputArray[i] <<endl;
        }
    }
   return result; 
    // the couts were me trouble shooting an empty result array 
    // for some reason when i set max = INT_MIN as a baseline
    // it would cause the max to fail its check against the string length checker (max < inputArray[i].size())
    // 
    // as such I am not sure why that was failing
}
