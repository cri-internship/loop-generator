#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(524288, "ones");
	int ***A = create_three_dim_int(16, 32, 32, "ones");
    clock_t start = clock();

	for (int b = 5; b < 28; b++)
	  for (int a = 4; a < 12; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-5][a-4]+42;
	    
	     A[a][b][a]=A[a+2][b+2][a+2]+B[a];
	    
	     A[a][b][a]=A[a][b][a]*48;
	     B[a]=A[a][b+4][a+4]*49;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_3d_array(A, 16, 32, 32);
    return 0; 
    }