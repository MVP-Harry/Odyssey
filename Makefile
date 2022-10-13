# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/harry/CS/Odyssey

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/harry/CS/Odyssey

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/harry/CS/Odyssey/CMakeFiles /home/harry/CS/Odyssey//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/harry/CS/Odyssey/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named odyssey

# Build rule for target.
odyssey: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 odyssey
.PHONY : odyssey

# fast build rule for target.
odyssey/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/build
.PHONY : odyssey/fast

src/attackers.o: src/attackers.cpp.o
.PHONY : src/attackers.o

# target to build an object file
src/attackers.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/attackers.cpp.o
.PHONY : src/attackers.cpp.o

src/attackers.i: src/attackers.cpp.i
.PHONY : src/attackers.i

# target to preprocess a source file
src/attackers.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/attackers.cpp.i
.PHONY : src/attackers.cpp.i

src/attackers.s: src/attackers.cpp.s
.PHONY : src/attackers.s

# target to generate assembly for a file
src/attackers.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/attackers.cpp.s
.PHONY : src/attackers.cpp.s

src/check_evasions.o: src/check_evasions.cpp.o
.PHONY : src/check_evasions.o

# target to build an object file
src/check_evasions.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/check_evasions.cpp.o
.PHONY : src/check_evasions.cpp.o

src/check_evasions.i: src/check_evasions.cpp.i
.PHONY : src/check_evasions.i

# target to preprocess a source file
src/check_evasions.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/check_evasions.cpp.i
.PHONY : src/check_evasions.cpp.i

src/check_evasions.s: src/check_evasions.cpp.s
.PHONY : src/check_evasions.s

# target to generate assembly for a file
src/check_evasions.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/check_evasions.cpp.s
.PHONY : src/check_evasions.cpp.s

src/checkers.o: src/checkers.cpp.o
.PHONY : src/checkers.o

# target to build an object file
src/checkers.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/checkers.cpp.o
.PHONY : src/checkers.cpp.o

src/checkers.i: src/checkers.cpp.i
.PHONY : src/checkers.i

# target to preprocess a source file
src/checkers.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/checkers.cpp.i
.PHONY : src/checkers.cpp.i

src/checkers.s: src/checkers.cpp.s
.PHONY : src/checkers.s

# target to generate assembly for a file
src/checkers.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/checkers.cpp.s
.PHONY : src/checkers.cpp.s

src/count_moves.o: src/count_moves.cpp.o
.PHONY : src/count_moves.o

# target to build an object file
src/count_moves.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/count_moves.cpp.o
.PHONY : src/count_moves.cpp.o

src/count_moves.i: src/count_moves.cpp.i
.PHONY : src/count_moves.i

# target to preprocess a source file
src/count_moves.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/count_moves.cpp.i
.PHONY : src/count_moves.cpp.i

src/count_moves.s: src/count_moves.cpp.s
.PHONY : src/count_moves.s

# target to generate assembly for a file
src/count_moves.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/count_moves.cpp.s
.PHONY : src/count_moves.cpp.s

src/evaluate.o: src/evaluate.cpp.o
.PHONY : src/evaluate.o

# target to build an object file
src/evaluate.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/evaluate.cpp.o
.PHONY : src/evaluate.cpp.o

src/evaluate.i: src/evaluate.cpp.i
.PHONY : src/evaluate.i

# target to preprocess a source file
src/evaluate.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/evaluate.cpp.i
.PHONY : src/evaluate.cpp.i

src/evaluate.s: src/evaluate.cpp.s
.PHONY : src/evaluate.s

# target to generate assembly for a file
src/evaluate.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/evaluate.cpp.s
.PHONY : src/evaluate.cpp.s

src/game_phase_score.o: src/game_phase_score.cpp.o
.PHONY : src/game_phase_score.o

# target to build an object file
src/game_phase_score.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/game_phase_score.cpp.o
.PHONY : src/game_phase_score.cpp.o

src/game_phase_score.i: src/game_phase_score.cpp.i
.PHONY : src/game_phase_score.i

# target to preprocess a source file
src/game_phase_score.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/game_phase_score.cpp.i
.PHONY : src/game_phase_score.cpp.i

src/game_phase_score.s: src/game_phase_score.cpp.s
.PHONY : src/game_phase_score.s

# target to generate assembly for a file
src/game_phase_score.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/game_phase_score.cpp.s
.PHONY : src/game_phase_score.cpp.s

src/get_fen.o: src/get_fen.cpp.o
.PHONY : src/get_fen.o

# target to build an object file
src/get_fen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/get_fen.cpp.o
.PHONY : src/get_fen.cpp.o

src/get_fen.i: src/get_fen.cpp.i
.PHONY : src/get_fen.i

# target to preprocess a source file
src/get_fen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/get_fen.cpp.i
.PHONY : src/get_fen.cpp.i

src/get_fen.s: src/get_fen.cpp.s
.PHONY : src/get_fen.s

# target to generate assembly for a file
src/get_fen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/get_fen.cpp.s
.PHONY : src/get_fen.cpp.s

src/is_legal.o: src/is_legal.cpp.o
.PHONY : src/is_legal.o

# target to build an object file
src/is_legal.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/is_legal.cpp.o
.PHONY : src/is_legal.cpp.o

src/is_legal.i: src/is_legal.cpp.i
.PHONY : src/is_legal.i

# target to preprocess a source file
src/is_legal.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/is_legal.cpp.i
.PHONY : src/is_legal.cpp.i

src/is_legal.s: src/is_legal.cpp.s
.PHONY : src/is_legal.s

# target to generate assembly for a file
src/is_legal.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/is_legal.cpp.s
.PHONY : src/is_legal.cpp.s

src/king_allowed.o: src/king_allowed.cpp.o
.PHONY : src/king_allowed.o

# target to build an object file
src/king_allowed.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/king_allowed.cpp.o
.PHONY : src/king_allowed.cpp.o

src/king_allowed.i: src/king_allowed.cpp.i
.PHONY : src/king_allowed.i

# target to preprocess a source file
src/king_allowed.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/king_allowed.cpp.i
.PHONY : src/king_allowed.cpp.i

src/king_allowed.s: src/king_allowed.cpp.s
.PHONY : src/king_allowed.s

# target to generate assembly for a file
src/king_allowed.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/king_allowed.cpp.s
.PHONY : src/king_allowed.cpp.s

src/legal_captures.o: src/legal_captures.cpp.o
.PHONY : src/legal_captures.o

# target to build an object file
src/legal_captures.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_captures.cpp.o
.PHONY : src/legal_captures.cpp.o

src/legal_captures.i: src/legal_captures.cpp.i
.PHONY : src/legal_captures.i

# target to preprocess a source file
src/legal_captures.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_captures.cpp.i
.PHONY : src/legal_captures.cpp.i

src/legal_captures.s: src/legal_captures.cpp.s
.PHONY : src/legal_captures.s

# target to generate assembly for a file
src/legal_captures.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_captures.cpp.s
.PHONY : src/legal_captures.cpp.s

src/legal_moves.o: src/legal_moves.cpp.o
.PHONY : src/legal_moves.o

# target to build an object file
src/legal_moves.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_moves.cpp.o
.PHONY : src/legal_moves.cpp.o

src/legal_moves.i: src/legal_moves.cpp.i
.PHONY : src/legal_moves.i

# target to preprocess a source file
src/legal_moves.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_moves.cpp.i
.PHONY : src/legal_moves.cpp.i

src/legal_moves.s: src/legal_moves.cpp.s
.PHONY : src/legal_moves.s

# target to generate assembly for a file
src/legal_moves.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_moves.cpp.s
.PHONY : src/legal_moves.cpp.s

src/legal_noncaptures.o: src/legal_noncaptures.cpp.o
.PHONY : src/legal_noncaptures.o

# target to build an object file
src/legal_noncaptures.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_noncaptures.cpp.o
.PHONY : src/legal_noncaptures.cpp.o

src/legal_noncaptures.i: src/legal_noncaptures.cpp.i
.PHONY : src/legal_noncaptures.i

# target to preprocess a source file
src/legal_noncaptures.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_noncaptures.cpp.i
.PHONY : src/legal_noncaptures.cpp.i

src/legal_noncaptures.s: src/legal_noncaptures.cpp.s
.PHONY : src/legal_noncaptures.s

# target to generate assembly for a file
src/legal_noncaptures.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/legal_noncaptures.cpp.s
.PHONY : src/legal_noncaptures.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/makemove.o: src/makemove.cpp.o
.PHONY : src/makemove.o

# target to build an object file
src/makemove.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/makemove.cpp.o
.PHONY : src/makemove.cpp.o

src/makemove.i: src/makemove.cpp.i
.PHONY : src/makemove.i

# target to preprocess a source file
src/makemove.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/makemove.cpp.i
.PHONY : src/makemove.cpp.i

src/makemove.s: src/makemove.cpp.s
.PHONY : src/makemove.s

# target to generate assembly for a file
src/makemove.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/makemove.cpp.s
.PHONY : src/makemove.cpp.s

src/movegen.o: src/movegen.cpp.o
.PHONY : src/movegen.o

# target to build an object file
src/movegen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/movegen.cpp.o
.PHONY : src/movegen.cpp.o

src/movegen.i: src/movegen.cpp.i
.PHONY : src/movegen.i

# target to preprocess a source file
src/movegen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/movegen.cpp.i
.PHONY : src/movegen.cpp.i

src/movegen.s: src/movegen.cpp.s
.PHONY : src/movegen.s

# target to generate assembly for a file
src/movegen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/movegen.cpp.s
.PHONY : src/movegen.cpp.s

src/perft.o: src/perft.cpp.o
.PHONY : src/perft.o

# target to build an object file
src/perft.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/perft.cpp.o
.PHONY : src/perft.cpp.o

src/perft.i: src/perft.cpp.i
.PHONY : src/perft.i

# target to preprocess a source file
src/perft.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/perft.cpp.i
.PHONY : src/perft.cpp.i

src/perft.s: src/perft.cpp.s
.PHONY : src/perft.s

# target to generate assembly for a file
src/perft.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/perft.cpp.s
.PHONY : src/perft.cpp.s

src/piece_square_table.o: src/piece_square_table.cpp.o
.PHONY : src/piece_square_table.o

# target to build an object file
src/piece_square_table.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/piece_square_table.cpp.o
.PHONY : src/piece_square_table.cpp.o

src/piece_square_table.i: src/piece_square_table.cpp.i
.PHONY : src/piece_square_table.i

# target to preprocess a source file
src/piece_square_table.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/piece_square_table.cpp.i
.PHONY : src/piece_square_table.cpp.i

src/piece_square_table.s: src/piece_square_table.cpp.s
.PHONY : src/piece_square_table.s

# target to generate assembly for a file
src/piece_square_table.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/piece_square_table.cpp.s
.PHONY : src/piece_square_table.cpp.s

src/pinned.o: src/pinned.cpp.o
.PHONY : src/pinned.o

# target to build an object file
src/pinned.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/pinned.cpp.o
.PHONY : src/pinned.cpp.o

src/pinned.i: src/pinned.cpp.i
.PHONY : src/pinned.i

# target to preprocess a source file
src/pinned.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/pinned.cpp.i
.PHONY : src/pinned.cpp.i

src/pinned.s: src/pinned.cpp.s
.PHONY : src/pinned.s

# target to generate assembly for a file
src/pinned.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/pinned.cpp.s
.PHONY : src/pinned.cpp.s

src/predict_hash.o: src/predict_hash.cpp.o
.PHONY : src/predict_hash.o

# target to build an object file
src/predict_hash.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/predict_hash.cpp.o
.PHONY : src/predict_hash.cpp.o

src/predict_hash.i: src/predict_hash.cpp.i
.PHONY : src/predict_hash.i

# target to preprocess a source file
src/predict_hash.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/predict_hash.cpp.i
.PHONY : src/predict_hash.cpp.i

src/predict_hash.s: src/predict_hash.cpp.s
.PHONY : src/predict_hash.s

# target to generate assembly for a file
src/predict_hash.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/predict_hash.cpp.s
.PHONY : src/predict_hash.cpp.s

src/set_fen.o: src/set_fen.cpp.o
.PHONY : src/set_fen.o

# target to build an object file
src/set_fen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/set_fen.cpp.o
.PHONY : src/set_fen.cpp.o

src/set_fen.i: src/set_fen.cpp.i
.PHONY : src/set_fen.i

# target to preprocess a source file
src/set_fen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/set_fen.cpp.i
.PHONY : src/set_fen.cpp.i

src/set_fen.s: src/set_fen.cpp.s
.PHONY : src/set_fen.s

# target to generate assembly for a file
src/set_fen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/set_fen.cpp.s
.PHONY : src/set_fen.cpp.s

src/square_attacked.o: src/square_attacked.cpp.o
.PHONY : src/square_attacked.o

# target to build an object file
src/square_attacked.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/square_attacked.cpp.o
.PHONY : src/square_attacked.cpp.o

src/square_attacked.i: src/square_attacked.cpp.i
.PHONY : src/square_attacked.i

# target to preprocess a source file
src/square_attacked.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/square_attacked.cpp.i
.PHONY : src/square_attacked.cpp.i

src/square_attacked.s: src/square_attacked.cpp.s
.PHONY : src/square_attacked.s

# target to generate assembly for a file
src/square_attacked.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/square_attacked.cpp.s
.PHONY : src/square_attacked.cpp.s

src/undomove.o: src/undomove.cpp.o
.PHONY : src/undomove.o

# target to build an object file
src/undomove.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/undomove.cpp.o
.PHONY : src/undomove.cpp.o

src/undomove.i: src/undomove.cpp.i
.PHONY : src/undomove.i

# target to preprocess a source file
src/undomove.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/undomove.cpp.i
.PHONY : src/undomove.cpp.i

src/undomove.s: src/undomove.cpp.s
.PHONY : src/undomove.s

# target to generate assembly for a file
src/undomove.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/undomove.cpp.s
.PHONY : src/undomove.cpp.s

src/useful_constants.o: src/useful_constants.cpp.o
.PHONY : src/useful_constants.o

# target to build an object file
src/useful_constants.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/useful_constants.cpp.o
.PHONY : src/useful_constants.cpp.o

src/useful_constants.i: src/useful_constants.cpp.i
.PHONY : src/useful_constants.i

# target to preprocess a source file
src/useful_constants.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/useful_constants.cpp.i
.PHONY : src/useful_constants.cpp.i

src/useful_constants.s: src/useful_constants.cpp.s
.PHONY : src/useful_constants.s

# target to generate assembly for a file
src/useful_constants.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/useful_constants.cpp.s
.PHONY : src/useful_constants.cpp.s

src/useful_masks.o: src/useful_masks.cpp.o
.PHONY : src/useful_masks.o

# target to build an object file
src/useful_masks.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/useful_masks.cpp.o
.PHONY : src/useful_masks.cpp.o

src/useful_masks.i: src/useful_masks.cpp.i
.PHONY : src/useful_masks.i

# target to preprocess a source file
src/useful_masks.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/useful_masks.cpp.i
.PHONY : src/useful_masks.cpp.i

src/useful_masks.s: src/useful_masks.cpp.s
.PHONY : src/useful_masks.s

# target to generate assembly for a file
src/useful_masks.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/useful_masks.cpp.s
.PHONY : src/useful_masks.cpp.s

src/valid.o: src/valid.cpp.o
.PHONY : src/valid.o

# target to build an object file
src/valid.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/valid.cpp.o
.PHONY : src/valid.cpp.o

src/valid.i: src/valid.cpp.i
.PHONY : src/valid.i

# target to preprocess a source file
src/valid.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/valid.cpp.i
.PHONY : src/valid.cpp.i

src/valid.s: src/valid.cpp.s
.PHONY : src/valid.s

# target to generate assembly for a file
src/valid.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/valid.cpp.s
.PHONY : src/valid.cpp.s

src/zobrist.o: src/zobrist.cpp.o
.PHONY : src/zobrist.o

# target to build an object file
src/zobrist.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/zobrist.cpp.o
.PHONY : src/zobrist.cpp.o

src/zobrist.i: src/zobrist.cpp.i
.PHONY : src/zobrist.i

# target to preprocess a source file
src/zobrist.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/zobrist.cpp.i
.PHONY : src/zobrist.cpp.i

src/zobrist.s: src/zobrist.cpp.s
.PHONY : src/zobrist.s

# target to generate assembly for a file
src/zobrist.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/odyssey.dir/build.make CMakeFiles/odyssey.dir/src/zobrist.cpp.s
.PHONY : src/zobrist.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... odyssey"
	@echo "... src/attackers.o"
	@echo "... src/attackers.i"
	@echo "... src/attackers.s"
	@echo "... src/check_evasions.o"
	@echo "... src/check_evasions.i"
	@echo "... src/check_evasions.s"
	@echo "... src/checkers.o"
	@echo "... src/checkers.i"
	@echo "... src/checkers.s"
	@echo "... src/count_moves.o"
	@echo "... src/count_moves.i"
	@echo "... src/count_moves.s"
	@echo "... src/evaluate.o"
	@echo "... src/evaluate.i"
	@echo "... src/evaluate.s"
	@echo "... src/game_phase_score.o"
	@echo "... src/game_phase_score.i"
	@echo "... src/game_phase_score.s"
	@echo "... src/get_fen.o"
	@echo "... src/get_fen.i"
	@echo "... src/get_fen.s"
	@echo "... src/is_legal.o"
	@echo "... src/is_legal.i"
	@echo "... src/is_legal.s"
	@echo "... src/king_allowed.o"
	@echo "... src/king_allowed.i"
	@echo "... src/king_allowed.s"
	@echo "... src/legal_captures.o"
	@echo "... src/legal_captures.i"
	@echo "... src/legal_captures.s"
	@echo "... src/legal_moves.o"
	@echo "... src/legal_moves.i"
	@echo "... src/legal_moves.s"
	@echo "... src/legal_noncaptures.o"
	@echo "... src/legal_noncaptures.i"
	@echo "... src/legal_noncaptures.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/makemove.o"
	@echo "... src/makemove.i"
	@echo "... src/makemove.s"
	@echo "... src/movegen.o"
	@echo "... src/movegen.i"
	@echo "... src/movegen.s"
	@echo "... src/perft.o"
	@echo "... src/perft.i"
	@echo "... src/perft.s"
	@echo "... src/piece_square_table.o"
	@echo "... src/piece_square_table.i"
	@echo "... src/piece_square_table.s"
	@echo "... src/pinned.o"
	@echo "... src/pinned.i"
	@echo "... src/pinned.s"
	@echo "... src/predict_hash.o"
	@echo "... src/predict_hash.i"
	@echo "... src/predict_hash.s"
	@echo "... src/set_fen.o"
	@echo "... src/set_fen.i"
	@echo "... src/set_fen.s"
	@echo "... src/square_attacked.o"
	@echo "... src/square_attacked.i"
	@echo "... src/square_attacked.s"
	@echo "... src/undomove.o"
	@echo "... src/undomove.i"
	@echo "... src/undomove.s"
	@echo "... src/useful_constants.o"
	@echo "... src/useful_constants.i"
	@echo "... src/useful_constants.s"
	@echo "... src/useful_masks.o"
	@echo "... src/useful_masks.i"
	@echo "... src/useful_masks.s"
	@echo "... src/valid.o"
	@echo "... src/valid.i"
	@echo "... src/valid.s"
	@echo "... src/zobrist.o"
	@echo "... src/zobrist.i"
	@echo "... src/zobrist.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

