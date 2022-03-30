class prime:
	def check(x):
		"""Check Function"""
		n=2
		count=0
		if x==0 or x==1:
			raise ValueError("Special Numbers")
			
		while n<x:
			if x%n==0:
				count=count+1
				break
			n=n+1
		if count==0:
			return "Prime"
		else:
			return "Non-Prime"
			
		
		    
		

  
