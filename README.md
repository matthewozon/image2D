# image2D


This library aims to provide a simple way to manipulate 2D matrices/images. Operation such as addition, substraction... selection of a subpart, SVD, eigen decomposition... forms the core of the code that is developped. 

it uses two external libraries/ code:
  - CImg: for reading images, but it is warpped in a class so that it is easy to use (http://cimg.eu/)
  - the standard library thread (http://en.cppreference.com/w/cpp/thread/thread) and a layer develloped by the git user progschj (https://github.com/progschj/ThreadPool)
  - 
  
NOTE:
  - compiling: among others, you need to specify that you use c++11, pthread (for unix like system) and cimg (unless you are using only the matrix class)
  
