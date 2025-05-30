class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
          for(auto &row : image){
              reverse(row.begin() , row.end()); //reverse horizontally 

              for(auto &rev : row){
                     rev ^=1; //convert 0->1 and 1->0
              }
          }
          
          return image;
    }
};