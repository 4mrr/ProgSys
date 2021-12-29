
import os


pid = os.fork()

if pid:

	status=os.wait()
	print("\n======Parent======\n")
	print("\nIn Parent The Process id : ", os.getpid())
	
else:
	print("\n======Child======\n")
	print("\nIn Child The Process id : ",os.getpid())
	print("\nThe Process Parent id : ",os.getppid())

		
