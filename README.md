A Prime Game:

Write down a multidigit prime number (i.e. a prime number > 10), and I can always strike out 0 or more digits to get a prime in this list:

{11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027}

e.g.

Write down the prime 149, I can delete the digit 4, to get the prime 19

Write down the prime 439, I can delete the digit 9, to get the prime 43

Write down the prime 857, I can delete zero digits, to get the prime 857

Write down the prime 2081, I can delete the digit 0, to get the prime 281

Write down the largest known double Mersenne prime 170141183460469231731687303715884105727 (2<sup>127</sup>−1) --> I can delete all digits except the third-leftmost 1 and the second-rightmost 3, to get the prime 13

Write down the largest known Fermat prime 65537 --> I can delete the 6 and the 3, to get the prime 557 (also I can choose to delete the 6 and two 5's, to get the prime 37) (also I can choose to delete two 5's and the 3, to get the prime 67) (also I can choose to delete the 6, one 5, and the 7, to get the prime 53)

Write down the famous repunit prime 1111111111111111111 (with 19 1's) --> I can delete 17 1's, to get the prime 11

Write down the prime 1000000000000000000000000000000000000000000000000000000000007 (which is the next prime after 10<sup>60</sup>) --> I can delete all 0's, to get the prime 17

Write down the prime 95801 --> I can delete the 9, to get the prime 5801

Write down the prime 946969 --> I can delete the first 9 and two 6's, to get the prime 499

Write down the prime 90000000581 --> I can delete five 0's, the 5, and the 8, to get the prime 9001

Write down the prime 8555555555555555555551 --> I can delete the 8 and nine 5's, to get the prime 555555555551

Now we extend this prime game to bases other than 10.

The minimal elements (https://en.wikipedia.org/wiki/Minimal_element) (https://mathworld.wolfram.com/MaximalElement.html for maximal element, the dual of minimal element, unfortunely there is no article "minimal element" in mathworld, a minimal element of a set under a partial ordering (https://en.wikipedia.org/wiki/Partially_ordered_set, https://mathworld.wolfram.com/PartialOrder.html) binary relation (https://en.wikipedia.org/wiki/Binary_relation, https://mathworld.wolfram.com/BinaryRelation.html) is a maximal element of the same set under its converse relation (https://en.wikipedia.org/wiki/Converse_relation), a converse relation of a partial ordering relation must also be a partial ordering relation) of the prime numbers (https://en.wikipedia.org/wiki/Prime_number, https://primes.utm.edu/glossary/xpage/Prime.html, https://www.rieselprime.de/ziki/Prime, https://mathworld.wolfram.com/PrimeNumber.html) which are > b written in the positional numeral system (https://en.wikipedia.org/wiki/Positional_numeral_system) with radix (https://en.wikipedia.org/wiki/Radix, https://primes.utm.edu/glossary/xpage/Radix.html, https://www.rieselprime.de/ziki/Base) *b*, as digit (https://en.wikipedia.org/wiki/Numerical_digit, https://www.rieselprime.de/ziki/Digit, https://mathworld.wolfram.com/Digit.html) strings (https://en.wikipedia.org/wiki/String_(computer_science), https://mathworld.wolfram.com/String.html) with subsequence (https://en.wikipedia.org/wiki/Subsequence, https://mathworld.wolfram.com/Subsequence.html) ordering (https://en.wikipedia.org/wiki/Partially_ordered_set, https://mathworld.wolfram.com/PartialOrder.html), for 2 <= *b* <= 36 (I stop at base 36 since this base is a maximum base for which it is possible to write the numbers with the symbols 0, 1, ..., 9 and A, B, ..., Z), using A−Z to represent digit values 10 to 35.

By the theorem that there are no infinite (https://en.wikipedia.org/wiki/Infinite_set, https://primes.utm.edu/glossary/xpage/Infinite.html, https://mathworld.wolfram.com/InfiniteSet.html) antichains (https://en.wikipedia.org/wiki/Antichain, https://mathworld.wolfram.com/Antichain.html) (i.e. a subset of a partially ordered set such that any two distinct elements in the subset are incomparable (https://en.wikipedia.org/wiki/Comparability, https://mathworld.wolfram.com/ComparableElements.html)) for the subsequence ordering, there must be only finitely such minimal elements in every base *b*.

This problem is an extension of the original minimal prime problem (https://cs.uwaterloo.ca/~cbright/reports/mepn.pdf, https://cs.uwaterloo.ca/~shallit/Papers/br10.pdf, https://cs.uwaterloo.ca/~cbright/talks/minimal-slides.pdf, https://doi.org/10.1080/10586458.2015.1064048, https://scholar.colorado.edu/downloads/hh63sw661) to cover Conjectures ‘R Us Sierpinski/Riesel conjectures base *b* (http://www.noprimeleftbehind.net/crus/Sierp-conjectures.htm, http://www.noprimeleftbehind.net/crus/Sierp-conjectures-powers2.htm, http://www.noprimeleftbehind.net/crus/Riesel-conjectures.htm, http://www.noprimeleftbehind.net/crus/Riesel-conjectures-powers2.htm) with *k*-values < *b*, i.e. finding the smallest prime of the form *k*×*b*<sup>*n*</sup>+1 and *k*×*b*<sup>*n*</sup>−1 (or proving that such prime does not exist) for all *k* < *b* (also to cover dual (http://www.kurims.kyoto-u.ac.jp/EMIS/journals/INTEGERS/papers/i61/i61.pdf, https://www.rechenkraft.net/wiki/Five_or_Bust, https://oeis.org/A076336/a076336c.html, http://www.mit.edu/~kenta/three/prime/dual-sierpinski/ezgxggdm/dualsierp-excerpt.txt, https://mersenneforum.org/showthread.php?t=10761, https://mersenneforum.org/showthread.php?t=6545) Sierpinski/Riesel conjectures base *b* with *k*-values < *b*, i.e. finding the smallest prime of the form *b*<sup>*n*</sup>+*k* and *b*<sup>*n*</sup>−*k* (which are the dual forms of *k*×*b*<sup>*n*</sup>+1 and *k*×*b*<sup>*n*</sup>−1, respectively) (or proving that such prime does not exist) for all *k* < *b*) (also to cover finding the smallest prime of some classic forms (or proving that such prime does not exist), such as b^n+2, b^n−2, b^n+(b−1), b^n−(b−1), 2×b^n+1, 2×b^n−1, (b−1)×b^n+1, (b−1)×b^n−1, for the same base b). The original minimal prime base b problem does not cover Conjectures ‘R Us Sierpinski/Riesel conjectures base b with conjectured k (http://www.noprimeleftbehind.net/crus/tab/CRUS_tab.htm, http://www.noprimeleftbehind.net/crus/vstats_new/crus-stats.htm, http://www.noprimeleftbehind.net/crus/vstats/all_ck_sierpinski.txt, http://www.noprimeleftbehind.net/crus/vstats/all_ck_riesel.txt) < b, since in Riesel side, the prime is not minimal prime in original definition if either k−1 or b−1 (or both) is prime, and in Sierpinski side, the prime is not minimal prime in original definition if k is prime (e.g. 25×30^34205−1 is not minimal prime in base 30 in original definition, since it is O(T^34205) in base 30, and T (= 29 in decimal) is prime, but it is minimal prime in base 30 if only primes > base are counted), but this extended version of minimal prime base b problem does.

However, including the base (b) itself results in automatic elimination of all possible extension numbers with “0 after 1” from the set (when the base is prime, if the base is composite, then there is no difference to include the base (b) itself or not), which is quite restrictive (since when the base is prime, then the base (b) itself is the only prime ending with 0, i.e. having trailing zero (https://en.wikipedia.org/wiki/Trailing_zero), since in any base, all numbers ending with 0 (i.e. having trailing zero) are divisible by the base (b), thus cannot be prime unless it is equal the base (b), i.e. “10” in base b, note that the numbers cannot have leading zero (https://en.wikipedia.org/wiki/Leading_zero), since typically this is not the way we write numbers (in any base), thus for all primes in our sets (i.e. all primes > base (b)), all zero digits must be “between” other digits).

Besides, this problem is better than the original minimal prime problem since this problem is regardless whether 1 is considered as prime or not, i.e. no matter 1 is considered as prime or not prime (https://primes.utm.edu/notes/faq/one.html, https://primefan.tripod.com/Prime1ProCon.html, https://cs.uwaterloo.ca/journals/JIS/VOL15/Caldwell2/cald6.pdf, http://www.numericana.com/answer/numbers.htm#one), the sets in this problem are the same, while the sets in the original minimal prime problem are different, e.g. in base 10, if 1 is considered as prime, then the set in the original minimal prime problem is {1, 2, 3, 5, 7, 89, 409, 449, 499, 6469, 6949, 9049, 9649, 9949, 60649, 666649, 946669, 60000049, 66000049, 66600049}, while if 1 is not considered as prime, then the set in the original minimal prime problem is {2, 3, 5, 7, 11, 19, 41, 61, 89, 409, 449, 499, 881, 991, 6469, 6949, 9001, 9049, 9649, 9949, 60649, 666649, 946669, 60000049, 66000049, 66600049}, however, in base 10, the set in this problem is always {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027}, no matter 1 is considered as prime or not prime.

The third reason for excluding the primes <= b is that starting with b+1 makes the formula of the number of possible (first digit,last digit) combo of a minimal prime in base b more simple and smooth number (https://en.wikipedia.org/wiki/Smooth_number, https://mathworld.wolfram.com/SmoothNumber.html), it is (b−1)\*eulerphi(b) (https://oeis.org/A062955), where eulerphi is Euler's totient function (https://en.wikipedia.org/wiki/Euler%27s_totient_function, https://primes.utm.edu/glossary/xpage/EulersPhi.html, https://mathworld.wolfram.com/TotientFunction.html, https://oeis.org/A000010), since b−1 is the number of possible first digit (except 0, all digits can be first digit), and eulerphi(b) is the number of possible last digit (only digits coprime to b can be last digit), by rule of product, there are (b−1)\*eulerphi(b) possible (first digit,last digit) combo, and if start with b, then when b is prime, there is an additional possible (first digit,last digit) combo: (1,0), and hence the formula will be (b−1)\*eulerphi(b)+1 if b is prime, or (b−1)\*eulerphi(b) if b is composite (the fully formula will be (b−1)\*eulerphi(b)+isprime(b) or (b−1)\*eulerphi(b)+floor((b−eulerphi(b)) / (b−1))), which is more complex, and if start with 1 (i.e. the original minimal prime problem), the formula is much more complex.

This problem covers finding the smallest prime of these forms in the same base b (or proving that such prime does not exist): (while the original minimal prime problem does not cover some of these forms for some bases (or all bases) b)

(b<sup>n</sup>−1)/(b−1) with n >= 2 (see http://www.fermatquotient.com/PrimSerien/GenRepu.txt, https://archive.ph/tf7jx, http://www.primenumbers.net/Henri/us/MersFermus.htm, https://www.ams.org/journals/mcom/1993-61-204/S0025-5718-1993-1185243-9/S0025-5718-1993-1185243-9.pdf, https://oeis.org/A084740, https://oeis.org/A084738, https://oeis.org/A065854, https://oeis.org/A279068, https://oeis.org/A128164, https://oeis.org/A285642)

b<sup>n</sup>+1 with n >= 1 (see http://jeppesn.dk/generalized-fermat.html, http://www.noprimeleftbehind.net/crus/GFN-primes.htm, http://yves.gallot.pagesperso-orange.fr/primes/index.html, http://yves.gallot.pagesperso-orange.fr/primes/results.html, http://yves.gallot.pagesperso-orange.fr/primes/stat.html, https://oeis.org/A228101, https://oeis.org/A079706, https://oeis.org/A084712, https://oeis.org/A123669)

(b^n+1)/2 (for odd b) with n >= 2 (see http://www.fermatquotient.com/PrimSerien/GenFermOdd.txt)

2×b^n+1 with n >= 1 (see https://mersenneforum.org/showthread.php?t=6918, https://mersenneforum.org/showthread.php?t=19725, https://oeis.org/A119624, https://oeis.org/A253178, https://oeis.org/A098872)

2×b^n−1 with n >= 1 (see https://mersenneforum.org/showthread.php?t=24576, https://www.mersenneforum.org/attachment.php?attachmentid=20976&d=1567314217, https://oeis.org/A119591, https://oeis.org/A098873)

b^n+2 with n >= 1 (see https://oeis.org/A138066, https://oeis.org/A084713, https://oeis.org/A138067)

b^n−2 with n >= 2 (see https://www.primepuzzles.net/puzzles/puzz_887.htm, https://oeis.org/A250200, https://oeis.org/A255707, https://oeis.org/A084714, https://oeis.org/A292201)

(b−1)×b^n+1 with n >= 1 (see https://www.rieselprime.de/ziki/Williams_prime_MP_least, https://www.rieselprime.de/ziki/Williams_prime_MP_table, https://sites.google.com/view/williams-primes, http://www.bitman.name/math/table/477, https://oeis.org/A305531, https://oeis.org/A087139)

(b−1)×b^n−1 with n >= 1 (see https://harvey563.tripod.com/wills.txt, https://www.rieselprime.de/ziki/Williams_prime_MM_least, https://www.rieselprime.de/ziki/Williams_prime_MM_table, https://sites.google.com/view/williams-primes, http://matwbn.icm.edu.pl/ksiazki/aa/aa39/aa3912.pdf, https://www.ams.org/journals/mcom/2000-69-232/S0025-5718-00-01212-6/S0025-5718-00-01212-6.pdf, http://www.bitman.name/math/table/484, https://oeis.org/A122396)

b^n+(b−1) with n >= 1 (see https://sites.google.com/view/williams-primes, https://oeis.org/A076845, https://oeis.org/A076846, https://oeis.org/A078178, https://oeis.org/A078179)

b^n−(b−1) with n >= 2 (see https://sites.google.com/view/williams-primes, https://cs.uwaterloo.ca/journals/JIS/VOL3/mccranie.html, http://www.bitman.name/math/table/435, https://oeis.org/A113516, https://oeis.org/A343589)

k×b^n+1 for all k <= 12 with n >= 1 (see https://www.rieselprime.de/ziki/Proth_prime_small_bases_least_n, https://mersenneforum.org/showthread.php?t=10354)

k×b^n−1 for all k <= 12 with n >= 1 (see https://www.rieselprime.de/ziki/Riesel_prime_small_bases_least_n, https://mersenneforum.org/showthread.php?t=10354)

(below (as well as the "left b" files), family "12{3}45" means sequence {1245, 12345, 123345, 1233345, 12333345, 123333345, ...}, where the members are expressed as base b strings, like the numbers in https://stdkmd.net/nrr/aaaab.htm, https://stdkmd.net/nrr/abbbb.htm, https://stdkmd.net/nrr/aaaba.htm, https://stdkmd.net/nrr/abaaa.htm, https://stdkmd.net/nrr/abbba.htm, https://stdkmd.net/nrr/abbbc.htm, https://stdkmd.net/nrr/prime/primecount.txt, https://stdkmd.net/nrr/prime/primedifficulty.txt, e.g. 1{3} (in decimal) is the numbers in https://stdkmd.net/nrr/1/13333.htm, and {1}3 (in decimal) is the numbers in https://stdkmd.net/nrr/1/11113.htm)

In fact, this problem covers finding the smallest prime of these form in the same base b: (where x, y, z are any digits in base b)

x{0}y

x{y} (unless y = 1) (see https://stdkmd.net/nrr/abbbb.htm)

{x}y (unless x = 1) (see https://stdkmd.net/nrr/aaaab.htm)

x{0}yz (unless there is a prime of the form x{0}y or x{0}z)

xy{0}z (unless there is a prime of the form x{0}z or y{0}z)

xy{x} (unless either x = 1 or there is a prime of the form y{x} (or both)) (see https://stdkmd.net/nrr/abaaa.htm)

{x}yx (unless either x = 1 or there is a prime of the form {x}y (or both)) (see https://stdkmd.net/nrr/aaaba.htm)

Some x{y}z (where x and z are strings (may be empty) of digits in base b, y is a digit in base b) families can be proven to contain no primes > b, by covering congruence (http://irvinemclean.com/maths/siercvr.htm, https://en.wikipedia.org/wiki/Covering_set, https://mathworld.wolfram.com/SierpinskisCompositeNumberTheorem.html), algebraic factorization (https://en.wikipedia.org/wiki/Factorization_of_polynomials, https://mathworld.wolfram.com/PolynomialFactorization.html), or combine of them, e.g. (only list the families which all numbers do not contain "prime > b" subsequence) (see post https://mersenneforum.org/showpost.php?p=594923&postcount=231 for the factor pattern for some of these families)

|b|family|why this family contain no primes > b|
|:---|:---|:---|
| 10 | 2{0}1|always divisible by 3 |
|10|2{0}7|always divisible by 3|
|10|5{0}1|always divisible by 3|
|10|5{0}7|always divisible by 3|
|10|8{0}1|always divisible by 3|
|10|8{0}7|always divisible by 3|
|10|28{0}7|always divisible by 7|
|10|4{6}9|always divisible by 7|
|10|families ending with 0, 2, 4, 6, or 8|always divisible by 2|
|10|families ending with 0 or 5|always divisible by 5|
|10|{0,3,6,9}|always divisible by 3 (non-simple family)|
|10|{0,7}|always divisible by 7 (non-simple family)|
|any base (b)|families ending with digits d which are not coprime to b|always divisible by gcd(d,b)|
|any base (b)|families only containing digits which are divisible by some d > 1|always divisible by d|
|3|1{0}1|always divisible by 2|
|4|2{0}1|always divisible by 3|
|5|11{0}3|always divisible by 3|
|5|3{0}11|always divisible by 3|
|6|4{0}1|always divisible by 5|
|7|1{0}1{0}1|always divisible by 3 (non-simple family)|
|7|1{0}3{0}5|always divisible by 3 (non-simple family)|
|7|1{0}5{0}3|always divisible by 3 (non-simple family)|

7	3{0}1{0}5	always divisible by 3 (non-simple family)

7	3{0}5{0}1	always divisible by 3 (non-simple family)

7	5{0}1{0}3	always divisible by 3 (non-simple family)

7	5{0}3{0}1	always divisible by 3 (non-simple family)

8	2{0}5	always divisible by 7

8	4{0}3	always divisible by 7

8	6{0}1	always divisible by 7

8	44{0}3	always divisible by 3

8	6{0}11	always divisible by 3

9	{7}62	always divisible by 7

12	A{0}21	always divisible by 5

13	C{A}5	always divisible by 7

14	40{4}9	always divisible by 61

15	9{6}8	always divisible by 11

16	2{C}3	always divisible by 7

21	B0{H}6H	alwats divisible by 4637

9	{1}5	always divisible by some element of {2,5}

9	2{7}	always divisible by some element of {2,5}

9	{3}8	always divisible by some element of {2,5}

9	5{1}	always divisible by some element of {2,5}

9	5{7}	always divisible by some element of {2,5}

9	{7}2	always divisible by some element of {2,5}

9	{7}5	always divisible by some element of {2,5}

9	{1}6{1}	always divisible by some element of {2,5} (non-simple family)

9	{3}{0}5	always divisible by some element of {2,5} (non-simple family)

11	2{5}	always divisible by some element of {2,3}

11	3{5}	always divisible by some element of {2,3}

11	3{7}	always divisible by some element of {2,3}

11	4{7}	always divisible by some element of {2,3}

11	{5}2	always divisible by some element of {2,3}

11	{5}3	always divisible by some element of {2,3}

11	{7}3	always divisible by some element of {2,3}

11	{7}4	always divisible by some element of {2,3}

14	4{0}1	always divisible by some element of {3,5}

14	B{0}1	always divisible by some element of {3,5}

14	3{D}	always divisible by some element of {3,5}

14	A{D}	always divisible by some element of {3,5}

14	1{0}B	always divisible by some element of {3,5}

14	{D}3	always divisible by some element of {3,5}

14	{4}9	always divisible by some element of {3,5}

14	{8}5	always divisible by some element of {3,5}

8	6{4}7	always divisible by some element of {3,5,13} (special example, as the numbers with length >= 222 in this family contain "prime > b" subsequence, this prime is (4^220)7)

13	3{0}95	always divisible by some element of {5,7,17}

13	95{0}3	always divisible by some element of {5,7,17}

16	{4}D	always divisible by some element of {3,7,13}

16	{8}F	always divisible by some element of {3,7,13}

17	7F{0}D	always divisible by some element of {3,5,29}

17	D{0}7F	always divisible by some element of {3,5,29}

20	8{0}1	always divisible by some element of {3,7}

20	D{0}1	always divisible by some element of {3,7}

20	7{J}	always divisible by some element of {3,7}

20	C{J}	always divisible by some element of {3,7}

20	1{0}D	always divisible by some element of {3,7}

20	{J}7	always divisible by some element of {3,7}

21	{7}D	always divisible by some element of {2,13,17}

23	7L{0}1	always divisible by some element of {3,5,53}

23	1{0}7L	always divisible by some element of {3,5,53}

27	JP{0}1	always divisible by some element of {5,7,73}

27	1{0}JP	always divisible by some element of {5,7,73}

30	A{0}9J	always divisible by some element of {7,13,19,31}

32	A{0}1	always divisible by some element of {3,11}

32	N{0}1	always divisible by some element of {3,11}

32	9{V}	always divisible by some element of {3,11}

32	M{V}	always divisible by some element of {3,11}

32	1{0}N	always divisible by some element of {3,11}

32	{V}9	always divisible by some element of {3,11}

32	8{0}V	always divisible by some element of {3,5,41}

34	6{0}1	always divisible by some element of {5,7}

34	5{X}	always divisible by some element of {5,7}

34	S{X}	always divisible by some element of {5,7}

34	{X}5	always divisible by some element of {5,7}

9	{1}	difference-of-squares factorization

8	1{0}1	sum-of-cubes factorization

9	3{1}	difference-of-squares factorization

9	3{8}	difference-of-squares factorization

9	{8}5	difference-of-squares factorization

9	3{8}35	difference-of-squares factorization

16	8{F}	difference-of-squares factorization

16	{F}7	difference-of-squares factorization

16	{4}1	difference-of-squares factorization

16	B{4}1	difference-of-squares factorization

16	1{5}	difference-of-squares factorization

16	8{5}	difference-of-squares factorization

16	10{5}	difference-of-squares factorization

16	A1{5}	difference-of-squares factorization

16	7{3}	difference-of-squares factorization

16	3{F}AF	difference-of-squares factorization

16	30{F}AF	difference-of-squares factorization

16	3{F}A0F	difference-of-squares factorization

16	30{F}A0F	difference-of-squares factorization

16	{5}45	difference-of-squares factorization

16	{C}B	difference-of-squares factorization

16	{C}D	Aurifeuillian factorization of x^4+4\*y^4

16	{C}DD	Aurifeuillian factorization of x^4+4\*y^4

25	{1}	difference-of-squares factorization

25	2{1}	difference-of-squares factorization

25	5{1}	difference-of-squares factorization

25	7{1}	difference-of-squares factorization

25	C{1}	difference-of-squares factorization

25	F{1}	difference-of-squares factorization

25	M{1}	difference-of-squares factorization

25	1F{1}	difference-of-squares factorization

25	1{3}	difference-of-squares factorization

25	1{8}	difference-of-squares factorization

25	5{8}	difference-of-squares factorization

25	A{3}	difference-of-squares factorization

25	L{8}	difference-of-squares factorization

25	{3}2	difference-of-squares factorization

25	{8}3	difference-of-squares factorization

25	{8}7	difference-of-squares factorization

27	8{0}1	sum-of-cubes factorization

27	1{0}8	sum-of-cubes factorization

27	{D}E	sum-of-cubes factorization

27	7{Q}	difference-of-cubes factorization

27	{Q}J	difference-of-cubes factorization

27	9{G}	difference-of-cubes factorization

32	1{0}1	sum-of-5th-powers factorization

32	{1}	difference-of-5th-powers factorization

36	3{7}	difference-of-squares factorization

36	3{Z}	difference-of-squares factorization

36	8{Z}	difference-of-squares factorization

36	O{Z}	difference-of-squares factorization

36	{Z}B	difference-of-squares factorization

36	8{Z}B	difference-of-squares factorization

36	F{Z}B	difference-of-squares factorization

36	{9}1	difference-of-squares factorization

36	{S}J	difference-of-squares factorization

14	8{D}	combine of factor 5 and difference-of-squares factorization

12	{B}9B	combine of factor 13 and difference-of-squares factorization

14	{D}5	combine of factor 5 and difference-of-squares factorization

17	1{9}	combine of factor 2 and difference-of-squares factorization

17	7{9}	combine of factor 2 and difference-of-squares factorization

17	{9}2	combine of factor 2 and difference-of-squares factorization

17	{9}8	combine of factor 2 and difference-of-squares factorization

19	1{6}	combine of factor 5 and difference-of-squares factorization

19	{6}5	combine of factor 5 and difference-of-squares factorization

19	7{2}	combine of factor 5 and difference-of-squares factorization

19	89{6}	combine of factor 5 and difference-of-squares factorization

24	3{N}	combine of factor 5 and difference-of-squares factorization

24	5{N}	combine of factor 5 and difference-of-squares factorization

24	8{N}	combine of factor 5 and difference-of-squares factorization

24	{6}1	combine of factor 5 and difference-of-squares factorization

24	{N}LN	combine of factor 5 and difference-of-squares factorization

33	F{W}	combine of factor 17 and difference-of-squares factorization

33	{W}H	combine of factor 17 and difference-of-squares factorization

34	1{B}	combine of factor 5 and difference-of-squares factorization

34	8{X}	combine of factor 5 and difference-of-squares factorization

34	{X}P	combine of factor 5 and difference-of-squares factorization

Also families which contain only one very small prime > b:

b	family	why this family contains only one prime > b

4	{1}	difference-of-squares factorization, but 11 is prime, and 11 is the only prime > b in this family

8	{1}	difference-of-cubes factorization, but 111 is prime, and 111 is the only prime > b in this family

16	{1}	difference-of-squares factorization, but 11 is prime, and 11 is the only prime > b in this family

27	{1}	difference-of-cubes factorization, but 111 is prime, and 111 is the only prime > b in this family

27	{G}7	difference-of-cubes factorization, but G7 is prime, and G7 is the only prime > b in this family

36	{1}	difference-of-squares factorization, but 11 is prime, and 11 is the only prime > b in this family

Some x{y}z (where x and z are strings (may be empty) of digits in base b, y is a digit in base b) families could not be proven to contain no primes > b (by covering congruence, algebraic factorization, or combine of them) but no primes > b could be found in the family, even after searching through numbers with over 50000 digits. In such a case, the only way to proceed is to test the primality of larger and larger numbers of such form and hope a prime is eventually discovered.

Many x{y}z (where x and z are strings (may be empty) of digits in base b, y is a digit in base b) families contain no small primes > b even though they do contain very large primes. e.g. the smallest prime in the base 23 family 9{E} is 9(E^800873) which when written in decimal contains 1090573 digits (technically, probable primality tests were used to show this (which have a very small chance of making an error (https://primes.utm.edu/notes/prp_prob.html, https://www.ams.org/journals/mcom/1989-53-188/S0025-5718-1989-0982368-4/S0025-5718-1989-0982368-4.pdf)) because all known primality tests (https://en.wikipedia.org/wiki/Primality_test, https://www.rieselprime.de/ziki/Primality_test, https://mathworld.wolfram.com/PrimalityTest.html) run far too slowly to run on a number of this size unless either N−1 (https://primes.utm.edu/prove/prove3_1.html) or N+1 (https://primes.utm.edu/prove/prove3_2.html) (or both) (unfortunely, none of Wikipedia, Prime Wiki, Mathworld has article for N−1 primality test or N+1 primality test, but a similar article for Pocklington primality test: https://en.wikipedia.org/wiki/Pocklington_primality_test, https://www.rieselprime.de/ziki/Pocklington%27s_theorem, https://mathworld.wolfram.com/PocklingtonsTheorem.html, also see the article for the cyclotomy primality test: https://primes.utm.edu/glossary/xpage/Cyclotomy.html) can be >= 25% factored (https://en.wikipedia.org/wiki/Integer_factorization, https://www.rieselprime.de/ziki/Factorization, https://mathworld.wolfram.com/PrimeFactorizationAlgorithms.html), see the article http://www.ams.org/journals/mcom/1975-29-130/S0025-5718-1975-0384673-1/S0025-5718-1975-0384673-1.pdf for the case that either N−1 or N+1 (or both) can be >= 33.3333% factored, if either N−1 or N+1 (or both) can be >= 25% factored but neither can be >= 33.3333% factored, then we need to use CHG (https://mersenneforum.org/attachment.php?attachmentid=21133&d=1571237465, https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/CHG.GP.txt, https://primes.utm.edu/bios/page.php?id=797) to prove its primality (see https://mersenneforum.org/showpost.php?p=528149&postcount=3), for the examples of the numbers which are proven prime by CHG, see https://primes.utm.edu/primes/page.php?id=126454, https://primes.utm.edu/primes/page.php?id=131964, https://primes.utm.edu/primes/page.php?id=123456, https://primes.utm.edu/primes/page.php?id=130933, https://stdkmd.net/nrr/cert/1/ (search for "CHG"), https://stdkmd.net/nrr/cert/2/ (search for "CHG"), https://stdkmd.net/nrr/cert/3/ (search for "CHG"), https://stdkmd.net/nrr/cert/4/ (search for "CHG"), https://stdkmd.net/nrr/cert/5/ (search for "CHG"), https://stdkmd.net/nrr/cert/6/ (search for "CHG"), https://stdkmd.net/nrr/cert/7/ (search for "CHG"), https://stdkmd.net/nrr/cert/8/ (search for "CHG"), https://stdkmd.net/nrr/cert/9/ (search for "CHG"), however, factordb (http://factordb.com/) lacks the ability to verify CHG proofs, see https://mersenneforum.org/showpost.php?p=608362&postcount=165)

The numbers in x{y}z (where x and z are strings (may be empty) of digits in base b, y is a digit in base b) families are of the form (a×b^n+c)/gcd(a+c,b−1) for some fixed a, b, c such that a >= 1, b >= 2 (b is the base), c != 0, gcd(a,c) = 1, gcd(b,c) = 1. Except in the special case c = ±1 and gcd(a+c,b−1) = 1, when n is large the known primality tests for such a number are too inefficient to run. In this case one must resort to a probable primality test such as a Miller–Rabin primality test (https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test, https://primes.utm.edu/glossary/xpage/MillersTest.html, https://www.rieselprime.de/ziki/Miller-Rabin_pseudoprimality_test, https://mathworld.wolfram.com/Rabin-MillerStrongPseudoprimeTest.html) or a Baillie–PSW primality test (https://en.wikipedia.org/wiki/Baillie%E2%80%93PSW_primality_test, https://mathworld.wolfram.com/Baillie-PSWPrimalityTest.html), unless a divisor of the number can be found. Since we are testing many numbers in an exponential sequence, it is possible to use a sieving process (https://www.rieselprime.de/ziki/Sieving, https://mathworld.wolfram.com/Sieve.html) to find divisors rather than using trial division (https://en.wikipedia.org/wiki/Trial_division, https://primes.utm.edu/glossary/xpage/TrialDivision.html, https://www.rieselprime.de/ziki/Trial_factoring, https://mathworld.wolfram.com/TrialDivision.html).

To do this, we made use of Geoffrey Reynolds’ SRSIEVE software (https://www.bc-team.org/app.php/dlext/?cat=3, https://mersenneforum.org/attachment.php?attachmentid=16377&d=1499103807, https://archive.ph/XrJkw, http://www.rieselprime.de/dl/CRUS_pack.zip, https://primes.utm.edu/bios/page.php?id=905, https://www.rieselprime.de/ziki/Srsieve, for the README see https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/srsieve%20README.txt, https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/srsieve%20README2.txt, https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/sr1sieve%20README.txt, https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/sr1sieve%20README2.txt, https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/sr1sieve%20README3.txt, https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/sr2sieve%20README.txt, https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/sr2sieve%20README2.txt, https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/sr2sieve%20README3.txt). This program uses the baby-step giant-step algorithm to find all primes p which divide a×b^n+c where p and n lie in a specified range (also, this program was updated so that it also removes the n such that a×b^n+c has algebraic factors (e.g. difference-of-squares factorization, sum/difference-of-cubes factorization, Aurifeuillian factorization (https://en.wikipedia.org/wiki/Aurifeuillean_factorization, https://www.rieselprime.de/ziki/Aurifeuillian_factor, https://mathworld.wolfram.com/AurifeuilleanFactorization.html) of x^4+4\*y^4), see https://mersenneforum.org/showpost.php?p=452132&postcount=66 and https://mersenneforum.org/showthread.php?t=21916). Since this program cannot handle the general case (a×b^n+c)/gcd(a+c,b−1) when gcd(a+c,b−1) > 1 we only used it to sieve the sequence a×b^n+c for primes p not dividing gcd(a+c,b−1), and initialized the list of candidates to not include n for which there is some prime p dividing gcd(a+c,b−1) for which p dividing (a×b^n+c)/gcd(a+c,b−1). The program had to be modified slightly to remove a check which would prevent it from running in the case when a, b, and c were all odd (since then 2 divides a×b^n+c, but 2 may not divide (a×b^n+c)/gcd(a+c,b−1)) (see https://github.com/curtisbright/mepn-data/commit/1b55b353f46c707bbe52897573914128b3303960).

Once the numbers with small divisors had been removed, it remained to test the remaining numbers using a probable primality test. For this we used the software LLR by Jean Penn´e (http://jpenne.free.fr/index2.html, https://primes.utm.edu/bios/page.php?id=431, https://www.rieselprime.de/ziki/LLR, for the README see https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/llr%20README.txt) or PFGW (https://sourceforge.net/projects/openpfgw/, https://primes.utm.edu/bios/page.php?id=175, https://www.rieselprime.de/ziki/PFGW, for the README see https://raw.githubusercontent.com/xayahrainie4793/text-file-stored/main/pfgw%20README.txt). Although undocumented, it is possible to run these two programs on numbers of the form (a×b^n+c)/gcd(a+c,b−1) when gcd(a+c,b−1) > 1, so this program required no modifications. A script was also written which allowed one to run srsieve while LLR or PFGW was testing the remaining candidates, so that when a divisor was found by srsieve on a number which had not yet been tested by LLR or PFGW it would be removed from the list of candidates.

For the primes < 10^25000 for the solved or near-solved bases (bases with <= 3 unsolved families, i.e. bases 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 30), we employed PRIMO by Marcel Martin (http://www.ellipsa.eu/public/primo/primo.html, http://www.rieselprime.de/dl/Primo309.zip, https://primes.utm.edu/bios/page.php?id=46, https://www.rieselprime.de/ziki/Primo), an elliptic curve primality proving (https://primes.utm.edu/prove/prove4_2.html, https://en.wikipedia.org/wiki/Elliptic_curve_primality, https://primes.utm.edu/glossary/xpage/ECPP.html, https://mathworld.wolfram.com/EllipticCurvePrimalityProving.html) implementation.

We have completely solved this problem for bases b = 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 18, 20, 24 (thus, currently we can complete the classification of the minimal primes in these bases), also we have completely solved this problem for bases 11, 16, 22, 30 if we allow probable primes (https://en.wikipedia.org/wiki/Probable_prime, https://primes.utm.edu/glossary/xpage/PRP.html, https://www.rieselprime.de/ziki/Probable_prime, https://mathworld.wolfram.com/ProbablePrime.html) > 10^25000 in place of proven primes, besides, we have completely solved this problem for bases 13, 17, 19, 21, 26, 28, 36 (if we allow strong probable primes in place of proven primes) except the families listed in the "left b" files (see the condensed table below for the searching limit of these families).

We are unable to determine if these families contain a prime (only count the numbers > base) or not, i.e. these families have no known prime members, nor can they be ruled out as only containing composites, and all of these families are excepted to contain primes.

For base 17, the smallest prime in family {B}2BE may or may not be minimal prime, since another unsolved family is {B}2E.

For base 19, the smallest prime in family {2}7A may or may not be minimal prime, since another unsolved family is {2}7, and the smallest prime in family 333{5} may or may not be quasi-minimal prime, since another unsolved family is 3{5}, and the smallest prime in family 5{H}05 may or may not be minimal prime, since another unsolved family is 5{H}5, and the smallest prime in family FHHH0{H} may or may not be quasi-minimal prime, since another unsolved family is FH0{H}.

For base 21, the smallest prime in families {9}0D and F{9}D may or may not be minimal primes, since another unsolved family is {9}D, and the smallest prime in family DH{D} may or may not be quasi-minimal prime, since another unsolved family is H{D}.

There are also unproven probable primes (however, in this project our results assume that they are in fact primes, since they are > 10^25000 and the probability that they are in fact composite is < 10^−2000, see https://primes.utm.edu/notes/prp_prob.html), the unproven probable primes for bases 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 30 are:

b	index of this minimal prime in base b (assuming the primality of all probable primes in base b)	base-b form of the unproven probable prime	algebraic ((a\*b^n+c)/d) form of the unproven probable prime

11	1068	5(7^62668)	(57×11^62668−7)/10

13	3194	C(5^23755)C	(149×13^23756+79)/12

13	3195	8(0^32017)111	8×13^32020+183

16	2345	D(B^32234)	(206×16^32234−11)/15

16	2346	(4^72785)DD	(4×16^72787+2291)/15

16	2347	(3^116137)AF	(16^116139+619)/5

22	8003	B(K^22001)5	(251×22^22002−335)/21

30	2618	I(0^24608)D	18×30^24609+13

All these numbers are strong probable primes (https://en.wikipedia.org/wiki/Strong_pseudoprime, https://primes.utm.edu/glossary/xpage/StrongPRP.html, https://mathworld.wolfram.com/StrongPseudoprime.html) to bases 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61 (see https://oeis.org/A014233), and strong Lucas probable primes (https://en.wikipedia.org/wiki/Lucas_pseudoprime#Strong_Lucas_pseudoprimes, https://mathworld.wolfram.com/StrongLucasPseudoprime.html) with parameters (P, Q) defined by Selfridge's Method A (see https://oeis.org/A217255), and trial factored to 10^16 (thus, all these numbers are Baillie–PSW probable primes.

Primality certificates (https://en.wikipedia.org/wiki/Primality_certificate, https://primes.utm.edu/glossary/xpage/Certificate.html, https://mathworld.wolfram.com/PrimalityCertificate.html) for large proven primes (> 10^1000) for bases 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 30:

b	index of this minimal prime in base b	base-b form of the minimal prime	algebraic ((a\*b^n+c)/d) form of the minimal prime	primality certificate for the minimal prime

9	151	3(0^1158)11	3×9^1160+10	http://factordb.com/cert.php?id=1100000002376318423

11	1067	55(7^1011)	(607×11^1011−7)/10	http://factordb.com/cert.php?id=1100000002361376522

13	3184	(9^968)B	(3×13^969+5)/4	http://factordb.com/cert.php?id=1100000000258566244

13	3185	1(0^1295)181	13^1298+274	http://factordb.com/cert.php?id=1100000002615445013

13	3186	(9^1362)5	(3×13^1363−19)/4	http://factordb.com/cert.php?id=1100000002321017776

13	3187	(7^1504)1	(7×13^1505−79)/12	http://factordb.com/cert.php?id=1100000002320890755

13	3188	93(0^1551)1	120×13^1552+1	proven prime by N−1 test (https://primes.utm.edu/prove/prove3_1.html), since N−1 is trivially fully factored

13	3189	72(0^2297)2	93×13^2298+2	http://factordb.com/cert.php?id=1100000002632396910

13	3190	177(0^2703)17	267×13^2705+20	http://factordb.com/cert.php?id=1100000003590430825

13	3191	39(0^6266)1	48×13^6267+1	proven prime by N−1 test (https://primes.utm.edu/prove/prove3_1.html), since N−1 is trivially fully factored

13	3192	B(0^6540)BBA	11×13^6543+2012	http://factordb.com/cert.php?id=1100000002616382906

13	3193	(C^10631)92	13^10633−50	http://factordb.com/cert.php?id=1100000003590493750

14	650	4(D^19698)	5×14^19698−1	proven prime by N+1 test (https://primes.utm.edu/prove/prove3_2.html), since N+1 is trivially fully factored

16	2337	D(9^1052)	(68×16^1052−3)/5	http://factordb.com/cert.php?id=1100000002321036020

16	2338	FA(F^1062)45	251×16^1064−187	http://factordb.com/cert.php?id=1100000003588387610

16	2339	F(8^1517)F	(233×16^1518+97)/15	http://factordb.com/cert.php?id=1100000000633744824

16	2340	2(0^1713)321	2×16^1716+801	http://factordb.com/cert.php?id=1100000003588386735

16	2341	300(F^1960)AF	769×16^1962−81	http://factordb.com/cert.php?id=1100000003588368750

16	2342	9(0^3542)91	9×16^3544+145	http://factordb.com/cert.php?id=1100000000633424191

16	2343	5B(C^3700)D	(459×16^3701+1)/5	http://factordb.com/cert.php?id=1100000000993764322

16	2344	D0(B^17804)	(3131×16^17804−11)/15	http://factordb.com/cert.php?id=1100000003589278511

18	549	C(0^6268)C5	12×18^6270+221	http://factordb.com/cert.php?id=1100000003590442437

20	3312	5(0^1163)AJ	5×20^1165+219	http://factordb.com/cert.php?id=1100000003590502412

20	3313	C(D^2449)	(241×20^2449−13)/19	http://factordb.com/cert.php?id=1100000002325393915

20	3314	G(0^6269)D	16×20^6270+13	http://factordb.com/cert.php?id=1100000003590539457

22	7998	K(0^760)EC1	20×22^763+7041	http://factordb.com/cert.php?id=1100000000632724415

22	7999	J(0^767)IGGJ	19×22^771+199779	http://factordb.com/cert.php?id=1100000003591362567

22	8000	(7^959)K7	(22^961+857)/3	http://factordb.com/cert.php?id=1100000003591361817

22	8001	(L^2385)KE7	22^2388−653	http://factordb.com/cert.php?id=1100000003591360774

22	8002	(7^3815)2L	(22^3817−289)/3	http://factordb.com/cert.php?id=1100000003591359839

24	3405	(N^2644)LLN	24^2647−1201	http://factordb.com/cert.php?id=1100000003593270089

24	3406	(D^2698)LD	(13×24^2700+4403)/23	http://factordb.com/cert.php?id=1100000003593269876

24	3407	A(0^2951)8ID	10×24^2954+5053	http://factordb.com/cert.php?id=1100000003593269654

24	3408	88(N^5951)	201×24^5951−1	proven prime by N+1 test (https://primes.utm.edu/prove/prove3_2.html), since N+1 is trivially fully factored

24	3409	N00(N^8129)LN	13249×24^8131−49	http://factordb.com/cert.php?id=1100000003593391606

30	2616	C(0^1022)1	12×30^1023+1	proven prime by N−1 test (https://primes.utm.edu/prove/prove3_1.html), since N−1 is trivially fully factored

30	2617	(5^4882)J	(5×30^4883+401)/29	http://factordb.com/cert.php?id=1100000002327649423

30	2619	O(T^34205)	25×30^34205−1	proven prime by N+1 test (https://primes.utm.edu/prove/prove3_2.html), since N+1 is trivially fully factored

Condensed table for bases 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 26, 27, 28, 30, 36: (the bases 11, 13, 16, 17, 19, 21, 22, 26, 27, 28, 30, 36 data assumes the primality of the probable primes)

b	number of minimal primes base b	base-b form of the largest known minimal prime base b	length of the largest known minimal prime base b	algebraic ((a\*b^n+c)/d) form of the largest known minimal prime base b	number of unsolved families in base b	searching limit of length for the unsolved families in base b (if there are different searching limits for the unsolved families in base b, choose the lowest searching limit)

2	1	11	2	3	0	---

3	3	111	3	13	0	---

4	5	221	3	41	0	---

5	22	1(0^93)13	96	5^95+8	0	---

6	11	40041	5	5209	0	---

7	71	(3^16)1	17	(7^17−5)/2	0	---

8	75	(4^220)7	221	(4×8^221+17)/7	0	---

9	151	3(0^1158)11	1161	3×9^1160+10	0	---

10	77	5(0^28)27	31	5×10^30+27	0	---

11	1068	5(7^62668)	62669	(57×11^62668−7)/10	0	---

12	106	4(0^39)77	42	4×12^41+91	0	---

13	3195\~3197	8(0^32017)111	32021	8×13^32020+183	2	150000

14	650	4(D^19698)	19699	5×14^19698−1	0	---

15	1284	(7^155)97	157	(15^157+59)/2	0	---

16	2347	(3^116137)AF	116139	(16^116139+619)/5	0	---

17	10407\~10428	E9(B^44732)	44734	(3963×17^44732−11)/16	21	53000

18	549	C(0^6268)C5	6271	12×18^6270+221	0	---

19	31400\~31435	D17D(0^19750)1	19755	89674×19^19751+1	35	20000

20	3314	G(0^6269)D	6271	16×20^6270+13	0	---

21	13373\~13395	5D(0^19848)1	19851	118×21^19849+1	23	20000

22	8003	B(K^22001)5	22003	(251×22^22002−335)/21	0	---

24	3409	N00(N^8129)LN	8134	13249×24^8131−49	0	---

26	25253\~25259	6(K^23300)5	23302	(34×26^23301−79)/5	6	38000

27	102612\~102701	9(0^9426)FN	9429	9×27^9428+428	89	10000

28	25528\~25529	O4(O^94535)9	94538	(6092×28^94536−143)/9	1	543202

30	2619	O(T^34205)	34206	25×30^34205−1	0	---

36	35257\~35263	7(K^26567)Z	26569	(53×36^26568+101)/7	6	36000

File "kernel b": Data for all known minimal primes in base b, expressed as base b strings

File "left b": x{y}z (where x and z are strings (may be empty) of digits in base b, y is a digit in base b) families in base b such that we were unable to determine if they contain a prime > b or not (i.e. x{y}z (where x and z are strings (may be empty) of digits in base b, y is a digit in base b) families in base b such that no prime member > b could be found, nor could the family be ruled out as only containing composites (only count the numbers > b)), these families are sorted by "the length n number in these families, from the smallest number to the largest number, this n is large enough such that n replaced to any larger number does not affect the sorting" (e.g. for base 17, we sort with B{0}B3 -> B{0}DB -> {B}2BE -> {B}2E -> {B}E9 -> {B}EE, since in this case 7 digits is enough, B0000B3 < B0000DB < BBBB2BE < BBBBB2E < BBBBBE9 < BBBBBEE, if the 7 replaced to any larger number, this sorting will not change)

See my article about this research: https://docs.google.com/document/d/e/2PACX-1vQct6Hx-IkJd5-iIuDuOKkKdw2teGmmHW-P75MPaxqBXB37u0odFBml5rx0PoLa0odTyuW67N_vn96J/pub
