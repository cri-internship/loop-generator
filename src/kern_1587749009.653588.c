#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(256, 256, "random");
	int ***A = create_three_dim_int(16, 32, 16, "random");
	int **C = create_two_dim_int(256, 128, "random");
    clock_t start = clock();

	for (int a = 5; a < 12; a++)
	{
	  
	    C[a][a]=C[a-3][a-5]+45;
	  
	    C[a][a]=C[a+2][a+5]-19+B[a][a];
	  
	    A[a][a][a]=A[a+2][a+1][a+2]-45;
	  
	    A[a][a][a]=C[a][a]-B[a][a];
	  
	    int var_a=C[a][a]+25;
	    int var_b=C[a][a-3]+14;
	  
	    A[a][a][a]=A[a][a][a]*C[a][a]+9;
	    B[a][a]=A[a-5][a-1][a-5]+B[a][a]*C[a][a];
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(B, 256, 256);
	deallocate_3d_array(A, 16, 32, 16);
	deallocate_2d_array(C, 256, 128);
    return 0; 
    }