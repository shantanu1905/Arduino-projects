
    
    
  # wheather station using dht 11 and lcd using arduino
                 components: 1. Arduino UNO Board 
                             2. dht 11
                             3. 20X4 LCD Display 
                             4. 10K Potentiometer 
                             5. Connecting Jumper Wires
                             6. Breadboard
                             7. Transformer 230v - 12v
                             8. IN4001 diodes -4 no
                             9. LM 7805
    
  #POWER SUPPLY
  1.Transformer will supply ac to dc voltage
  2.Diodes are used in bridge rectifier composition to get the DC
  3.LM7805 is used to get controlled 5v supply
                             
 # ultrasonic rangerfinder with 4 digit 7 segment display
                components 1. Arduino uno board 
                           2. TM1637 Seven segment display 
                           3. HC-SR04 (ultrasonic sensor)
                           4. jumper wires
                 Connections see the refered image in ultrasonic rangerfinder with 4 digit 7 segment display folder above .
                 Connection for the ultrasonic sensor;
                 Connect the Vcc to +5V power supply and ground to the ground of the power source
                 Trigg and Echo pins are to connected to any port of arduino as per the your need. These both are the main pins in context to find out the range as our goal is to find the same.
                 
                 Download the following library : NewPing.h and TM1637-master and HC-SR04 library, also provided in folder.    
                 
 # Clock using TM1637 4digit 7segment display without RTC module
                 components 1. Arduino uno board 
                            2. TM1637 Seven segment display 
                            3. jumper wires
                connection: connect  CLK ---> 3(3rd pin of arduino)
                                     DIO ---> 4(4th pin of arduino)
  
                             

