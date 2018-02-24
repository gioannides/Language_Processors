
r=1



def main():
	global r
	i=0


	while(i<10):
			j=0

			while(j<10):
					j=j+1
					r=r*j*i

			i=i+1



	return r



if __name__ == "__main__":
		import sys
		ret=main()
		sys.exit(ret)