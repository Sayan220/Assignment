import socket
TCP_PORT = 5000
IP_ADDR = '127.0.0.1'
BUF_SIZE = 1024
k = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # creates a socket object k
print("Server has created a port")
k.bind((IP_ADDR,TCP_PORT))
print("Server bound successfully")
k.listen(1)
print("Server waiting for client")

con, addr = k.accept()  # When client connects, it returns a new socket 'con'
print("Connection address is ", addr)  # address of client
data = con.recv(BUF_SIZE)  # server recieved exp from client
print("Received expression: ",data.decode())   #byte to string

try:
	res = str(eval(data))  #evaluation
	res = "Result: "+res
	con.send(res.encode())  #encode the result into bytes and send to client
except Exception as x:
	print(x)
	err = "Invalid integer expression: %s"%(x)
	err=str(err)
	con.send(err.encode())
finally:
	con.close()