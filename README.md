The minimal elements (https://en.wikipedia.org/wiki/Minimal_element) of the prime numbers (https://en.wikipedia.org/wiki/Prime_number) which are > b written in radix (https://en.wikipedia.org/wiki/Radix) b, with subsequence (https://en.wikipedia.org/wiki/Subsequence) ordering (https://en.wikipedia.org/wiki/Partially_ordered_set), for 2 <= b <= 36 (I stop at base 36 since this base is a maximum base for which it is possible to write the numbers with the symbols 0, 1, ..., 9 and A, B, ..., Z).

By the theorem that there are no infinite (https://en.wikipedia.org/wiki/Infinite_set) antichains (https://en.wikipedia.org/wiki/Antichain) for the subsequence ordering, there must be only finitely such minimal elements in every base b.

This problem is an extension of the original minimal prime problem (https://cs.uwaterloo.ca/~cbright/reports/mepn.pdf) to cover Conjectures ‘R Us Sierpinski/Riesel conjectures base b (http://www.noprimeleftbehind.net/crus/) with k-values < b, i.e. the smallest prime of the form k\*b^n+1 and k*\b^n−1 for all k < b. The original minimal prime base b problem does not cover Conjectures ‘R Us Sierpinski/Riesel conjectures base b with CK < b, since in Riesel side, the prime is not minimal prime in original definition if either k−1 or b−1 (or both) is prime, and in Sierpinski side, the prime is not minimal prime in original definition if k is prime (e.g. 25\*30^34205−1 is not minimal prime in base 30 in original definition, since it is O(T^34205) in base 30, and T (= 29 in decimal) is prime, but it is minimal prime in base 30 if only primes > base are counted), but this extended version of minimal prime base b problem does.

However, including the base (b) itself results in automatic elimination of all possible extension numbers with “0 after 1” from the set (when the base is prime, if the base is composite, then there is no difference to include the base (b) itself or not), which is quite restrictive (since when the base is prime, then the base (b) itself is the only prime ending with 0, i.e. having trailing zero (https://en.wikipedia.org/wiki/Trailing_zero), since in any base, all numbers ending with 0 (i.e. having trailing zero) are divisible by the base (b), thus cannot be prime unless it is equal the base (b), i.e. “10” in base b, note that the numbers cannot have leading zero (https://en.wikipedia.org/wiki/Leading_zero), since typically this is not the way we write numbers (in any base), thus for all primes in our sets (i.e. all primes > base (b)), all zero digits must be “between” other digits).

We have completely solved this problem for bases b = 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 18, 20, 24, also we have completely solved this problem for bases 11, 22, 30 if we allow strong probable primes (https://primes.utm.edu/glossary/xpage/StrongPRP.html) in place of proven primes, besides, for bases 13 and 16, there are unsolved families as well as unproven probable primes, these two bases are completely solved except these four families:

b	unsolved family	search limit of length
13	9{5}	42000
13	A{3}A	41000
16	{3}AF	49000
16	{4}DD	50000

The unproven probable primes are:

b	base-b form of the unproven probable prime	algebraic ((a\*b^n+c)/d) form of the unproven probable prime
11	5(7^62668)	(57×11^62668−7)/10
13	C(5^23755)C	(149×13^23756+79)/12
13	8(0^32017)111	8×13^32020+183
16	D0(B^17804)	(3131×16^17804−11)/15
16	D(B^32234)	(206×16^32234−11)/15

All these numbers are strong probable primes to bases 2, 3, 5, 7, 11, 13, 17, 19, 23, and trial factored (https://primes.utm.edu/glossary/xpage/TrialDivision.html) to 10^11

Condensed table: (the bases 11, 13, 16, 22, 30 data assumes the primality of the probable primes)

b	number of minimal primes base b	base-b form of the largest known minimal prime base b	length of the largest known minimal prime base b	algebraic ((a\*b^n+c)/d) form of the largest known minimal prime base b
2	1	11	2	3
3	3	111	3	13
4	5	221	3	41
5	22	1(0^93)13	96	5^95+8
6	11	40041	5	5209
7	71	(3^16)1	17	(7^17−5)/2
8	75	(4^220)7	221	(4×8^221+17)/7
9	151	3(0^1158)11	1161	3×9^1160+10
10	77	5(0^28)27	31	5×10^30+27
11	1068	5(7^62668)	62669	(57×11^62668−7)/10
12	106	4(0^39)77	42	4×12^41+91
13	3195~3197	8(0^32017)111	32021	8×13^32020+183
14	650	4(D^19698)	19699	5×14^19698−1
15	1284	(7^155)97	157	(15^157+59)/2
16	2345~2347	D(B^32234)	32235	(206×16^32234−11)/15
18	549	C(0^6268)C5	6271	12×18^6270+221
20	3314	G(0^6269)D	6271	16×20^6270+13
22	8003	B(K^22001)5	22003	(251×22^22002−335)/21
24	3409	N00(N^8129)LN	8134	13249×24^8131−49
30	2619	O(T^34205)	34206	25×30^34205−1

References:

https://docs.google.com/document/d/e/2PACX-1vQct6Hx-IkJd5-iIuDuOKkKdw2teGmmHW-P75MPaxqBXB37u0odFBml5rx0PoLa0odTyuW67N_vn96J/pub

https://primes.utm.edu/glossary/xpage/MinimalPrime.html
