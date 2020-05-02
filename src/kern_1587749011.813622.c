#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(256, 128, "random");
	int **B = create_two_dim_int(256, 128, "random");
	int **C = create_two_dim_int(512, 512, "random");
    clock_t start = clock();

	for (int d = 3; d < 125; d++)
	  for (int c = 5; c < 251; c++)
	    for (int b = 5; b < 251; b++)
	      for (int a = 5; a < 251; a++)
	      {
	        
	       C[a][b]=C[a-5][b-3]*30;
	        
	       C[a][b]=0;
	        
	       B[a][b]=6;
	       B[a+5][b+3]=A[a][b];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 256, 128);
	deallocate_2d_array(B, 256, 128);
	deallocate_2d_array(C, 512, 512);
    return 0; 
    }