
def main():
	y=0

	x=5

	y=((x+x-x)/x)*x



	while(y<25):

			if(y<15):

				y=y+1

			

			elif(y==15):

				y=y+5

			else:
				y=y+5
				return (y & 7)





if __name__ == "__main__":
		import sys
		ret=main()
		sys.exit(ret)