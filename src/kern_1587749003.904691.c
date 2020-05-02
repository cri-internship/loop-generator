#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(512, 128, "ones");
	int ***E = create_three_dim_int(64, 64, 64, "ones");
	int *A = create_one_dim_int(262144, "ones");
	int *D = create_one_dim_int(65536, "ones");
	int ***B = create_three_dim_int(64, 64, 32, "ones");
    clock_t start = clock();

	for (int c = 3; c < 32; c++)
	  for (int b = 1; b < 62; b++)
	    for (int a = 2; a < 62; a++)
	    {
	      
	      E[a][b][c]=E[a-2][b-1][c-3]+32;
	      
	      int var_a=B[a][b][c]-5;
	      int var_b=B[a+2][b+2][c]+10;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(C, 512, 128);
	deallocate_3d_array(E, 64, 64, 64);
	deallocate_1d_array(A);
	deallocate_1d_array(D);
	deallocate_3d_array(B, 64, 64, 32);
    return 0; 
    }