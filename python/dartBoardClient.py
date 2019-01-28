import serial
import requests

teams = open("teams.txt").read().split("\n")
teams = [x.split(".")[1] for x in teams]

ser = serial.Serial("COM6", 9600)
post = 3
print("Running POST check...")

while post > 0:
	s = ser.read()
	post = post - 1

print("READY!\n")
l = "0"

while True:
	t = int(input("TEAM: ").strip())
	x = str(ser.read())[5]
	if l == "1":
		l = "0"
	else:
		print(str(requests.post("http://127.0.0.1/codart", data={'val':x, 'team':teams[t-1]})))
		l = x
