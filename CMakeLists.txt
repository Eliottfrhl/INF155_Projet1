cmake_minimum_required(VERSION 3.20)
project(Projet1_LibraireImage C)

set(CMAKE_C_STANDARD 11)

set(PROJECT_HEADERS
        src/image/bitmap.h
        src/tableau/tableau1d.h
        src/tableau/tableau2d.h
        src/image/noyau_filtre.h
)

set(PROJECT_SOURCES
        src/main.c
        src/image/bitmap.c
        src/tableau/tableau1d.c
        src/tableau/tableau2d.c
        src/image/noyau_filtre.c
        src/image/image_gris.c
)


add_executable(Projet1_LibraireImage ${PROJECT_SOURCES} ${PROJECT_HEADERS})
