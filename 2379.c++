/*You are given a 0-indexed string blocks of length n, where blocks[i] is either 'W' or 'B',
representing the color of the ith block. The characters 'W' and 'B' denote the colors white and black, respectively.
You are also given an integer k, which is the desired number of consecutive black blocks.
In one operation, you can recolor a white block such that it becomes a black block.
Return the minimum number of operations needed such that there is at least one occurrence of k consecutive black blocks.
 */

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int whitecount =0;
        int minchanges = INT_MAX;
        for(int i=0; i<k;i++){
            if(blocks[i]=='W'){
                whitecount++;
            }
        }
        minchanges = whitecount;
        for (int i = k; i<n ; i++){
            if(blocks[i-k] == 'W'){
                whitecount--;
            }
            if(blocks[i] == 'W'){
                whitecount++;
            }
        minchanges = min(minchanges, whitecount);
    }
    return minchanges;
    }
};
