import serial  # 시리얼통신을 위한 pyserial import


def color_change(emotion, power):
    ser = serial.Serial('COM5', 9600)  # 아두이노와 시리얼통신을 위한 포트 연결 및 보드레이트 일치시킴

    while (power):
        if ser.readable():
            if emotion == "ANGRY":
                val = '1'
            elif emotion == "DISGUST":
                val = '2'
            elif emotion == "HAPPY":
                val = '3'
            elif emotion == "FEAR":
                val = '4'
            elif emotion == "NEUTRAL":
                val = '5'
            elif emotion == "SAD":
                val = '6'
            elif emotion == "SURPRISE":
                val = '7'
            val = val.encode('utf-8')
            ser.write(val)  # 아두이노에 시리얼통신으로 val 값 전송

def off():
    ser = serial.Serial('COM5', 9600)  # 아두이노와 시리얼통신을 위한 포트 연결 및 보드레이트 일치시킴
    while (True):
        if ser.readable():
            val = '0'
            val = val.encode('utf-8')
            ser.write(val)  # 아두이노에 시리얼통신으로 val 값 전송
def on():
    ser = serial.Serial('COM5', 9600)  # 아두이노와 시리얼통신을 위한 포트 연결 및 보드레이트 일치시킴
    while (True):
        if ser.readable():
            val = '8'
            val = val.encode('utf-8')
            ser.write(val)  # 아두이노에 시리얼통신으로 val 값 전송