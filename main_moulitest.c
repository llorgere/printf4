#include "libftprintf.h"
#include <stdio.h>
int		main(void)
{
	char	c;
/*	printf("%.0p, %.p", 0, 0);
	printf("%.5p", 0);
	printf("%2.9p", 1234);
	printf("%2.9p", 1234567);
	printf("%D", LONG_MIN);
	printf("{%05p}", 0);
//	printf("{%05p}", &pointer_valueLargerThanMinWidth_zeroFlag);
*/	printf("%S", L"米");
	printf("%S", L"我是一只猫。");
	printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");	
	printf("a%Sb%sc%S", L"我", "42", L"猫");
//	printf("{%S}", NULL);
//	printf("{%-15Z}", 123);
	printf("%hhC, %hhC", 0, L'米');
	printf("%hhS, %hhS", 0, L"米米");
	printf("%.3%");
	printf("%4.1S", L"Jambon");
	printf("%4.S", L"我是一只猫。");
	printf("%4.15S", L"我是一只猫。");
	printf("%15.4S", L"我是一只猫。");
	printf("%.4S", L"我是一只猫。");
/*	printf("%15.4s", "42 is the answer");
	printf("%ld", LONG_MIN);
	printf("%li", LONG_MIN);
*/	printf("%lc, %lc", L'暖', L'ح');
	printf("%ls, %ls", L"暖炉", L"لحم خنزير");
	printf("%C", L'猫');
	printf("%C", L'δ');
	printf("%C", L'요');
	printf("%C", L'莨');
	printf("%C", L'ي');
/*	printf("%zi", LLONG_MIN);
	printf("%zd", LLONG_MIN);
	printf("% p|%+p", 42, 42);
	printf("{%5p}", 0);
	printf("{%-15p}", 0);
	printf("{%10R}");
*/	printf("{%30S}", L"我是一只猫。");
	printf("{%-30S}", L"我是一只猫。");
	printf("%s %C %d %p %x %% %S", "bonjour ", L'該', 42, &free, 42, L"لحم خنزير");
	printf("%s%d%p%%%S%D%i%o%O%u%U%x%X%c%C","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
/*	printf("%p", 0);
	printf("%.p, %.0p", 0, 0);
	printf("{%05.s}", 0);
	printf("{%05.%}", 0);
	printf("{%05.Z}", 0);
	printf("{%05.S}", L"42 c est cool");
	printf("{% S}", NULL);
*/	return (0);
}
