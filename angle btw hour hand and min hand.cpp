//Given two numbers, hour and minutes. Return the smaller angle (in degrees) formed between the hour and the minute hand.

class Solution {
public:
    double angleClock(int hour, int minutes) {
        // if(hour==12){
        //     hour=1;
        // }
         double hour_angle = 0.5 * ((hour * 60 )+ minutes);  
    double minute_angle = 6 * minutes;  
         double angle = abs(hour_angle - minute_angle);  
    angle = min(360 - angle, angle);  
  
    return angle;  
    }
};
