nums = [1, 2, 3, 4, 5]

def adding_nums(nums):
	if len(nums) == 1:
		print "Done Adding."	
		print nums
	else:
		print "Not Done Adding."
		print nums
		result = nums[0] + nums[1]
		nums[1] = result
		new_list = nums[1:]
		adding_nums(new_list)
	return	

adding_nums(nums);
