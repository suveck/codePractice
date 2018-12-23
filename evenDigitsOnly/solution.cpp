bool evenDigitsOnly(int n) {
    bool otherAns = true;
    if (n>=10){
        otherAns = evenDigitsOnly(n/10);
    }
   
    int temp = n%10;
    //cout << temp << "%2 == \t" << (temp%2) << endl;
    temp = temp %2;
    if(temp != 0){
        return (false&&otherAns);
    }
    else return (true&&otherAns);
}
