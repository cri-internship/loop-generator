#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(131072, "random");
	int ***A = create_three_dim_int(64, 64, 16, "random");
    clock_t start = clock();

	for (int c = 3; c < 11; c++)
	  for (int b = 0; b < 61; b++)
	    for (int a = 2; a < 61; a++)
	    {
	      
	      B[a]=B[a+3]-A[a][b][c];
	      
	      B[a]=B[a+4]*A[a][b][c];
	      
	      A[a][b][c]=A[a+3][b+3][c+5]-B[a];
	      
	      A[a][b][c]=49;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_3d_array(A, 64, 64, 16);
    return 0; 
    }