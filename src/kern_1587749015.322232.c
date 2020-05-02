#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(16, 64, 16, "ones");
	int *C = create_one_dim_int(524288, "ones");
	int **A = create_two_dim_int(128, 256, "ones");
    clock_t start = clock();

	for (int d = 0; d < 14; d++)
	  for (int c = 4; c < 61; c++)
	    for (int b = 2; b < 16; b++)
	      for (int a = 2; a < 16; a++)
	      {
	        
	       B[a][b][c]=B[a][b-3][c]*C[a]-A[a][b];
	        
	       A[a][b]=A[a-2][b-4]*40;
	        
	       C[a]=C[a+4]-10;
	        
	       B[a][b][c]=B[a][b+3][c+2]+A[a][b]*C[a];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 16, 64, 16);
	deallocate_1d_array(C);
	deallocate_2d_array(A, 128, 256);
    return 0; 
    }