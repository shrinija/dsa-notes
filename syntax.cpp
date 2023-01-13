//................................................................................................................................
//random number

Function prototype: int rand (void);
Parameters: none
Return value: An integer value between 0 and RAND_MAX.
Description: The rand () function generates the next random number in the sequence. 
The number generated is the pseudo-random integer between 0 and RAND_MAX. RAND_MAX is a constant in the header <cstdlib> generally set to value 32767.

  //see how to print random number
  
  for (int count=1; count <= 100; ++count)
    {
        cout << rand() << "\t";
  
        // display 5 random numbers per row
        if (count % 5 == 0)
            cout << "\n";
     }

//C++ program given below displays the first five random numbers between 0 and 1.
cout<<"Random numbers generated between 0 and 1:"<<endl;
 
    for (int i = 0; i < 5; i++) 
    {
        cout << (float) rand()/RAND_MAX << endl;
    }
  
//........................................................................................................................................
