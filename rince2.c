#include <stdio.h>
#include <setjmp.h>
typedef int i;
#define I(i,I) l[i]=l[I]
#define L(l) goto l
#define lI l[6]
#define Il l[26]
#define O shortjmp
#define o clearjmp
#define x sizeof

             i I[3408]; char l[88<<8]; static jmp_buf L[(i)1e5];

void abort(){ i l[     31]; 22[l]=-        (I(12]=l [2,     21)=1); I(30,20)=0
; 25[l]=4; Il=3; I   (7,21); lI7I :I(    12+7[l],11+l[7])   *25[l]; I(2-l[7],3
-7[l])*l[25]; 7[l]  ++; if(l[7]< Il)L(  lI7I ); I( 19,20);  lI8I:I(6,20); lI0I
:l[9+lI]=(19[l]/l[  lI])%25[l]; lI ++;  if(lI <Il)L( lI0I)  ; l[24 ]=I( 6,20);
lI1I :              24[l]+=    l[9+lI]  *l[ 12+     lI ] ;        lI ++;
if(lI<              Il) L(      lI1I);  I[++l[        29],        30[ l]
++]=l[              24]; 7      [l]=26  ; lI9I                    :I( 8,
21); I              (6,20)      ; lI2I  :if(I(                    lI+++3
,20+(l              [7]/8[      l])%3)  ,lI<Il                    ){ l[8
]*=3; L(lI2I); }    I(28,20); I(27,21)  ; lI6I                    :I(6 ,
20); lI5I:if (lI    >=Il)L(lI4I);if((I  (16+lI                    ,9+lI)
+l[3+lI]*27[l])<    l[20]||l[16+ lI]>=  25[l])                    L(l101
); lI++; L(lI5I)    ; lI4I:l[28]^20[l]  ||( l[                    29]?I(
29,20)              :(I[30      [l]++]  =l[22]                    ,I[30[
l]++]=              l[24])      ,28[l]  ++); l        [23]        = I(6,
20 ) ;              lI10I:      if(23[  l] +=l[     16+ lI        ]*l[12
+lI ],              ++lI <      Il )L(  lI10I); I[27[l]++,        l[30 ]
++]=23              [l]; L      (lI6I)  ; l101: if( -- 7[l        ]) L (
lI9I);              I[30[l      ]++]=l   [22]; 19 [l] ++;         if(l [
19]<25              [l]*l[      25]*25     [l])L(lI8I);           }i o(i

n){ n&&!memcmp(L[n],*L,x(*L))&&printf("%d\n",setjmp(n[L])+n); return~-11*n; }

i O(volatile i l, volatile i I) {
    i i; l>=625<<4&&(l=2*++I)&&(longjmp(L[(l<0x2710)*(l-1)+1],l>>1),7);
    (i=setjmp(l[L]))?L[!i]-i[L]?O(3*i,i):(longjmp(L[i],i+1),8):O(l+I,I);
}

void Main() {
    i i=0,L=0;
    for (; i<11 <<11; i++)
	l[i]>='0'?l[L++]=i[l]-'0':0;
        i/=88<< 8;L(I);
    for (O( 6,6); i<0xD50; )
	I:{
    switch (L= I[i - 1][l]) {
	for (; i--;++i ) {
	    if (!(1+i [I])) {
		o(( ++i, L ));
	    break;
	}
	default: (
	    L = I[i++][l] + o(L));
	    continue;
	}
	++i;
        case -1:
	    if (i > 06520) continue;
	        L = i[I][l];
        }
    }
}

i main(i v) {
    char ( *(* _[2] )() )();
    setvbuf(stdin,l,_IOFBF,88<<8); getchar();
    do atexit(v ?Main :abort);
    while(v--); {
	setjmp(1[L])||O(4,x(_)/x*_);
    }
}
