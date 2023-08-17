from datetime import datetime
import socket
port = 5000
ip = '127.0.0.1'
BUF_SIZE = 1024
k = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # creates a socket object k
print("Server has created a port")
k.bind((ip, port))
print("Server has bound successfully")
k.listen(1)   # listening for connections. 
print("Server waiting for a connection")

con, addr = k.accept()  # When client connects, it returns a new socket 'con'
print('Connection address is: ',addr)
dt = datetime.now().strftime("%d/%m/%Y %H:%M:%S")
msg = f"date and time={dt}".encode()  # encodes into bytes 
con.send(msg)  # server send msg to client
con.close()