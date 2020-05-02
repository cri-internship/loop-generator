#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(64, 64, 64, "zeros");
	int **B = create_two_dim_int(256, 128, "zeros");
    clock_t start = clock();

	for (int c = 2; c < 59; c++)
	  for (int b = 3; b < 62; b++)
	    for (int a = 5; a < 62; a++)
	    {
	      
	      B[a][b]=B[a-4][b-3]*2;
	      
	      A[a][b][c]=B[a][b];
	      A[a-5][b-2][c-2]=B[a][b];
	      
	      A[a][b][c]=B[a][b];
	      
	      A[a][b][c]=B[a][b]*A[a][b][c];
	      B[a][b]=B[a-3][b-1]+1;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(A, 64, 64, 64);
	deallocate_2d_array(B, 256, 128);
    return 0; 
    }