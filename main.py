from flask import Flask, request
from led import led
app = Flask(__name__)

power = False
@app.route('/emotion', methods=['POST'])
def emotion_change():
    global power
    payload = request.get_json()
    emotion = payload['emotion']
    if power:
        led.color_change(emotion, power)
    return 'ok'

@app.route('/pose', methods=['POST'])
def pose_change():
    global power
    payload = request.get_json()
    pose = payload['pose']
    # 전원 on/off
    if pose == 'clap':
        if power:
            power = False
            led.off()
        else:
            power = True
            led.on()
    #elif pose == 'emergency':
    return 'ok'

if __name__ == "__main__":
    app.run(debug=True, host='0.0.0.0', port=4500)

