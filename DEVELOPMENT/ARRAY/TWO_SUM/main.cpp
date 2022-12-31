/*LOGIC*/

/*
 => need to add the value inside unordered map where key of the unortdered map is the actual integer 
    value from vector and value is the index of the actual value from vector[key : value, value : index].
=> need to loop the vector by an condition result = (target - value)
=> search for result inside the unordered map inside loop if it's true 
   need to push iterator value followed by map value inside vector and return the vector

*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;

        // sort(nums.begin(), nums.end());
        
        vector<int> result;
        unordered_map<int, int> umap;

        for(int i=0;i<nums.size();i++)
        {
            
            if(umap.find(target-nums[i]) != umap.end())
            {
                result.push_back(umap[target-nums[i]]);
                result.push_back(i);
                break;
            }
            else
                umap[nums[i]]=i;

        }

        return result;

        //  for(i=0;i<nums.size()-1;i++)
        //  {
        //      for(j=i+1;j<nums.size();j++)
        //      {
        //          if(target == nums[i]+nums[j]) {
        //              result.push_back(i);
        //              result.push_back(j);
        //              break;
        //          }
        //      }
        //  }
        return result;
    }
};