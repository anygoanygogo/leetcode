class Solution {
public:
    int trap(int A[], int n) {
        if(n<=1)
			return 0;
		int start = 0;
		int end = n-1;

		int leftMax = A[start];
		int rightMax = A[end];

		int capacity;
		while(start < end){
			if(leftMax <= rightMax){
				if(A[start+1] < leftMax){
					capacity += (leftMax - A[start+1]);
				}else{
					leftMax = A[start+1];
				}
				start++;				
			}else{
				if(A[end-1] < rightMax){
					capacity += (rightMax - A[end-1]);
				}else
					rightMax = A[end-1];
				end--;
			}
		}
		return capacity;
    }
};
