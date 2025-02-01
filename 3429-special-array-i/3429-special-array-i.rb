# @param {Integer[]} nums
# @return {Boolean}
def is_array_special(nums)
  (0...(nums.length - 1)).each do |i|
    return false if nums[i] % 2 == nums[i + 1] % 2
  end
  true
end