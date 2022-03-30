class fact:
	def find(x):
		"""Check Function"""
		n=x
		ans=1
		if x==0 or x==1:
			return 1
		if x<0:
			raise ValueError("Cannot find factorial of negative Numbers")
			
		while n>0:
			ans=ans*n
			n=n-1
		return ans
			
		
		    
		

  
