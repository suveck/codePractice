bool palindromeRearranging(std::string inputString) {
    int alphabetCount[26] = {0};// -97 is the offset for chars
    for(int i = 0; i < inputString.length() ; i++){//this adds the amount of entries of each letter in string
        int letter = inputString[i]-97;
        alphabetCount[letter]++;
    }
    
    //now we need to check that every letter is an even amount
    int oddLetters = 0;
    for(int i = 0 ; i < 26 ; i++){
        if (alphabetCount[i] % 2 == 1) oddLetters++;
    }
    
    
    if((inputString.length() % 2) == 0){//is string is an even amount of letters
        if(oddLetters > 0 ) return false;
    }
    if((inputString.length() % 2) == 1){//is string is an odd amount of letters this means that there can be 1 unpaired letter and you can still make a palindrome
        if(oddLetters > 1 ) return false;
    }
    
    return true;
}
