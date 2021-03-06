import serial  # 시리얼통신을 위한 pyserial import
import time


def color_change(emotion):
    ser = serial.Serial('/dev/ttyACM0', 9600)  # 아두이노와 시리얼통신을 위한 포트 연결 및 보드레이트 일치시킴
    count = 0
    while True:
        if count > 2:
            break
        if ser.readable():
            print('color')
            if emotion == "ANGRY":
                val = '1'
            elif emotion == "DISGUST" or emotion == 'DISGUSTED':
                val = '2'
            elif emotion == "HAPPY":
                val = '3'
            elif emotion == "FEAR" or emotion == 'CONFUSED':
                val = '4'
            elif emotion == "NEUTRAL" or emotion == 'CALM':
                val = '5'
            elif emotion == "SAD":
                val = '6'
            elif emotion == "SURPRISE" or emotion == 'SURPRISED':
                val = '7'
            val = val.encode('utf-8')

            print(val)
            ser.write(val)  # 아두이노에 시리얼통신으로 val 값 전송
            time.sleep(0.5)
            count += 1


def off():
    ser = serial.Serial('/dev/ttyACM0', 9600)  # 아두이노와 시리얼통신을 위한 포트 연결 및 보드레이트 일치시킴
    count = 0
    while (True):
        if count > 2:
            break
        if ser.readable():
            print('off')
            val = '0'
            val = val.encode('utf-8')
            ser.write(val)  # 아두이노에 시리얼통신으로 val 값 전송
            time.sleep(0.5)
            count += 1
def on():
    ser = serial.Serial('/dev/ttyACM0', 9600)  # 아두이노와 시리얼통신을 위한 포트 연결 및 보드레이트 일치시킴
    count = 0
    while (True):
        if count > 2:
            break
        if ser.readable():
            print('on')
            val = '8'
            val = val.encode('utf-8')
            ser.write(val)  # 아두이노에 시리얼통신으로 val 값 전송
            time.sleep(0.5)
            count += 1

def emergency():
    ser = serial.Serial('/dev/ttyACM0', 9600)  # 아두이노와 시리얼통신을 위한 포트 연결 및 보드레이트 일치시킴
    count = 0
    while (True):
        if count > 2:
            break
        if ser.readable():
            print('on')
            val = '9'
            val = val.encode('utf-8')
            ser.write(val)  # 아두이노에 시리얼통신으로 val 값 전송
            time.sleep(0.5)
            count += 1



