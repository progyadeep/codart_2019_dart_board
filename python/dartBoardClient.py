import serial
import requests

teams = open("teams.txt").read().split("\n")
teams = [x.split(".")[1] for x in teams]
diff = ['medium', 'hard', 'easy']
token = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ0eXBlIjoiYWRtaW4iLCJpYXQiOjE1NDk2NDM4MTl9.x7tS75lXAFcNXCb29ToX-Cyt8d1F9aSt1Ba_ILTedRc"

while True:
	ser = serial.Serial("COM6", 9600)
	post = 3
	print("\n\nRunning POST check...")

	while post > 0:
		s = ser.read()
		post = post - 1

	print("READY!\nHIT: ", end='')
	l = "#"
	x = str(ser.read())[5]
	if l == x:
		l = "#"
	else:
		print("OK ("+str(x)+")")
		#t = int(input("TEAM: ").strip())
		print(str(requests.post("http://192.168.1.105:5000/assign", data={'level':diff[int(x)], 'token':token}).text))
		#print(x)
		l = x
	ser.close()
