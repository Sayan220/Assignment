import socket
TCP_PORT = 5000
IP_ADDR = '127.0.0.1'  # loopback address
BUF_SIZE = 1024
exp = input("Enter integer arithmetic expression:")
k = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # creates a socket object k
k.connect((IP_ADDR,TCP_PORT))
print("Client sent connection request")
k.send(exp.encode())     #encode into bytes ; client send exp to the server

res = k.recv(BUF_SIZE)   #client received data from server
print(res.decode())      # decodes the received data into string
k.close()