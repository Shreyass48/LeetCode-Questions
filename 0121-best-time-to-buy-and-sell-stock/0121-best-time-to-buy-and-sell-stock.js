/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(nums) {
    let minPrice = nums[0] || 0;
    let maxProfit = 0;

    for(let i = 0; i < nums.length; i++){
        if(nums[i] < minPrice){
            minPrice = nums[i];
        }

        maxProfit = Math.max(maxProfit, nums[i] - minPrice)
    }

    return maxProfit;
    
};