/*
 * Blocks.h
 *
 *  Created on: Sep 7, 2015
 *      Author: Zach
 */

#ifndef TETRIS_BLOCKS_HPP_
#define TETRIS_BLOCKS_HPP_

#include "Block.h"

class BlockI : public Block {
public:
	BlockI();
	virtual ~BlockI();
};

class BlockO : public Block{
public:
	BlockO();
	virtual ~BlockO();
};

class BlockT : public Block {
public:
	BlockT();
	virtual ~BlockT();
};

class BlockS : public Block {
public:
	BlockS();
	virtual ~BlockS();
};

class BlockZ : public Block {
public:
	BlockZ();
	virtual ~BlockZ();
};

class BlockJ : public Block {
public:
	BlockJ();
	virtual ~BlockJ();
};

class BlockL : public Block {
public:
	BlockL();
	virtual ~BlockL();
};


#endif /* TETRIS_BLOCKS_HPP_ */
