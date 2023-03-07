 # Load balancing project - Mandelbrot Set
#### Description : 

The GUI folder holds a javascripts client application that sends HTTPS requests to an Nginx server. These requests send x and y coordinate and expect a number of iterations. Depending on the amount of iterations for an x-y pair, it will plot a heatmap. This will draw the Mandelbrot set. 

The nginx folder holds the Dockerfile and configuration file for the nginx server tasked with balancing the request load to the 2 Flask servers.

Finally, app1 and app2 folders are identical and contain the Flask server code as well as the C source code meant to do the heavy computing.

#### How to use :
 - To launch the APP, just open a terminal, go inside the unzipped folder, at the same level with docker-compose.yml, and execute : docker-compose up
 - This will spin up the dockerised architecture. After that, you need to open a browser and tape : http://localhost:8080
 - It will redirect 60% traffic to app1 and 40% traffic to app2.
 - To quit, you can just CTRL + C in the terminal and it will stop the application and destroy the created containers.
 

