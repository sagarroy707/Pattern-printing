class Solution {
  public:
    void printTriangle(int n) {
        
        for(int i=1;i<=n;i++)
        {
            char ch='A'+i-1;
            for(int j=1;j<=i;j++)
            {
                cout<<ch;
            }
            cout<<endl;
        }
    }
};