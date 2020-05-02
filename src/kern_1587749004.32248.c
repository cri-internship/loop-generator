#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(32, 64, 32, "zeros");
	int **B = create_two_dim_int(512, 256, "zeros");
    clock_t start = clock();

	for (int d = 0; d < 251; d++)
	  for (int c = 0; c < 510; c++)
	    for (int b = 0; b < 510; b++)
	      for (int a = 0; a < 510; a++)
	      {
	        
	       B[a][b]=B[a+2][b+2]*29;
	        
	       B[a][b]=9;
	        
	       A[a][b][c]=B[a][b]*5;
	       B[a][b]=B[a][b+5]*A[a][b][c];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(A, 32, 64, 32);
	deallocate_2d_array(B, 512, 256);
    return 0; 
    }