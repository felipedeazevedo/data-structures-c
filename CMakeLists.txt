cmake_minimum_required(VERSION 3.26)
project(c_projects C)

set(CMAKE_C_STANDARD 17)

add_executable(fatorial exercicios-sala/fatorial.c)
add_executable(fatorial_fibonacci exercicios-sala/fatorial_fibonacci.c)
add_executable(arrays exercicios-sala/arrays.c)
add_executable(matrizes exercicios-sala/matrizes.c)