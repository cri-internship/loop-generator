#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(64, 16, 16, "zeros");
	int **A = create_two_dim_int(256, 128, "zeros");
	int **C = create_two_dim_int(512, 128, "zeros");
    clock_t start = clock();

	for (int c = 1; c < 16; c++)
	  for (int b = 2; b < 16; b++)
	    for (int a = 3; a < 64; a++)
	    {
	      
	      B[a][b][c]=8+C[a][b];
	      B[a-3][b-2][c-1]=A[a][b]*C[a][b];
	      
	      A[a][b]=24;
	      A[a+4][b+2]=28;
	      
	      A[a][b]=C[a][b]*6-B[a][b][c];
	      C[a][b]=C[a][b-2]+B[a][b][c];
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 64, 16, 16);
	deallocate_2d_array(A, 256, 128);
	deallocate_2d_array(C, 512, 128);
    return 0; 
    }