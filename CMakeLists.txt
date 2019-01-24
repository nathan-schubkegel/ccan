cmake_minimum_required (VERSION 2.6)
project (ccan)

include_directories("../sdl/include")

file(GLOB sources "ccan/charset/*.c")
 
add_library(ccan STATIC ${sources})

