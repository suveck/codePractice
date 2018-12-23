int depositProfit(int deposit, int rate, int threshold) {
    double total = deposit;
    double r = rate;
    r /= 100;
    int i = 0;
    while(total < threshold){
        total += (total*r);
        i++;
        cout << "total is \t" << total<<endl;
    }
    return i;
}
