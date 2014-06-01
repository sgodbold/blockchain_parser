#include "include/BlockChain.h"
#include <iostream>
using namespace std;

int main(){
	const char path[] = "/home/raelon/Blockchain/blocks";
	BlockChain *b = createBlockChain(path);

	return 0;
}
