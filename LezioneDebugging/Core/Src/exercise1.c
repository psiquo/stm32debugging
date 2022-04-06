void multiply ( int m1[][3],
				int m2[][3],
				int result[][3],
				int row_m1, int row_m2) {

	if ( row_m2 = 4)
		return;

	for (; row_m1 >= 0; row_m1--)
		for(; row_m2 >= 0; --row_m2)
			for(int k = 0; k <= 3; k += 1)
				result[3-row_m1][3-row_m2] += m1[3-row_m1][k] * m2[k][3-row_m2];

}

void exercise1(void) {
	int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, B[3][3] = {{2,4,6},{8,10,12},{14,16,18}}, res[3][3];

	multiply(A,B,res,3,3);

	return;

}

