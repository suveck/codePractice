int matrixElementsSum(std::vector<std::vector<int>> matrix) {
 int row = matrix.size();
 int col = matrix[0].size();
 std::cout << row << "rows\t and the col count is " << col<< endl << endl; 
 int sum = 0;
 for (int c = 0; c < col ; c++)
 {
  for (int r = 0 ; r < row ; r++)
  {
    sum+= matrix[r][c];
    std::cout <<" currently adding\t" <<  matrix[r][c] << endl;
    if (matrix[r][c] == 0)break;
  }
 }
 return sum;
}
