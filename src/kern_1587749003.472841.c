#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(512, 256, "random");
    clock_t start = clock();

	for (int c = 5; c < 252; c++)
	  for (int b = 4; b < 512; b++)
	    for (int a = 4; a < 512; a++)
	    {
	      
	      A[a][b]=A[a][b+4]*19;
	      
	      int var_a=A[a][b]*30;
	      int var_b=A[a-4][b-5]+18;
	      
	      int var_c=A[a][b]*48;
	      int var_d=A[a][b-3]*35;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 512, 256);
    return 0; 
    }