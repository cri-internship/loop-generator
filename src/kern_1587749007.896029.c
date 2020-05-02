#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(65536, "ones");
	int **E = create_two_dim_int(512, 128, "ones");
	int **B = create_two_dim_int(128, 512, "ones");
	int ***D = create_three_dim_int(64, 64, 16, "ones");
	int **A = create_two_dim_int(512, 256, "ones");
    clock_t start = clock();

	for (int d = 0; d < 123; d++)
	  for (int c = 0; c < 508; c++)
	    for (int b = 0; b < 508; b++)
	      for (int a = 0; a < 508; a++)
	      {
	        
	       C[a]=C[a+2]+46;
	        
	       E[a][b]=E[a+4][b+5]+C[a]-A[a][b]*D[a][b][c];
	        
	       D[a][b][c]=C[a]+E[a][b]*B[a][b]-E[a][b]-A[a][b];
	       B[a][b]=C[a+3]-E[a][b]*D[a][b][c];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(C);
	deallocate_2d_array(E, 512, 128);
	deallocate_2d_array(B, 128, 512);
	deallocate_3d_array(D, 64, 64, 16);
	deallocate_2d_array(A, 512, 256);
    return 0; 
    }