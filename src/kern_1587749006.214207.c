#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(64, 16, 16, "ones");
	int ***C = create_three_dim_int(64, 16, 64, "ones");
	int **A = create_two_dim_int(512, 512, "ones");
	int ***D = create_three_dim_int(64, 32, 16, "ones");
	int *E = create_one_dim_int(262144, "ones");
    clock_t start = clock();

	for (int b = 0; b < 507; b++)
	  for (int a = 0; a < 508; a++)
	  {
	    
	     A[a][b]=C[a][b][a]*E[a];
	     A[a+4][b+5]=B[a][b][a]*D[a][b][a]+D[a][b][a];
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 64, 16, 16);
	deallocate_3d_array(C, 64, 16, 64);
	deallocate_2d_array(A, 512, 512);
	deallocate_3d_array(D, 64, 32, 16);
	deallocate_1d_array(E);
    return 0; 
    }