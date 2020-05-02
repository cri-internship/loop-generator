#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(128, 128, "zeros");
	int ***B = create_three_dim_int(16, 32, 16, "zeros");
    clock_t start = clock();

	for (int d = 4; d < 11; d++)
	  for (int c = 3; c < 28; c++)
	    for (int b = 4; b < 14; b++)
	      for (int a = 4; a < 14; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-3][c-4]*42;
	        
	       A[a][b]=50;
	       A[a+1][b+1]=5;
	        
	       A[a][b]=A[a][b]+B[a][b][c];
	       B[a][b][c]=A[a+4][b+1]-B[a][b][c];
	        
	       int var_a=B[a][b][c]-6;
	       int var_b=B[a+2][b+4][c+5]-30;
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 128, 128);
	deallocate_3d_array(B, 16, 32, 16);
    return 0; 
    }