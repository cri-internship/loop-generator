#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(64, 64, 16, "zeros");
	int **B = create_two_dim_int(256, 128, "zeros");
	int ***A = create_three_dim_int(16, 16, 32, "zeros");
    clock_t start = clock();

	for (int d = 4; d < 16; d++)
	  for (int c = 5; c < 16; c++)
	    for (int b = 5; b < 16; b++)
	      for (int a = 5; a < 16; a++)
	      {
	        
	       A[a][b][c]=A[a][b][c-1]+26;
	        
	       B[a][b]=B[a+5][b]+C[a][b][c];
	        
	       C[a][b][c]=24;
	       C[a-4][b-5][c-3]=23;
	        
	       C[a][b][c]=36;
	        
	       C[a][b][c]=A[a][b][c]-B[a][b]*C[a][b][c];
	       A[a][b][c]=A[a-1][b-4][c-1]-C[a][b][c]+B[a][b];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(C, 64, 64, 16);
	deallocate_2d_array(B, 256, 128);
	deallocate_3d_array(A, 16, 16, 32);
    return 0; 
    }