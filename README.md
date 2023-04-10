# Cute 

A creative and fun way to read a source code. 

Cute.cpp 
--------

A cpp program to animate source codes. 

simple, fun and creative way to view source codes. 


How does it work?
-----------------

Cute works using these simple steps 
  
  step 1: cute accepts a command line arguemnts, namely filename and speed (in sec) 
  
         NB: If any error occurs it will give an approperiate message and terminates. 

  step 2: reads the filename and stores it to a variable. 
  
  step 3: it clears the terminal window.
  
  step 4: it animates the stored source code. 
  
  step 5: it terminates. 

How to compile?
---------------
    
    g++ cute.cpp -o cute 
    
How to use it?
--------------

    ./cute file_name speed 
    
file_name : the source code to view 
    
speed : delay in second, e.g 3 , defualt is 6
    
or 
    
first, move the compiled "cute" binary to /bin: 

      sudo mv cute /bin 
      
then, 

    cute file_name speed 

TODO
----
Add a background music using a thread. 
