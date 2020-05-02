#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(131072, "random");
	int ***B = create_three_dim_int(64, 32, 64, "random");
	int *D = create_one_dim_int(65536, "random");
	int ***C = create_three_dim_int(64, 64, 16, "random");
    clock_t start = clock();

	for (int b = 0; b < 28; b++)
	  for (int a = 0; a < 59; a++)
	  {
	    
	     A[a]=A[a+1]+D[a]-C[a][b][a]*B[a][b][a];
	    
	     B[a][b][a]=B[a+1][b+4][a]-33;
	    
	     int var_a=A[a]-0;
	     int var_b=A[a]*17;
	    
	     C[a][b][a]=C[a][b][a]-A[a]*A[a];
	     B[a][b][a]=C[a+3][b+1][a+5]+B[a][b][a]-A[a];
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_3d_array(B, 64, 32, 64);
	deallocate_1d_array(D);
	deallocate_3d_array(C, 64, 64, 16);
    return 0; 
    }