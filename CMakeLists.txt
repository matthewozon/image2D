cmake_minimum_required(VERSION 2.8)

#Configuration du projet
project(main)

#Configuration de l'exécutable
file(
     	GLOB
	source_files
	main.cpp
	threadOperations.cpp
        #*.h *.cpp
)
add_executable(
	main
	${source_files}
)

add_definitions(-std=c++11)
#set_target_properties(main PROPERTIES COMPILE_FLAGS -pthread LINK_FLAGS -pthread)
#set(CMAKE_CXX_FLAGS "-std=c++11")

