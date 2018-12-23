std::string alphabeticShift(std::string inputString) {
    for(int i = 0; i < inputString.size() ; i++){
        int temp = inputString[i];
        if(++temp == 123)temp = 97;
        char a = temp;
        inputString[i] = a;
    }
    return inputString;
}
