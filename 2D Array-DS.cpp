int hourglassSum(vector<vector<int>> arr) {
    
    int Max = INT_MIN;
    
    for(int i=0; i<4; i++){
        
        for(int j=0; j<4; j++){
            
            for(int k=0; k<4; k++){
                
                int temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                
                if( temp > Max)
                    Max = temp;
            }
        }
    }
    
    return Max;
}