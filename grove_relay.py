import grovepi

relay0 = 5
relay1 = 6
relay2 = 7
relay3 = 8

grovepi.pinMode(relay0,"OUTPUT")
grovepi.pinMode(relay1,"OUTPUT")
grovepi.pinMode(relay2,"OUTPUT")
grovepi.pinMode(relay3,"OUTPUT")

grovepi.digitalWrite(relay0,0)
grovepi.digitalWrite(relay1,0)
grovepi.digitalWrite(relay2,0)
grovepi.digitalWrite(relay3,0)

print ("on")
