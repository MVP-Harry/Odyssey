# Odyssey (Chess Engine)

## Updated 10/14/22

Odyssey is a chess engine written in c++, and is the successor of [Ophelia](https://github.com/MVP-Harry/Ophelia).

### Functionality
* Estimated engine strength (ELO) is *1870*
    * Based on a special set of puzzles designed by Hubert Bednorz and Fred Toennissen to measure a chess engine's tactical ability
    * See "Chess Engine Strength Estimate.pdf" for details on Odyssey's performance in solving the puzzles
* Capable of analyzing a position given by the Forsyth–Edwards Notation (FEN)

### Technical Details
* There are four essential parts to Odyssey: board representation, move generation, evaluation function, and search/pruning algorithms
* See "Technical Specifications.pdf" for details on how Odyssey is built

### Future Improvements
* Add a multi-layer neural network evaluation function in addition to the hand-crafted evaluation
* Add an opening book/endgame tablebase specifically designed for those game phases
* Add the Universal Chess Interface to Odyssey, so it can be connected to a GUI

## License
MIT License
