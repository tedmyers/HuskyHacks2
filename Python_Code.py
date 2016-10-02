'''
Python code will go here
1. Poll wunderground API
2. Parse this data for relevant information (current and tomorrow's weather)
3. Send this address over a serial FTDI connection to Arduino
'''

import os

location = 'Boston MA'
API_key = "09a921928db449a7"
command = "pywu fetch %s %s" % (location, API_key)
os.system(command)

f = os.popen('pywu current condition')
current_condition = f.read()
print current_condition,
