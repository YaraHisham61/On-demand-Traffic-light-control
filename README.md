# On-demand-Traffic-light-control
The second project in Egypt FWD Embedded Systems Professional Nanodegree Program

###System Description
This system has two modes: normal mode & pedestrian mode. Pedestrian mode is on when the 
pedestrian button is pressed. In normal mode, the red light is always on for pedestrian but for cars, the 
green light is initially on then the yellow light for cars blinks then red light is on for cars. In pedestrian 
mode, as soon as the button is pressed the yellow light for both cars & pedestrian blinks then green light 
is on for pedestrian and red light is on for cars after that the yellow light for both cars & pedestrian 
blinks again then we are back to the normal mode

###Videos
User story 1 : As a pedestrian when I will make a short press on the crosswalk button while the cars green light is on and pedestrian red light is off, I will wait for the yellow lights to blink for five seconds then the cars red light is on and pededstrian green light is on for five seconds, so that I can cross the street

User story 2 : As a pedestrian when I will make a short press on the crosswalk button while the cars yellow light is blinking and pedestrian red light is on, I will wait for all yellow lights to blink for five seconds then the cars red light is on and pededstrian green light is on for five seconds, so that I can cross the street

User story 3 : As a pedestrian when I will make a short press on the crosswalk button while the cars red light is on and pedestrian green light is on, I expect nothing to be done

User story 4 : As a pedestrian when I made a long press on the crosswalk button, I expect nothing to be done.

User story 5 : As a pedestrian when I made a double press on the crosswalk button, I expect that the first press will do the action and nothing to be done after the second press.
