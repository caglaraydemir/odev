/**
 * Bu kod BMT103 dersi uyglumasında
 * 23181616751 Nolu
 * Çağlar Aydemir Tarafından yazılmıştır.
 * **/

#include <stdio.h>
int main() {
   // Birinci Boşluğa şubenizi ikinci boşluğa adınızı ve soyadınızı yazın.
   printf("Ben A1 şubesinden Çaglar Aydemir \n");
   // Aşağıdaki satırları yorumlayınız.
   // Burada 65 değerinin desimal karşılğı yazılcak. 
   printf("Çıktı: %d\n", 65);
   // Burada 65 değerinin octal değeri yazılacak.
   printf("Çıktı: %o\n", 65);
   // Burada 0101 (octal) değerinin desimal karşılığı yazılacak.
   printf("Çıktı: %d\n", 0101);  
   // Burada 65 (desimal) değerinin hexadesimal karşılığı yazılacak.
   printf("Çıktı: %X\n", 65);
   // Burada 0X41(hexadesimal) değerinin desimal karşılığı yazılacak.
   printf("Çıktı: %d\n", 0X41);
   // Burada -65  değerinin tam sayı karşılığı yazılmayacak çünkü %u işaretsiz sayılar için kullanılır.
   printf("Çıktı: %u\n",-65);  
   // Burada 65.5 değerinin float karşılığı yazılacak.
   printf("Çıktı: %f\n",65.5);  
   // Burada 65.5  değerinin bilimsel karşılığı yazılacak.
   printf("Çıktı: %e\n", 65.5);  
   // Burada 65.5 değerinin en uygun değeri yazılacak
   printf("Çıktı: %g\n", 65.5);  
   // Burada 65 değerinin ASCII tablosundaki karşılığı yazılacak.
   printf("Çıktı: %c\n", 65);
   // Burada A değerinin ASCII tablosundaki desimal değeri yazılacak.
   printf("Çıktı: %d\n", 'A');
   return 0 ;
}
