std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    int y = image.size()-2;
    int x = image[0].size()-2;
    vector<int> test(x,0);
    vector<vector<int>> out (y,test);

    
    
    int imgavg = 0;
    for (int i = 0 ; i < y; i++)
    {
        for(int j = 0 ; j < x; j++)
        {
            imgavg = 
            {
                image[i][j] + image[i][j+1] + image[i][j+1+1] +
                image[i+1][j] + image[i+1][j+1] + image[i+1][j+1+1] + 
                image[i+2][j] + image[i+2][j+1] + image[i+2][j+1+1]
            };
            imgavg = imgavg/9;
            
            out[i][j] = imgavg;
            cout << i <<"i<-- and -->j"<<j << endl << "imgavg is : " << imgavg<< endl;
        }
    }
    return out;    
}
