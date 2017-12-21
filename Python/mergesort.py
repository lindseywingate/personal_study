#This program is a divide.

nums = [4, 66, 10, 23, 5, 3, 1]

def merge(a, b):
	sizea = len(a)
	sizeb = len(b)
	
	#print a
	#print b
	#print "\n"
		

def divide(nums):
	if len(nums) > 1 :
		newsize = len(nums)/2 
		nums1 = nums[0:newsize]
		nums2 = nums[newsize:]	
		
		#print nums1
		#print nums2

		divide(nums1)
		divide(nums2)
		merge(nums1, nums2)
		#if size%2 > 0:
		#	print "its odd"
		#	print size/2
		#	print size/2 + 1
		#	it's an odd list size
		#if size%2 == 0:
		#	it's an even list size	
		#	return

print "start"
divide(nums)
	
