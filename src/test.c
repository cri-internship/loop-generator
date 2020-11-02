#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"
#include "../pips_lib/define_script.h"


int main(int argc, const char* argv[])
{
    srand(time(NULL));
        
	float ***A = create_three_dim_float(32, 32, 32, "random");
	float ***B = create_three_dim_float(32, 32, 32, "random");
    clock_t start = clock();

	for (int i = 0; i < 32; i++)
	    for (int j = 0; j < 32; j++)
	        for (int k = 0; k < 32; k++)
	        {
	            A[k][j][i]=A[k][j][i];
	            B[k][j][i]=B[k][j][i];
	        }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(A, 32, 32, 32);
	deallocate_3d_array(B, 32, 32, 32);
    return 0; 
}