import processing.serial.*;

Serial myPort;

void setup(){
  size(50,50);
  myPort = new Serial (this, "/dev/ttyUSB0", 9600);
  myPort.bufferUntil('\n');
}

String val ="";
int r = 0;
int g = 0;
int b = 0;

void draw(){
  if ( myPort.available() > 0) {
    val = (myPort.readStringUntil('\n'));
    if (val!=null && val.length()>4){
      r = int(str(val.charAt(2))+str(val.charAt(3))+str(val.charAt(4)));
      g = int(str(val.charAt(8))+str(val.charAt(9))+str(val.charAt(10)));
      b = int(str(val.charAt(14))+str(val.charAt(15))+str(val.charAt(16)));
      println(r, g, b);
      background(r,g,b);
    }
  } 
}
