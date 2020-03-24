from flask import request, Flask
import json


app1 = Flask(__name__)
@app1.route('/halfOp')
def halfOp():
    x = int(request.args.get('x', 1))
    return json.dumps({'x': x * 0.5})



@app1.route('/')
def hello_world():
    return 'Hello halfOp'


if __name__ == '__main__':
   app1.run(debug=True, host='0.0.0.0')


