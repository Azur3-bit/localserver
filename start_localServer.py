import socket
def get_localhostName():
    HOST_NAME = socket.gethostname()
    return HOST_NAME

def get_localhost_IPaddr(host):
    host = socket.gethostname()
    IP_ADDR = socket.gethostbyname(host)
    return IP_ADDR
def strat_localServer():
    print("starting Local Server == Azur3-bit")
    print("THe server will run on the host machine and will be and only be accessibile if the host machine is Running !!!! ")
    print("local Host ip address : ")


HOST_name = get_localhostName()
ip_addr = get_localhost_IPaddr(HOST_name)
print(f"---------------------\nHOST_Name_mac : {HOST_name}")
print(f"---------------------\nIP_ADRRESS : {ip_addr}")
