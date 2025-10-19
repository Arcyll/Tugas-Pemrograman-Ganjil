//string dalam bahasa C
#include <stdio.h>
#include <cstring>

int main () {
	char kata[15] = "kelas pagi?", kata2[10] = " iya", kata3[15];
	
	int len1, len2;
	
	len1 = strlen (kata); // panjang variabel kata
	len2 = sizeof (kata); // ukuran variabel

	printf("strlen(kata) : %d\n", len1);
	printf("size of(kata) : %d\n", len2);
	printf("char in kata[3]: %c\n", kata[3]);
	printf("char in kata[5]: %c\n", kata[5]); // output spasi
	printf("\n"); // memberi spasi atau jeda
	
	strcpy(kata3, kata); // menyalin kata ke kata3
	printf("kata3 : %s\n", kata3);
	printf("char in kata3[3] : %c\n", kata3[3]);
	strcat(kata, kata2); // menambahkan kata + kata2
	printf("kalimat : %s\n", kata);
	printf("\n");
	
	if (strcmp (kata2, " iya") == 0) { // mengecek apakah sama
		printf("kata2 = iya"); 
	} else printf ("beda");
	
	return 0;
}
