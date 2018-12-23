std::string reverseParentheses(std::string s) {
/*
std::string one = "";
std::string two = "";
std::string three = "";
int para = 0;
for(int i =0; i<s.length();i++){
    if ((s[i] == '(') ||(s[i] == ')'))para++;
    else{
        if (para == 0){one += s[i];}
        if (para == 1){two += s[i];}
        if (para == 2){three += s[i];}
    }
}
string twoNew = "";
for(int i = 0; i < two.length(); i++){
    twoNew += two[two.length()-i-1];
}
return one+twoNew+three;
    */
//was not expecting nested / multiple () as such I will ahve to rewrite this to accomodate, otherwise the abov e works for a single () set.
//
//I think i am going to have a recursive helper function do this
//it will need to follow the order of operations or not swap ( & )
/*
string somestring = "abcd";
somestring.erase(1,1);
cout << somestring << endl ;
cout << somestring[1] << endl;
*/
    bool isParen = true;
    while(isParen){
        int parenStart = -1; // had issues when setting as "int parenStart,parenEnd = -1;" parenStart was taking random memory value.
        int parenEnd = -1;
        for(int i = 0 ; i < s.length() ; i++){
//cout << "paren values are : " << parenStart << "\t" << parenEnd << endl;
            if(s[i] == '(') {parenStart = i;}
            if(s[i] == ')') {parenEnd = i;}
            if((parenStart != -1)&&(parenEnd != -1)){
                //remove parens before reversing order
//cout << "ready to erase and reverse in string:\t"<< s << endl;
//cout << "start is " << s[parenStart] << " @ " << parenStart<< endl;
//cout << "end is " << s[parenEnd] << " @ "<<parenEnd<<endl;
                s.erase(parenEnd, 1);
                s.erase(parenStart, 1);
//cout << "the string is now \t" << s << endl;
                parenEnd-=2;// move end index back two for the two removed chars of '(' & ')'
//cout << s[parenStart] <<"\t" << s[parenEnd] << endl;
                while(parenStart < parenEnd){
                    swap(s[parenStart++], s[parenEnd--]);
                }
//cout << "after swap, the string is now \t" << s << endl;
                i = 0;// resetting itterators so that end logic can be tested and multiple parens can be checked for
                parenEnd = -1; //had issues when setting "parenStart,parenEnd = -1;"
                parenStart = -1;
            }
            if((parenStart == -1)&&(parenEnd == -1) && (i == s.length()-1)){
                isParen = false;
            }
        }
    }
    return s;
}
