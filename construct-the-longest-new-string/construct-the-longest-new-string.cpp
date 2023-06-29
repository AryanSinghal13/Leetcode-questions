class Solution {
public:
    int longestString(int x, int y, int z) {
        int c=0;
        // if(y>x){
        //     c+=z;
        // }
        // else if(x>y)
        // {
        //     c+=z;
        // }
        while(y>0&&x>0)
        {
            c+=2;
            y--;
            x--;
        }
        if(x==y) c+=z;
        else c+=z+1;
        return c*2;
    }
};