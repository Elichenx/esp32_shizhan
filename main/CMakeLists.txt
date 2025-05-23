file(GLOB_RECURSE SRC_UI  "guider/*.c")

idf_component_register(SRCS "esp32_s3_szp.c" "main.c" ${SRC_UI}
                    INCLUDE_DIRS "." "guider" "guider/generated" "guider/custom")

