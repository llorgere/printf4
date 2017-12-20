#include "libftprintf.h"
#include <stdio.h>
int		main(void)
{
	char	c;
	assert_printf("%.0p, %.p", 0, 0);
	assert_printf("%.5p", 0);
	assert_printf("%2.9p", 1234);
	assert_printf("%2.9p", 1234567);
	assert_printf("%D", LONG_MIN);
	assert_printf("{%05p}", 0);
	assert_printf("{%05p}", &pointer_valueLargerThanMinWidth_zeroFlag);
	assert_printf("%S", L"米");
	assert_printf("%S", L"我是一只猫。");
	assert_printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	assert_printf("a%Sb%sc%S", L"我", "42", L"猫");
	assert_printf("{%S}", NULL);
	assert_printf("{%-15Z}", 123);
	assert_printf("%hhC, %hhC", 0, L'米');
	assert_printf("%hhS, %hhS", 0, L"米米");
	assert_printf("%.3%");
	assert_printf("%4.1S", L"Jambon");
	assert_printf("%4.S", L"我是一只猫。");
	assert_printf("%4.15S", L"我是一只猫。");
	assert_printf("%15.4S", L"我是一只猫。");
	assert_printf("%.4S", L"我是一只猫。");
	assert_printf("%15.4s", "42 is the answer");
	assert_printf("%ld", LONG_MIN);
	assert_printf("%li", LONG_MIN);
	assert_printf("%lc, %lc", L'暖', L'ح');
	assert_printf("%ls, %ls", L"暖炉", L"لحم خنزير");
	assert_printf("%C", L'猫');
	assert_printf("%C", L'δ');
	assert_printf("%C", L'요');
	assert_printf("%C", L'莨');
	assert_printf("%C", L'ي');
	assert_printf("%zi", LLONG_MIN);
	assert_printf("%zd", LLONG_MIN);
	assert_printf("% p|%+p", 42, 42);
	assert_printf("{%5p}", 0);
	assert_printf("{%-15p}", 0);
	assert_printf("{%10R}");
	assert_printf("{%30S}", L"我是一只猫。");
	assert_printf("{%-30S}", L"我是一只猫。");
	assert_printf("%s %C %d %p %x %% %S", "bonjour ", L'該', 42, &free, 42, L"لحم خنزير");
	assert_printf("%s%d%p%%%S%D%i%o%O%u%U%x%X%c%C","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
	assert_printf("%p", 0);
	assert_printf("%.p, %.0p", 0, 0);
	assert_printf("{%05.s}", 0);
	assert_printf("{%05.%}", 0);
	assert_printf("{%05.Z}", 0);
	assert_printf("{%05.S}", L"42 c est cool");
	assert_printf("{% S}", NULL);
	return (0);
}
