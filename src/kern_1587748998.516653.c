#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(262144, "random");
	int **D = create_two_dim_int(256, 256, "random");
	int ***A = create_three_dim_int(16, 64, 64, "random");
	int ***B = create_three_dim_int(64, 16, 64, "random");
	int **E = create_two_dim_int(128, 512, "random");
    clock_t start = clock();

	for (int a = 0; a < 11; a++)
	{
	  
	    D[a][a]=42;
	    D[a+4][a+4]=38;
	  
	    int var_a=A[a][a][a]*43;
	    int var_b=A[a+4][a+5][a]+22;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(C);
	deallocate_2d_array(D, 256, 256);
	deallocate_3d_array(A, 16, 64, 64);
	deallocate_3d_array(B, 64, 16, 64);
	deallocate_2d_array(E, 128, 512);
    return 0; 
    }