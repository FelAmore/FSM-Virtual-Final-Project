# Three Digits Combination Lock FSM
This is a three digit combination lock system with "365" as the password. At the first state, if the number inputted is 3, it will move to the second state, else return to the starting state. At the second state, if the number inputted is 6, it will move to the third state, else return to the starting state. At the third state, if the number inputted is 5, the lock will be openned, else return to the starting state. After that, any number inputted will bring the system back to the starting state.

## FSM Model
Ps: 3 : 011; 
    6 : 110; 
    5 : 101
![Space N = 1000](images/fsm.png)

## State and Transition Table
Here's the state and transition table derived from the diagram above
![Space N = 1000](images/truth-table.png)

## Karnaugh Map
Here are the K-map for the next states and output
#### -S0
![Space N = 1000](images/kmap-s0.png)
#### -S1
![Space N = 1000](images/kmap-s1.png)
#### -Output
![Space N = 1000](images/kmap-o.png)

## Combinatorial Boolean Equations from Kmap
Here are the equations formed from each K-map above
#### -S0
![Space N = 1000](images/optimizedS0.png)

#### -S1
![Space N = 1000](images/optimizedS1.png)

#### -Output
![Space N = 1000](images/optimizedo.png)

## System Simulation in C
![Space N = 1000](images/visualization.gif)
