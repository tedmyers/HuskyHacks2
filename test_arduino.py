import os
import serial
import time

API_key = "09a921928db449a7"
location = "'Boston MA'"

def setup_pywu(API_key, location):
	command = "pywu fetch %s %s" % (API_key, location)
	os.system(command)
	return

def current_condition():
	f = os.popen('pywu current condition')
	current_condition = f.read()
	return current_condition

def send_condition(condition):
	ser.write(condition)
	return

def setup_serial():
	ser = serial.Serial('/dev/cu.usbmodemFD121', 9600)
	return ser

if __name__=="__main__":
	setup_pywu(API_key, location)
	ser = setup_serial()
	while True:
		#condition = current_condition()
		condition = input('Enter condition to send:')
		send_condition(condition)
