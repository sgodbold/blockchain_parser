# Build complete parser
BlockChain : main.cpp src/BlockChain.cpp include/BlockChain.h
	g++ main.cpp src/BlockChain.cpp include/BlockChain.h -o BlockChain
	./BlockChain
