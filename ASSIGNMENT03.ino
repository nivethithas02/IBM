import RPi.GPI0 as GPI0
import time
GPI0.setmode(GPI0.BOARD)
GPI0.setup(7,GPI0.OUT)
GPI0.setup(11,GPI0.OUT)
GPIO.setup(13,GPI0.OUT)
GPI0.setup(15,GPI0.IN,pull_up_down_=GPI0.UP)
def turn_on(pin,seconds):
    GPI0.output(pin.GPI0.HIGH)
    time.sleep(seconds)
def turn_off(pin,seconds):
    GPI0.output(pin.GPI0.LOW)
    time.sleep(seconds)
try:
    while True:
        button_state=GPI0.input(15)
        if button_state==True:
            turn_on(13,2)
            turn_off(13,.1)
            turn_on(7,4)
            turn_off(7,.1)
            turn_on(11,1)
            turn_off(11,.1)
         else:
             if button_state==False:
                 GPI0.output(7,GPI0.LOW)
                 GPI0.output(11,GPI0.LOW)
                 GPI0.output(13,GPI0.LOW)
                 time.sleep(.1)
except KeywordInterrupt:
    GPI0.cleanup()
    print("TRAFFIC LIGHT SEQUENCE DONE")
            
your doing in you repo ,but actually u need to do this on ibm repo to clarify 
mail me : smartwaste.ccet@gmail.com
