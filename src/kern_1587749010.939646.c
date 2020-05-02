#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(32, 64, 64, "random");
	int ***A = create_three_dim_int(32, 16, 32, "random");
    clock_t start = clock();

	for (int c = 4; c < 32; c++)
	  for (int b = 1; b < 16; b++)
	    for (int a = 3; a < 27; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-1][c-4]+25;
	      
	      B[a][b][c]=B[a+5][b+1][c+1]-21;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 32, 64, 64);
	deallocate_3d_array(A, 32, 16, 32);
    return 0; 
    }