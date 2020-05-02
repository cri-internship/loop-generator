#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(512, 512, "zeros");
	int ***B = create_three_dim_int(32, 32, 16, "zeros");
    clock_t start = clock();

	for (int d = 0; d < 14; d++)
	  for (int c = 5; c < 27; c++)
	    for (int b = 2; b < 29; b++)
	      for (int a = 2; a < 29; a++)
	      {
	        
	       A[a][b]=A[a][b-4]-34;
	        
	       A[a][b]=A[a-2][b-5]*9;
	        
	       B[a][b][c]=B[a+3][b+5][c+2]*33;
	        
	       A[a][b]=A[a+5][b+1]*B[a][b][c];
	        
	       A[a][b]=B[a][b][c]+A[a][b];
	       B[a][b][c]=B[a][b+2][c+1]+A[a][b];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 512, 512);
	deallocate_3d_array(B, 32, 32, 16);
    return 0; 
    }