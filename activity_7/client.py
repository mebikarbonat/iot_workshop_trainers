#Muhammad Azizi Mohd Ariffin

import socket

s = socket.socket()

port = 8888


s.connect(('192.168.1.20', port))

s.send(b"This is IoT Data Puller 1")

while(True):
        print (s.recv(1024) )

s.close()
