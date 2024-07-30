class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n= matrix[0].size();
        vector<int> vec;
        int i=0;
        int j=0;
        int x=0;
        int y=0;
        int f=0;
        int cnt = m*n;
      while(cnt--)
      {
        if(f==0){
            vec.push_back(matrix[i][j]);
            j++;
        }
        else if(f==1)
        {
            vec.push_back(matrix[i][j]);
            i++;
        }
        else if(f==2)
        {
            vec.push_back(matrix[i][j]);
            j--;
        }
        else if(f==3)
        {
            vec.push_back(matrix[i][j]);
            i--;
        }

        if(f==0 && j==n-x)
        {
            f=1;
            i++;
            j--;
        }
        else if(f==1 && i==m-y)
        {
            f=2;
            i--;
            j--;
        }
        else if(f==2 && j<x)
        {
            f=3;
            i--;
            j++;
            y++;
            x++;


        }
        else if(f==3&&i<y)
        {
            f=0;
            i++;
            j++;

        }


    }
    return vec;
}

};
