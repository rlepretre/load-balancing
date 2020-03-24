from flask import request, Flask
import json

app2 = Flask(__name__)
@app2.route('/doubleOp')
def doubleOp():
    x = int(request.args.get('x', 1))
    return json.dumps({'x': x * 2})


@app2.route('/')
def hello_world():
    return 'Hello doubleOp'


if __name__ == '__main__':
   app2.run(debug=True, host='0.0.0.0')
