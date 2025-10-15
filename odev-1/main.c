#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
    char c1, c2;  
    int s1 , s2 , toplam;

    printf("Birinci rakami giriniz (0-9): ");  
    scanf(" %c", &c1) ;  
    
    s1 = c1 - '0'; //ASCII'den say�sal bir de�ere d�n��t�r�l�yor
    
    if (s1 < 0 || s1 > 9 ) {     // E�er sonuc istenilen aral�kta olmazsa hata veriliyor.
    	printf("Hata: Rakam Secilmedi Tekrar Deneyiniz \n ") ;       
    	
    system("pause"); // Ekran�n direk kapanmamas� i�in stop komudu gibi d���nelibilir.
    return 1;  
	}
    
    printf("�kinci rakami giriniz (0-9): ");   //�kinci rakama da ayn�s�n� yap�yoruz 
    scanf(" %c", &c2) ; 
    
    
    s2 = c2 - '0';
    
    if ( s2 < 0 || s2 > 9 ) { 
    printf("Hata: Rakam Secilmedi Tekrar Deneyiniz \n") ;       
    
    system("pause");
    return 1;  // bir hata ile sonland� anlam�na gelmektedir. 
   }
    
	toplam = s1 + s2; 
	
	if (toplam > 9) { // toplam ortaya ��kan sonu� 9 dan b�y�kse hata vericek

	    printf("Sonuc tek haneli de�il. Tekrar Deneyiniz : (%d) \n", toplam) ; 
	} else {
	    char sonuc = toplam + '0' ; // burada tekrar karaktere �eviriyoruz ve ekrana yazd�r�yoruz
	    printf("Sonuc : %c\n" , sonuc ) ;	        
    }
 
    system("pause");
	return 0;
}
	

