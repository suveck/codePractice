bool chessBoardCellColor(std::string cell1, std::string cell2) {
    int x1,x2,y1,y2 = 0;
    x1 = cell1[0];
    x1-=64;//standard deviation in ascii
    y1 = cell1[1];
    x2 = cell2[0];
    x2-=64;
    y2 = cell2[1];
    
    if(((x1%2==0) && (x2%2==0)) && ((y1%2==0) && (y2%2==0))){
        return true;
    }
    if (((x1%2!=0) && (x2%2!=0)) && ((y1%2!=0) && (y2%2!=0))){
        return true;
    }
    if (((x1%2!=0) && (x2%2==0)) && ((y1%2!=0) && (y2%2==0))){
        return true;
    }
    if (((x1%2==0) && (x2%2!=0)) && ((y1%2==0) && (y2%2!=0))){
        return true;
    }
    if(((x1%2!=0) && (x2%2==0)) && ((y1%2==0) && (y2%2!=0))){
        return true;
    }
    if (((x1%2==0) && (x2%2!=0)) && ((y1%2!=0) && (y2%2==0))){
        return true;
    }
    if((x1==x2)&&(y1==y2)){
        return true;
    }

    return false;
}