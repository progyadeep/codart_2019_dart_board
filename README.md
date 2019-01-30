# Codart 2019 electronic Dart Board

<h3>What is Codart?</h3>  
it is an annual programming competition organized by <a href="https://acmvit.in">ACM VIT Student chapter</a> where participants are given questions to solve based on the score they earn on the dart board - the higher the score, the easier the question and vice versa.  
<br/>  
<h3>This repository...</h3>  
...contains the circuit designs and source codes that the <b>electronic dart board</b> was made using.  
<br/>  
<h3>electronic DART BOARD?</h3>  
it is a (somewhat) regular dartboard with sensors fitted on it that will detect which region the dart hit. The sensors are connected to an <b>Arduino UNO</b> microcontroller that receives the input from the sensors and accordingly sends a message to the <b>serial communication stream</b>. A <b>Python code</b> receives this data through the stream and sends the data to a server (locally hosted on the same computer) that serves the questions to the participants to their computers that are connected to this server through LAN/WIFI.
