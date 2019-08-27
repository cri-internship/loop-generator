#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim(100, 50);
	float *A = create_one_dim(100);
	float ***C = create_three_dim(100, 100, 100);

