# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\chris_code_for_wordle_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\chris_code_for_wordle_autogen.dir\\ParseCache.txt"
  "chris_code_for_wordle_autogen"
  )
endif()
