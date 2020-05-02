#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(128, 512, "ones");
	int ***B = create_three_dim_int(32, 32, 64, "ones");
	int **A = create_two_dim_int(256, 256, "ones");
    clock_t start = clock();

	for (int b = 4; b < 32; b++)
	  for (int a = 5; a < 32; a++)
	  {
	    
	     A[a][b]=A[a+4][b+2]*36;
	    
	     C[a][b]=C[a+2][b+1]+35;
	    
	     B[a][b][a]=41;
	     B[a][b][a]=27;
	    
	     A[a][b]=30;
	    
	     int var_a=A[a][b]*24;
	     int var_b=A[a-2][b-3]-49;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(C, 128, 512);
	deallocate_3d_array(B, 32, 32, 64);
	deallocate_2d_array(A, 256, 256);
    return 0; 
    }