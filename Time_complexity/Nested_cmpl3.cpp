// What is time complexity of following code :

        int count = 0;
        for (int i = N; i > 0; i /= 2) {
            for (int j = 0; j < i; j++) {
                count += 1;
            }
        }
/*
O(N * N)
O(N * log N)
O(N * log(log(N)))
O(N)
O(N * Sqrt(N))
*/


/*
Hint-soluntion  :
In the first iteration, the j loop runs N times.
In the second iteration, the j loop runs N / 2 times. 
In the ith iteration, the j loop runs N / 2^i times. 
So, the total number of runs of loop = N + N / 2 + N / 4 + ... 1 
= **N * ( 1 + 1/2 + 1/4 + 1/8 + ... ) < 2 * N** 


Answer -> 4
*/
