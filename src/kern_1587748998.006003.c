#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(16, 16, 16, "zeros");
	int *A = create_one_dim_int(262144, "zeros");
    clock_t start = clock();

	for (int c = 3; c < 14; c++)
	  for (int b = 3; b < 11; b++)
	    for (int a = 3; a < 13; a++)
	    {
	      
	      A[a]=A[a+2]*B[a][b][c];
	      
	      B[a][b][c]=1;
	      B[a-3][b-3][c-3]=A[a];
	      
	      B[a][b][c]=12;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 16, 16, 16);
	deallocate_1d_array(A);
    return 0; 
    }