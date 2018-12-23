std::vector<std::string> addBorder(std::vector<std::string> picture) {
    vector<string> result = {""};
    int linewidth = picture[0].length();
    string topAndBottom = string(linewidth+2, '*'); 
    
    result[0] = topAndBottom;
    for (int i = 0; i < picture.size(); i++){
        result.push_back('*' + picture[i] + '*');
    }
    result.push_back(topAndBottom);
    return result;
}
