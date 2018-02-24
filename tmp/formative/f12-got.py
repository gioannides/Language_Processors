
def fibonacci_recursive(n):

	if(n==0):
		return 0

	if(n==1):
		return 1
	return 	fibonacci_recursive(n-1)+	fibonacci_recursive(n-2)


def main():
	x=9

	return 	fibonacci_recursive(x)



if __name__ == "__main__":
		import sys
		ret=main()
		sys.exit(ret)