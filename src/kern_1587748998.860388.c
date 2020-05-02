#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(262144, "zeros");
	int ***C = create_three_dim_int(32, 64, 32, "zeros");
	int ***A = create_three_dim_int(64, 64, 32, "zeros");
    clock_t start = clock();

	for (int a = 5; a < 59; a++)
	{
	  
	    int var_a=A[a][a][a]-21;
	    int var_b=A[a+5][a+1][a+5]*38;
	  
	    int var_c=A[a][a][a]+21;
	    int var_d=A[a][a+5][a+2]+27;
	  
	    B[a]=B[a]*C[a][a][a];
	    C[a][a][a]=B[a-5]-A[a][a][a]+C[a][a][a];
	  
	    A[a][a][a]=B[a]*C[a][a][a];
	    A[a][a][a]=B[a+3]+A[a][a][a]-C[a][a][a];
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_3d_array(C, 32, 64, 32);
	deallocate_3d_array(A, 64, 64, 32);
    return 0; 
    }