/*Program : DispMatrix3x3.c
* Deskripsi : Menampilkan papan permainan 3x3.
* Nama : Fadhil Muhammad
* tanggal/ versi : 19 - januari - 2021 / 1
*/

void disp_matrix_3X3()
{ 
	int i;

	for(i=0;i<3;i++){
		printf("             |     |      \n");
		printf("          %c  |  %c  |  %c  \n",matrix[i][0],matrix[i][1],matrix[i][2]);
		if(i!=2)
			printf("        ----- ----- -----\n");
	}
	printf("\n\n");
}