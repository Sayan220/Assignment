import socket
IP_ADDR='127.0.0.1'
UDP_PORT=5000
BUF_SIZE=1024
k=socket.socket(family=socket.AF_INET,type=socket.SOCK_DGRAM) # creates a socket object k
while True:
    name = input("Enter student name:('quit' to exit)  ")
    if name.lower() == "quit":
        k.sendto(name.encode(),(IP_ADDR,UDP_PORT))
        break
    k.sendto(name.encode(),(IP_ADDR,UDP_PORT)) #encode into bytes and send to server
    data,_ = k.recvfrom(BUF_SIZE)  #server address is ignored and data received
    print("Address:",data.decode())  #decode the result into string
k.close()