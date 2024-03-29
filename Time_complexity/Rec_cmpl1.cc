/* 
 * V is sorted 
 * V.size() = N
 * The function is initially called as searchNumOccurrence(V, k, 0, N-1)
 */
int searchNumOccurrence(vector<int> &V, int k, int start, int end) {
    if (start > end) return 0;
    int mid = (start + end) / 2;
    if (V[mid] < k) return searchNumOccurrence(V, k, mid + 1, end);
    if (V[mid] > k) return searchNumOccurrence(V, k, start, mid - 1);
    return searchNumOccurrence(V, k, start, mid - 1) + 1 + searchNumOccurrence(V, k, mid + 1, end);
}
/*
From my notes :
for whole code T(n) = 2T(N/2) + K 
soln: in this log2 of base 2 is 1 and k = 0 so 1 > 0 then 
O(n^1).
*/
/* 
It might seem at the first look that the program is O(log N). 
However, the last case 
return searchNumOccurrence(V, k, start, mid - 1) + 1 + searchNumOccurrence(V, k, mid + 1, end);
is the bottleneck step. 
Assuming all the values in the array are the same, we get the following relation : 

T(N) = 2 * T(N/2) + constant

     = 4 * T(N/4) + constant     ( 2 * constant = another constant ) 

     = 8 * T(N/8) + constant 

     …

     = N * T(N/N) + constant 

     = N + constant 

     = O(N)



 */

