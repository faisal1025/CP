   // Write your code here
    long long a = 0, s1, s2, cs1, cs2;
    for(int j = 0; j < N; j++){
        s1 = 0, cs1 = 0, s2 = 0;
        for(int i = 0; i <= j; i++){
            cs1 += A[i];
            s1 = max(s1, cs1);
            if(cs1 < 0){
                cs1 = 0;
            }
        }
        cs2 = 0;
        for(int i = j+1; i < N; i++){
            cs2 += A[i];
            s2 = max(s2, cs2);

            if(cs2 < 0){
                cs2 = 0;
            }
        }
        long long total = s1+s2;
        a = max(a, total);
    }
    return a;


   // Write your code here
   for(int i = 0; i < Q; i++){
      int j = queries[i][1]-1;
      int k = queries[i][2]-1;
      int z = j;
      while(z <= k){
        A[z] += queries[i][0];
        z++;
      }
   }
   
   sort(A.begin(), A.end());

   long long m = 0;
   for(int i = 0; i < N; i++){
      m += A[i];
   }

   return m;