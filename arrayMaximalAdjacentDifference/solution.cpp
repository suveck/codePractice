int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int maxInt = 0;
    for (int i ; i < inputArray.size()-1 ; i++){
    int delta = abs(inputArray[i]-inputArray[i+1]);
        cout << "delta is "<<delta << "\t from " << inputArray[i] << " and  "<< inputArray[i+1] << endl;
    if (delta > maxInt) maxInt = delta;
    }
    cout << "max delta was: " << maxInt << endl;
    return maxInt;
}
