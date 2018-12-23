bool variableName(std::string name) {
    
    int x = name[0]; 
    if((65<=x&&x<=90)||(97<=x&&x<=122)||(x==95)){}
    else {return false;}
    
    for(int i = 0 ; i < name.size() ; i++){
        x = name[i];
        cout << x<<endl;
        if((65<=x&&x<=90)||(97<=x&&x<=122)||(48<=x&&x<=57)||(x==95)){}
        else {return false;}
    }
    return true;
}
