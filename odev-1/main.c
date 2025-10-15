#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
    char c1, c2;  
    int s1 , s2 , toplam;

    printf("Birinci rakami giriniz (0-9): ");  
    scanf(" %c", &c1) ;  
    
    s1 = c1 - '0'; //ASCII'den sayýsal bir deðere dönüþtürülüyor
    
    if (s1 < 0 || s1 > 9 ) {     // Eðer sonuc istenilen aralýkta olmazsa hata veriliyor.
    	printf("Hata: Rakam Secilmedi Tekrar Deneyiniz \n ") ;       
    	
    system("pause"); // Ekranýn direk kapanmamasý için stop komudu gibi düþünelibilir.
    return 1;  
	}
    
    printf("Ýkinci rakami giriniz (0-9): ");   //Ýkinci rakama da aynýsýný yapýyoruz 
    scanf(" %c", &c2) ; 
    
    
    s2 = c2 - '0';
    
    if ( s2 < 0 || s2 > 9 ) { 
    printf("Hata: Rakam Secilmedi Tekrar Deneyiniz \n") ;       
    
    system("pause");
    return 1;  // bir hata ile sonlandý anlamýna gelmektedir. 
   }
    
	toplam = s1 + s2; 
	
	if (toplam > 9) { // toplam ortaya çýkan sonuç 9 dan büyükse hata vericek

	    printf("Sonuc tek haneli deðil. Tekrar Deneyiniz : (%d) \n", toplam) ; 
	} else {
	    char sonuc = toplam + '0' ; // burada tekrar karaktere çeviriyoruz ve ekrana yazdýrýyoruz
	    printf("Sonuc : %c\n" , sonuc ) ;	        
    }
 
    system("pause");
	return 0;
}
	

