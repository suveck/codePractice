bool isIPv4Address(std::string inputString) {
   char test[inputString.length()] ;
    int k = 0;
    strcpy(test,inputString.c_str());
    
    while(test[k]){// this is so that we can fail strings with letter before trying to use stoi()
        if((int)test[k++] > 58)
        {
            cout<<"failed b/c letter";
            return false;
        }
        //cout << "ascii val is :  " << (int)test[k];
    }
    string token[4];
    stringstream in(inputString);
    int i = 0;
    while(getline(in, token[i++], '.')){
        //cout << token[i-1] << endl;
    }
    if (token[4] != "")
    {
        cout<<"failed b/c too many token";
        return false;
    }
    //this is valid for checking strings if (token[0]!=""){ cout << "token non null";}
    i = 0;
    while(i++ < 4){
        if (token[i-1] == "")
        {
            cout<<"failed b/c null token";
            return false;
        }
        if (token[i-1].length() > 3)
        {
            cout<<"failed b/c token waaaay too long and will break stoi() b/c string int is bigger than INT_MAX";
            return false;
        }
        if (stoi(token[i-1]) < 0 ) 
        {
            cout<<"failed b/c less then 1";
            return false;
        }
        if (stoi(token[i-1]) > 255 ) 
        {
            cout<<"failed b/c bigger tahn 255";
            return false;
        }
    }
return true;
}
