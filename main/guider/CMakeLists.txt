set(SRC_DIR ${CMAKE_CURRENT_LIST_DIR})

#guider 
file(GLOB_RECURSE GUIDER_SOURCES ${SRC_DIR}/guider/*.c)
list(APPEND ALL_SOURCE_FILES ${GUIDER_SOURCES})

set(SRC_SOURCES)
list(APPEND SRC_SOURCES ${ALL_SOURCE_FILES})

idf_component_register(SRCS 
                    ${SRC_SOURCES}
                    INCLUDE_DIRS 
                    ""        
                    ${SRC_DIR}/guider
                    ${SRC_DIR}/guider/custom
                    ${SRC_DIR}/guider/generated
 
                 
   )