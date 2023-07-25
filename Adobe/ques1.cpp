  // Write your code here
   long long ans = 0;
    long long maxSum1 = 0, currSum = 0, maxSum2 = 0;
    for(int i = 0; i <= j; i++){
        currSum += A[i];

        if(maxSum1 < currSum){
            maxSum1 = currSum;
        }

        if(currSum < 0){
            currSum = 0;
        }
    }
    currSum = 0;
    for(int i = j+1; i < N; i++){
        currSum += A[i];

        if(maxSum2 < currSum){
            maxSum2 = currSum;
        }

        if(currSum < 0){
            currSum = 0;
        }
    }
    return (maxSum1+maxSum2);