file(GLOB AREA_INC ../include/shape/*.h)
message("${AREA_INC}")
file(GLOB AREA_SRC *.cc)
add_library(oopsarea ${AREA_SRC} ${AREA_INC})
