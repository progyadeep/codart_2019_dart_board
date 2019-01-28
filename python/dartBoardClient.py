import serial
import requests

ser = serial.Serial("COM6", 9600)
post = 3
print("Running POST check...")
l = 0

while True:
	x = str(ser.read())[5]
	if post > 0:
		post = post - 1
		if post == 0:
			print("READY!\n");
	else:
		if l == 1:
			l = 0
		else:
			print(str(requests.get("http://127.0.0.1/codart/?param="+x).content)[2:].replace("'", ""))
			l = int(x)