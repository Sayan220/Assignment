import socket
def getAddr(name):
    with open("student.txt") as f:
        data = f.readlines()
        for line in data:
            sname, addr = line.split(":")  #split the line
            if sname==name:
                return addr
    return "Address invalid"

IP_ADDR='127.0.0.1'
UDP_PORT=5000
BUF_SIZE=1024   #buffer size of received data
k=socket.socket(family=socket.AF_INET,type=socket.SOCK_DGRAM)
k.bind((IP_ADDR,UDP_PORT))
print("Waiting for connection")
try:
    while True:
        con, addr = k.recvfrom(BUF_SIZE)  #the server receives udp packet from client
        name = con.decode()  #bytes to string
        print("Received from client: ",name)
        if name == "quit":
            break
        address=getAddr(name)  #gets the address
        k.sendto(address.encode(),addr)  #send data to client
except Exception as e:
    print(e)
finally:
    print("Server closed")
    k.close()