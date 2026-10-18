#ifndef __HEADER_H_
#define __HEADER_H_

enum color {
  WHITE, BLACK
};

enum tile_orientation {
  UP, DOWN
};

enum piece_type {
  PRINCE, QUEEN, ROOK, BISHOP, KNIGHT, PAWN
};

struct Tile {
  enum tile_orientation orientation;
  struct Tile* adj[12];
  struct Piece* piece;
};

struct Piece {
  enum color color;
  enum piece_type type;
  struct Tile* tile;
};

struct Match {
  struct Tile* tiles;
  struct Piece* white_pieces;
  struct Piece* black_pieces;
  enum color turn;
};

#endif
