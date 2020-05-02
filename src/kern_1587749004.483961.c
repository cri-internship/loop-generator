#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(131072, "random");
	int ***A = create_three_dim_int(64, 64, 32, "random");
    clock_t start = clock();

	for (int b = 2; b < 60; b++)
	  for (int a = 5; a < 59; a++)
	  {
	    
	     B[a]=B[a-5]-34;
	    
	     A[a][b][a]=A[a+5][b+4][a+1]-14;
	    
	     A[a][b][a]=A[a+3][b+1][a+2]-8;
	    
	     B[a]=10;
	    
	     int var_a=A[a][b][a]+44;
	     int var_b=A[a-5][b-2][a-1]-41;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_3d_array(A, 64, 64, 32);
    return 0; 
    }