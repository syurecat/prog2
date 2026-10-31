cmake_minimum_required(VERSION 4.3)

project(prog2 LANGUAGES C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

file(GLOB C_SOURCE_FILES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.c"
)

foreach(SOURCE_FILE IN LISTS C_SOURCE_FILES)
    get_filename_component(TARGET_NAME "${SOURCE_FILE}" NAME_WE)

    add_executable("${TARGET_NAME}"
        "${SOURCE_FILE}"
    )

    set_target_properties("${TARGET_NAME}" PROPERTIES
        FOLDER "Programs"
    )

    if(MSVC)
        target_compile_options("${TARGET_NAME}" PRIVATE
            /W4
            /utf-8
        )
    elseif(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options("${TARGET_NAME}" PRIVATE
            -Wall
            -Wextra
            -Wpedantic
        )
    endif()
endforeach()