#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(524288, "random");
	int **B = create_two_dim_int(256, 128, "random");
    clock_t start = clock();

	for (int b = 5; b < 125; b++)
	  for (int a = 3; a < 251; a++)
	  {
	    
	     A[a]=A[a+3]+47;
	    
	     A[a]=B[a][b]*A[a];
	     B[a][b]=A[a];
	    
	     B[a][b]=B[a+5][b+3]-48;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_2d_array(B, 256, 128);
    return 0; 
    }