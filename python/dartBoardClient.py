import serial
import requests

teams = open("teams.txt").read().split("\n")
teams = [x.split(".")[1] for x in teams]

ser = serial.Serial("COM6", 9600)
post = 3
print("Running POST check...")
l = 0

while True:
	t = int(input("TEAM: ").strip())
	x = int(str(ser.read())[5])
	if post > 0:
		post = post - 1
		if post == 0:
			print("READY!\n");
	else:
		if l == 1:
			l = 0
		else:
			print(str(requests.post("http://127.0.0.1/codart", data={val:str(x-1).content[2:].replace("'", ""), team:teams[t-1]})
			l = x