# MQ9-arduino

Simple C++ header for working with mq9 module to calculate ppm of gas
For more info:
1)https://lastminuteengineers.com/mq2-gas-senser-arduino-tutorial/

2)http://www.wermac.org/safety/safety_what_is_lel_and_uel.html

library for measuring mq9 gas values in this function
 
 this library includes  function:
        
       this library includes  function:
       
          1)inits()----> for serial begin or anything you want to describe
            
          2)calibrate()------> for calibrating sensor RL resistor inside the MQ-9 should be on for 24-48Hours
              
          3)getValue(bool printing,char gasName, double *output) ------> get values of sensor and measure gas in ppm this function have 3 input 
                 1)bool printing: for printing values
                                                                                                          2)char gasname : the gas name value which want get values 
                                                                                                                     it includes: 
                                                                                                                              'L': for LPG
                                                                                                                              'C': for CO
                                                                                                                              'H': for CH4
                                                                                                         3)double output : values return inside it should be in size of 3
          4)thrValue(char gasName,int threshold)  ------> this function is defined for thresholding define threshold for specific gas name and it returns true or false ****gas name are same with number 2-2
               
         5)printData(float data)  ------> this function is used for printing data it $%$ if your compiler is not arduino change as u want
               
         6)readADC(int pin)   ------> this function is used for reading adc values $%$ if your compiler is not arduino change as u want
  
         7)thrNvalue(int threshold) -----> this function use adc as threshold
  
 the chart inside MQ-x sensors are used 
 this chart is log chart and values are captured from them 
