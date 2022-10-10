# Project
cmake_minimum_required(VERSION 3.10)
project(Odyssey VERSION 1.0)

# Base directory relative includes
include_directories(.)
include_directories(./src/)

# Flags
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -pedantic -pedantic-errors -Wextra -Wcast-align -Wcast-qual -Wchar-subscripts -Wcomment -Wdisabled-optimization -Wfloat-equal -Wformat -Wformat=2 -Wformat-nonliteral -Wformat-security -Wformat-y2k -Wimport -Winit-self -Winline -Winvalid-pch -Wmissing-braces -Wmissing-field-initializers -Wmissing-format-attribute -Wmissing-include-dirs -Wmissing-noreturn -Wodr -Wpacked -Wparentheses -Wpointer-arith -Wredundant-decls -Wreturn-type -Wsequence-point -Wshadow -Wsign-compare -Wstack-protector -Wstrict-aliasing -Wstrict-aliasing=2 -Wswitch -Wswitch-default -Wswitch-enum -Wtrigraphs -Wuninitialized -Wunknown-pragmas -Wunreachable-code -Wunused -Wunused-function -Wunused-label -Wunused-parameter -Wunused-value -Wunused-variable -Wvariadic-macros -Wvolatile-register-var -Wwrite-strings")
set(CMAKE_CXX_FLAGS_DEBUG "-g")

# Set source files for building the executable odyssey
# Attach additional file names for building in the parenthesis
set(SOURCE_FILES
    src/attackers.cpp
    src/check_evasions.cpp
    src/checkers.cpp
    src/count_moves.cpp
    src/evaluate.cpp
    src/game_phase_score.cpp
    src/get_fen.cpp
    src/is_legal.cpp
    src/king_allowed.cpp
    src/legal_captures.cpp
    src/legal_moves.cpp
    src/legal_noncaptures.cpp
    src/main.cpp
    src/makemove.cpp
    src/movegen.cpp
    src/perft.cpp
    src/piece_square_table.cpp
    src/pinned.cpp
    src/predict_hash.cpp
    src/set_fen.cpp
    src/square_attacked.cpp
    src/undomove.cpp
    src/useful_masks.cpp
    src/valid.cpp
    src/zobrist.cpp
)

# Adding the executable odyssey
add_executable(odyssey ${SOURCE_FILES})

# target_include_directories(odyssey PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/library)
# target_include_directories(odyssey PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/library)
