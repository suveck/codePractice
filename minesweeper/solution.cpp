std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    int a = matrix.size();
    int b = matrix[0].size();
    vector<int> temp(b,0);
    vector<vector<int>> minefield(a,temp);
    
    for (int i = 0; i < matrix.size(); i++){
    for (int j = 0 ; j < matrix[0].size() ; j++ ){
            
        if(matrix[i][j]) { //cout << "found a true!\n";
            for(int x = (j-1); x <= j+1; x++){
            for(int y = (i-1) ; y <= i+1 ; y++){
                if ((x>=0 &&x<matrix[0].size())&&(y>=0 &&y<matrix.size())){
                    if (x==j && y==i){}
                    else{
                        minefield[y][x] += 1;
                        //cout << "added to cord\t" <<x << ','<<y<<"\tnew val is ="<< minefield[y][x]<<endl;
                        //cout << x << "=x \t y="<< y <<endl;
                    }
                    
                }
            }
            } 
        }
    }
    }
    return minefield;
}
