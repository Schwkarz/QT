# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "001_autogen"
  "CMakeFiles\\001_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\001_autogen.dir\\ParseCache.txt"
  )
endif()