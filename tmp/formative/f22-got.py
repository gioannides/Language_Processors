
def f(x):
	return (x*x*( - 1))

c=98



def main():
	global c
	x=32


	while(c>0):
			c=c-1

	return 	f(x)+c



if __name__ == "__main__":
		import sys
		ret=main()
		sys.exit(ret)