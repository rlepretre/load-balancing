from flask import request, Flask
import os 
import json


app1 = Flask(__name__)



@app1.route('/mandelbrot')
def mandelbrot():
    real = str(request.args.get('real', default = 1, type = float))
    imag = str(request.args.get('imag', default = 1, type = float))
    stream = os.popen("./getIter " + real + " " + imag) 
    output = stream.read()
    max_steps = request.args.get('max_steps', default = 1, type = int)

    return 'Iter = ' + output


if __name__ == '__main__':
   app1.run(debug=True, host='0.0.0.0')


