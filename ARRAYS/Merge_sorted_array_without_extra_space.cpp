/*class Solution {
public:
    void merge(vector <int> &a , int m , vector <int> &b , int n)
    {//Two Pointer approach
    int i = m - 1 , j = n - 1 , idx = m + n - 1;
    while(i >= 0 && j >= 0)
    {
        if(a[i] >= b[j])
        {
            a[idx] = a[i];
            i--;
        }
        else
        {
            a[idx] = b[j];
            j--;
        }
        idx--;
    }
    while(i >= 0)
        a[idx--] = a[i--];
    while(j >= 0)
        a[idx--] = b[j--];
    return;
    }
};
*/