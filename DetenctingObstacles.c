#pragma config(Sensor, S2,     sonarSensor,         sensorSONAR)


task main()
{
  while (true)
  {
    //Make sure the value is not an error
    if(SensorValue[sonarSensor] > 0)
    {
      if (SensorValue[sonarSensor] <= 7) {
        //there is something within the threshold range
        motor[motorB] = -50;
        motor[motorC] = 50;
        wait1Msec(800);
        } else {
        //nothing in the threshold range
        motor[motorB] = 50;
        motor[motorC] = 50;
      }
    }
  }
}
