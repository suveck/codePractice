int avoidObstacles(std::vector<int> inputArray) {   
    for (int i = 2 ; i <= 1000; i++)
    {
        bool valid = true;
        for(int k = 0; k < inputArray.size();k++)
        {
            if (inputArray[k] % i == 0)
            {
                valid = false;
            }
        }
        if(valid){return i;}
    }
}
