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
l = "#"

print("\nHIT: ", end='')
while True:
	x = str(ser.read())[5]
	if l == x:
		l = "#"
	else:
		print("OK ("+str(x)+")")
		t = int(input("TEAM: ").strip())
		print(str(requests.post("http://127.0.0.1/", data={'dart':x, 'team':teams[t-1], 'token':'A70811DBX'}).text))
		#print(x)
		l = x
		print("\nHIT: ", end='')
