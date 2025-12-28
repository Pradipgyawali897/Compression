cmake_minimum_required(VERSION 3.10)
project(Huffman LANGUAGES C)
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/MinheapNode
    ${CMAKE_CURRENT_SOURCE_DIR}/Node
)

set(SOURCES
    Huffman.c
    MinheapNode/services.c
    Node/services.c
)

add_executable(huffman ${SOURCES})
