import socket
port = 5000
ip = '127.0.0.1'  # loopback address
BUF_SIZE = 1024
k = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # creates a socket object k
k.connect((ip,port))
print("Client sent connection request")

k.send("get_time".encode())  #send msg to server
data = k.recv(BUF_SIZE)    # client receive data from the server
print(data.decode())    # decodes received data into string and prints it
k.close()