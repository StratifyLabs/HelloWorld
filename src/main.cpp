
#include <cstdio>
#include <sapi/sys.hpp>


int main(int argc, char * argv[]){
	Cli cli(argc, argv);
	cli.set_publisher("Stratify Labs, Inc");
	cli.handle_version();
	printf("Hello World\n");
	return 0;
}
