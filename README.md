A Prime Game:

Write down a prime number > 10, and I can always strike out 0 or more digits to get a prime in this list:

{11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027}

Now we extend this prime game to bases other than 10.

The minimal elements (https://en.wikipedia.org/wiki/Minimal_element) of the prime numbers (https://en.wikipedia.org/wiki/Prime_number) which are > b written in the positional numeral system (https://en.wikipedia.org/wiki/Positional_numeral_system) with radix (https://en.wikipedia.org/wiki/Radix) b, as strings (https://en.wikipedia.org/wiki/String_(computer_science)) with subsequence (https://en.wikipedia.org/wiki/Subsequence) ordering (https://en.wikipedia.org/wiki/Partially_ordered_set), for 2 <= b <= 36 (I stop at base 36 since this base is a maximum base for which it is possible to write the numbers with the symbols 0, 1, ..., 9 and A, B, ..., Z).

By the theorem that there are no infinite (https://en.wikipedia.org/wiki/Infinite_set) antichains (https://en.wikipedia.org/wiki/Antichain) for the subsequence ordering, there must be only finitely such minimal elements in every base b.

This problem is an extension of the original minimal prime problem (https://cs.uwaterloo.ca/~cbright/reports/mepn.pdf) to cover Conjectures ‘R Us Sierpinski/Riesel conjectures base b (http://www.noprimeleftbehind.net/crus/) with k-values < b, i.e. the smallest prime of the form k×b^n+1 and k×b^n−1 for all k < b. The original minimal prime base b problem does not cover Conjectures ‘R Us Sierpinski/Riesel conjectures base b with conjectured k (http://www.noprimeleftbehind.net/crus/tab/CRUS_tab.htm) < b, since in Riesel side, the prime is not minimal prime in original definition if either k−1 or b−1 (or both) is prime, and in Sierpinski side, the prime is not minimal prime in original definition if k is prime (e.g. 25×30^34205−1 is not minimal prime in base 30 in original definition, since it is O(T^34205) in base 30, and T (= 29 in decimal) is prime, but it is minimal prime in base 30 if only primes > base are counted), but this extended version of minimal prime base b problem does.

However, including the base (b) itself results in automatic elimination of all possible extension numbers with “0 after 1” from the set (when the base is prime, if the base is composite, then there is no difference to include the base (b) itself or not), which is quite restrictive (since when the base is prime, then the base (b) itself is the only prime ending with 0, i.e. having trailing zero (https://en.wikipedia.org/wiki/Trailing_zero), since in any base, all numbers ending with 0 (i.e. having trailing zero) are divisible by the base (b), thus cannot be prime unless it is equal the base (b), i.e. “10” in base b, note that the numbers cannot have leading zero (https://en.wikipedia.org/wiki/Leading_zero), since typically this is not the way we write numbers (in any base), thus for all primes in our sets (i.e. all primes > base (b)), all zero digits must be “between” other digits).

This problem covers finding the smallest prime of these form in the same base b:

(b^n−1)/(b−1) with n >= 2 (see http://www.fermatquotient.com/PrimSerien/GenRepu.txt, https://web.archive.org/web/20021111141203/http://www.users.globalnet.co.uk/~aads/primes.html, http://www.primenumbers.net/Henri/us/MersFermus.htm, https://www.ams.org/journals/mcom/1993-61-204/S0025-5718-1993-1185243-9/S0025-5718-1993-1185243-9.pdf, https://oeis.org/A084740, https://oeis.org/A084738, https://oeis.org/A065854, https://oeis.org/A279068, https://oeis.org/A128164, https://oeis.org/A285642)

b^n+1 with n >= 1 (see http://jeppesn.dk/generalized-fermat.html, http://www.noprimeleftbehind.net/crus/GFN-primes.htm, http://yves.gallot.pagesperso-orange.fr/primes/results.html, https://oeis.org/A228101, https://oeis.org/A079706, https://oeis.org/A084712, https://oeis.org/A123669)

(b^n+1)/2 (for odd b) with n >= 2 (see http://www.fermatquotient.com/PrimSerien/GenFermOdd.txt)

2×b^n+1 with n >= 1 (see https://mersenneforum.org/showthread.php?t=6918, https://mersenneforum.org/showthread.php?t=19725, https://oeis.org/A119624, https://oeis.org/A253178, https://oeis.org/A098872)

2×b^n−1 with n >= 1 (see https://mersenneforum.org/showthread.php?t=24576, https://www.mersenneforum.org/attachment.php?attachmentid=20976&d=1567314217, https://oeis.org/A119591, https://oeis.org/A098873)

b^n+2 with n >= 1 (see https://oeis.org/A138066, https://oeis.org/A084713, https://oeis.org/A138067)

b^n−2 with n >= 2 (see https://www.primepuzzles.net/puzzles/puzz_887.htm, https://oeis.org/A250200, https://oeis.org/A255707, https://oeis.org/A084714, https://oeis.org/A292201)

(b−1)×b^n+1 with n >= 1 (see https://www.rieselprime.de/ziki/Williams_prime_MP_least, https://www.rieselprime.de/ziki/Williams_prime_MP_table, https://sites.google.com/view/williams-primes, http://www.bitman.name/math/table/477, https://oeis.org/A305531, https://oeis.org/A087139)

(b−1)×b^n−1 with n >= 1 (see https://sites.google.com/view/williams-primes, https://www.rieselprime.de/ziki/Williams_prime_MM_least, https://www.rieselprime.de/ziki/Williams_prime_MM_table, https://sites.google.com/view/williams-primes, http://matwbn.icm.edu.pl/ksiazki/aa/aa39/aa3912.pdf, https://www.ams.org/journals/mcom/2000-69-232/S0025-5718-00-01212-6/S0025-5718-00-01212-6.pdf, http://www.bitman.name/math/table/484, https://oeis.org/A122396)

b^n+(b−1) with n >= 1 (see https://sites.google.com/view/williams-primes, https://oeis.org/A076845, https://oeis.org/A076846, https://oeis.org/A078178, https://oeis.org/A078179)

b^n−(b−1) with n >= 2 (see https://sites.google.com/view/williams-primes, https://cs.uwaterloo.ca/journals/JIS/VOL3/mccranie.html, http://www.bitman.name/math/table/435, https://oeis.org/A113516, https://oeis.org/A343589)

k×b^n+1 for all k <= 12 with n >= 1 (see https://www.rieselprime.de/ziki/Proth_prime_small_bases_least_n, https://mersenneforum.org/showthread.php?t=10354)

k×b^n−1 for all k <= 12 with n >= 1 (see https://www.rieselprime.de/ziki/Riesel_prime_small_bases_least_n, https://mersenneforum.org/showthread.php?t=10354)

Some families can be proven to contain no primes > b, by covering congruence (http://irvinemclean.com/maths/siercvr.htm), algebraic factorization (https://en.wikipedia.org/wiki/Factorization_of_polynomials), or combine of them, e.g.

b	family	why this family contain no primes > b

10	4{6}9	always divisible by 7

6	4{0}1	always divisible by 5

15	9{6}8	always divisible by 11

9	5{1}	always divisible by some element of {2,5}

11	2{5}	always divisible by some element of {2,3}

14	B{0}1	always divisible by some element of {3,5}

8	6{4}7	always divisible by some element of {3,5,13}

13	3{0}95	always divisible by some element of {5,7,17}

16	{4}D	always divisible by some element of {3,7,13}

16	{8}F	always divisible by some element of {3,7,13}

9	{1}	difference-of-squares factorization

8	1{0}1	sum-of-cubes factorization

9	3{8}	difference-of-squares factorization

16	8{F}	difference-of-squares factorization

16	{F}7	difference-of-squares factorization

9	3{1}	difference-of-squares factorization

16	{4}1	difference-of-squares factorization

16	1{5}	difference-of-squares factorization

16	{C}D	Aurifeuillian factorization of x^4+4\*y^4

16	B{4}1	difference-of-squares factorization

14	8{D}	combine of factor 5 and difference-of-squares factorization

12	{B}9B	combine of factor 13 and difference-of-squares factorization

14	{D}5	combine of factor 5 and difference-of-squares factorization

17	1{9}	combine of factor 2 and difference-of-squares factorization

17	7{9}	combine of factor 2 and difference-of-squares factorization

19	1{6}	combine of factor 5 and difference-of-squares factorization

19	89{6}	combine of factor 5 and difference-of-squares factorization

24	3{N}	combine of factor 5 and difference-of-squares factorization

24	5{N}	combine of factor 5 and difference-of-squares factorization

24	{N}LN	combine of factor 5 and difference-of-squares factorization

We have completely solved this problem for bases b = 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 18, 20, 24, also we have completely solved this problem for bases 11, 22, 30 if we allow strong probable primes (https://primes.utm.edu/glossary/xpage/StrongPRP.html) in place of proven primes, besides, we have completely solved this problem for bases 13 and 16 (if we allow strong probable primes in place of proven primes) except these four families:

b	unsolved family (base-b form)	unsolved family (algebraic ((a\*b^n+c)/d) form)	current search limit of length

13	9{5}	(113×13^n−5)/12	42000

13	A{3}A	(41×13^(n+1)+27)/4	41000

16	{3}AF	(16^(n+2)+619)/5	49000

If these four families contain primes (and they are excepted to contain primes), then the smallest prime in families 9{5} and A{3}A in base b = 13 will be index 3196 and 3197 minimal prime in base b = 13, and the smallest prime in families {3}AF in base b = 16 will be index 2347 minimal prime in base b = 16.

The unproven probable primes are:

b	index of this minimal prime in base b (assuming the primality of all probable primes in base b)	base-b form of the unproven probable prime	algebraic ((a\*b^n+c)/d) form of the unproven probable prime

11	1068	5(7^62668)	(57×11^62668−7)/10

13	3194	C(5^23755)C	(149×13^23756+79)/12

13	3195	8(0^32017)111	8×13^32020+183

16	2345	D(B^32234)	(206×16^32234−11)/15

16	2346	(4^72785)DD	(4×16^72787+2291)/15

22	8003	B(K^22001)5	(251×22^22002−335)/21

30	2618	I(0^24608)D	18×30^24609+13

All these numbers are strong probable primes (https://en.wikipedia.org/wiki/Strong_pseudoprime) to bases 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, and strong Lucas probable primes (https://en.wikipedia.org/wiki/Lucas_pseudoprime#Strong_Lucas_pseudoprimes) with parameters (P, Q) defined by Selfridge's Method A (see https://oeis.org/A217255), and trial factored (https://primes.utm.edu/glossary/xpage/TrialDivision.html) to 10^16 (thus, all these numbers are Baillie–PSW probable primes (https://en.wikipedia.org/wiki/Baillie%E2%80%93PSW_primality_test))

Primality certificates (https://primes.utm.edu/glossary/xpage/Certificate.html) for large proven primes (> 10^3000):

b	index of this minimal prime in base b	base-b form of the minimal prime	algebraic ((a\*b^n+c)/d) form of the minimal prime	primality certificate for the minimal prime

13	3190	177(0^2703)17	267×13^2705+20	http://factordb.com/cert.php?id=1100000003590430825

13	3191	39(0^6266)1	48×13^6267+1	proven prime by N−1 test (https://primes.utm.edu/prove/prove3_1.html), since N−1 is trivially 100% factored

13	3192	B(0^6540)BBA	11×13^6543+2012	http://factordb.com/cert.php?id=1100000002616382906

13	3193	(C^10631)92	13^10633−50	http://factordb.com/cert.php?id=1100000003590493750

14	650	4(D^19698)	5×14^19698−1	proven prime by N+1 test (https://primes.utm.edu/prove/prove3_2.html), since N+1 is trivially 100% factored

16	2342	9(0^3542)91	9×16^3544+145	http://factordb.com/cert.php?id=1100000000633424191

16	2343	5B(C^3700)D	(459×16^3701+1)/5	http://factordb.com/cert.php?id=1100000000993764322

16	2344	D0(B^17804)	(3131×16^17804−11)/15	http://factordb.com/cert.php?id=1100000003589278511

18	549	C(0^6268)C5	12×18^6270+221	http://factordb.com/cert.php?id=1100000003590442437

20	3313	C(D^2449)	(241×20^2449−13)/19	http://factordb.com/cert.php?id=1100000002325393915

20	3314	G(0^6269)D	16×20^6270+13	http://factordb.com/cert.php?id=1100000003590539457

22	8001	(L^2385)KE7	22^2388−653	http://factordb.com/cert.php?id=1100000003591360774

22	8002	(7^3815)2L	(22^3817−289)/3	http://factordb.com/cert.php?id=1100000003591359839

24	3405	(N^2644)LLN	24^2647−1201	http://factordb.com/cert.php?id=1100000003593270089

24	3406	(D^2698)LD	(13×24^2700+4403)/23	http://factordb.com/cert.php?id=1100000003593269876

24	3407	A(0^2951)8ID	10×24^2954+5053	http://factordb.com/cert.php?id=1100000003593269654

24	3408	88(N^5951)	201×24^5951−1	proven prime by N+1 test (https://primes.utm.edu/prove/prove3_2.html), since N+1 is trivially 100% factored

24	3409	N00(N^8129)LN	13249×24^8131−49	http://factordb.com/cert.php?id=1100000003593391606

30	2617	(5^4882)J	(5×30^4883+401)/29	http://factordb.com/cert.php?id=1100000002327649423

30	2619	O(T^34205)	25×30^34205−1	proven prime by N+1 test (https://primes.utm.edu/prove/prove3_2.html), since N+1 is trivially 100% factored

Condensed table: (the bases 11, 13, 16, 17, 22, 30, 36 data assumes the primality of the probable primes)

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

13	3195\~3197	8(0^32017)111	32021	8×13^32020+183

14	650	4(D^19698)	19699	5×14^19698−1

15	1284	(7^155)97	157	(15^157+59)/2

16	2346\~2347	(4^72785)DD	72787	(4×16^72787+2291)/15

17	10403\~10428	34(7^16074)	16076	(887×17^16074−7)/16

18	549	C(0^6268)C5	6271	12×18^6270+221

20	3314	G(0^6269)D	6271	16×20^6270+13

22	8003	B(K^22001)5	22003	(251×22^22002−335)/21

24	3409	N00(N^8129)LN	8134	13249×24^8131−49

30	2619	O(T^34205)	34206	25×30^34205−1

36	35256\~35263	(J^10117)LJ	10119	(19×36^10119+2501)/35

References:

https://docs.google.com/document/d/e/2PACX-1vQct6Hx-IkJd5-iIuDuOKkKdw2teGmmHW-P75MPaxqBXB37u0odFBml5rx0PoLa0odTyuW67N_vn96J/pub

https://primes.utm.edu/glossary/xpage/MinimalPrime.html
