# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles/finalHonor_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/finalHonor_autogen.dir/ParseCache.txt"
  "finalHonor_autogen"
  )
endif()
