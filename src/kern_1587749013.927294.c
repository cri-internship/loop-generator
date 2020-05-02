#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(32, 32, 32, "ones");
	int *B = create_one_dim_int(65536, "ones");
    clock_t start = clock();

	for (int c = 0; c < 28; c++)
	  for (int b = 0; b < 30; b++)
	    for (int a = 3; a < 30; a++)
	    {
	      
	      B[a]=B[a-3]*18;
	      
	      B[a]=B[a+3]*A[a][b][c];
	      
	      A[a][b][c]=A[a+2][b+2][c+4]-30;
	      
	      B[a]=B[a]-A[a][b][c];
	      A[a][b][c]=B[a-2]-11;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(A, 32, 32, 32);
	deallocate_1d_array(B);
    return 0; 
    }