#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(512, 512, "random");
	int **B = create_two_dim_int(128, 256, "random");
	int ***C = create_three_dim_int(64, 16, 64, "random");
    clock_t start = clock();

	for (int b = 4; b < 16; b++)
	  for (int a = 5; a < 64; a++)
	  {
	    
	     A[a][b]=A[a+2][b+5]+27;
	    
	     B[a][b]=C[a][b][a]-A[a][b];
	     B[a+2][b+5]=A[a][b];
	    
	     int var_a=A[a][b]+8;
	     int var_b=A[a][b+3]-6;
	    
	     A[a][b]=C[a][b][a]-29;
	     B[a][b]=C[a-5][b-4][a-4]*4;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 512, 512);
	deallocate_2d_array(B, 128, 256);
	deallocate_3d_array(C, 64, 16, 64);
    return 0; 
    }