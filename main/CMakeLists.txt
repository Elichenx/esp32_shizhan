set(SRC_DIR ${CMAKE_CURRENT_LIST_DIR})


#guider 
file(GLOB_RECURSE GUIDER_GENERATED_SOURCES ${SRC_DIR}/guider/generated/*.c)
list(APPEND ALL_SOURCE_FILES ${GUIDER_GENERATED_SOURCES})

#guider 
file(GLOB_RECURSE GUIDER_CUSTOM_SOURCES ${SRC_DIR}/guider/custom/*.c)
list(APPEND ALL_SOURCE_FILES ${GUIDER_CUSTOM_SOURCES})

#BSP
file(GLOB_RECURSE BSP_GENERAL_SOURCES ${SRC_DIR}/bsp/general/*.c)
list(APPEND ALL_SOURCE_FILES ${BSP_GENERAL_SOURCES})

#BSP
file(GLOB_RECURSE BSP_SOURCES ${SRC_DIR}/bsp/*.c)
list(APPEND ALL_SOURCE_FILES ${BSP_SOURCES})

#ROOT
file(GLOB_RECURSE ROOT_SOURCES ${SRC_DIR}/*.c)
list(APPEND ALL_SOURCE_FILES ${ROOT_SOURCES})

set(SRC_SOURCES)
list(APPEND SRC_SOURCES ${ALL_SOURCE_FILES})

idf_component_register(SRCS 
                    ${SRC_SOURCES}
                    INCLUDE_DIRS 
                    ""        
                    ${SRC_DIR}/guider
                    ${SRC_DIR}/guider/custom
                    ${SRC_DIR}/guider/generated
                    ${SRC_DIR}/bsp
                    ${SRC_DIR}/bsp/general
                    ${SRC_DIR}/bsp/inc
   )


