This set of C++ (https://en.wikipedia.org/wiki/C%2B%2B) programs must be run with *GMP* (https://en.wikipedia.org/wiki/GNU_Multiple_Precision_Arithmetic_Library, https://gmplib.org/)

This set of programs uses many number theoretic (https://en.wikipedia.org/wiki/Number_theory, https://www.rieselprime.de/ziki/Number_theory, https://mathworld.wolfram.com/NumberTheory.html) functions in *GMP* library (see https://gmplib.org/manual/Number-Theoretic-Functions), and we use the *GMP* function *mpz_probab_prime_p* (see https://faculty.lynchburg.edu/~nicely/misc/mpzspsp.html) to test the probable primality of the numbers, this function is combination of the Baillie-PSW probable primality test (https://en.wikipedia.org/wiki/Baillie%E2%80%93PSW_primality_test, https://mathworld.wolfram.com/Baillie-PSWPrimalityTest.html), the Miller-Rabin probable primality test (https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test, https://primes.utm.edu/glossary/xpage/MillersTest.html, https://www.rieselprime.de/ziki/Miller-Rabin_pseudoprimality_test, https://mathworld.wolfram.com/Rabin-MillerStrongPseudoprimeTest.html, http://www.numericana.com/answer/pseudo.htm#rabin, http://www.javascripter.net/math/primes/millerrabinprimalitytest.htm) of first 50 prime bases (see https://oeis.org/A014233) (we use reps = 50, thus the first 50 prime bases), and trial division (https://en.wikipedia.org/wiki/Trial_division, https://primes.utm.edu/glossary/xpage/TrialDivision.html, https://www.rieselprime.de/ziki/Trial_factoring, https://mathworld.wolfram.com/TrialDivision.html, http://www.numericana.com/answer/factoring.htm#trial) to about 10<sup>9</sup>, thus all numbers in the data are Baillie-PSW probable primes (i.e. both strong probable primes to base 2 (see https://oeis.org/A001262) and strong Lucas pseudoprimes with parameters (*P*, *Q*) defined by Selfridge's Method *A* (see https://oeis.org/A217255)), i.e. either primes or Baillie-PSW pseudoprimes, and no known composites which pass the Baillie–PSW probable prime test, and no composites < 2<sup>64</sup> pass the Baillie–PSW probable prime test (see http://ntheory.org/pseudoprimes.html and https://faculty.lynchburg.edu/~nicely/misc/bpsw.html), thus if a number in the data is in fact composite, it will be a pseudoprime to the Baillie–PSW probable prime test, which currently no single example is known!

The program "searchpp.cc" is searching the smallest (probable) prime in non-simple families (for the examples of non-simple families, see https://stdkmd.net/nrr/prime/primecount3.htm and https://stdkmd.net/nrr/prime/primecount3.txt (only base 10 families)), non-simple families usually have small primes if they cannot be ruled out as only containing composites by covering congruence, see the section above.

(the section below uses the notation in http://www.wiskundemeisjes.nl/wp-content/uploads/2007/02/minimal.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_12.pdf), i.e. "*X* ◁ *Y*" means "*X* is a subsequence of *Y*")

e.g. for the non-simple family {7}{4}1 in base 8, we can separate it to these families:

* Family {7}1, its smallest prime is 7<sub>12</sub>1
* Family {7}41, its smallest prime is 7<sub>79</sub>41 (not minimal prime, since 7<sub>12</sub>1 ◁ 7<sub>79</sub>41)
* Family {7}441, its smallest prime is 7<sub>84</sub>441 (not minimal prime, since 7<sub>12</sub>1 ◁ 7<sub>84</sub>441)
* Family {7}4441, its smallest prime is 7<sub>233</sub>4441 (not minimal prime, since 7<sub>12</sub>1 ◁ 7<sub>233</sub>4441)
* Family {7}44441, its smallest prime is 7<sub>56</sub>44441 (not minimal prime, since 7<sub>12</sub>1 ◁ 7<sub>56</sub>44441)
* Family {7}444441, it has no primes since all numbers are divisible by 7
* Family {7}4444441, its smallest prime is 77774444441

* Family {4}1, its smallest prime is 4<sup>8</sup>1
* Family 7{4}1, its smallest prime is 74<sup>7</sup>1
* Family 77{4}1, it has no primes since all numbers are divisible by 5
* Family 777{4}1, its smallest prime is 7774<sup>11</sup>1 (not minimal prime, since 4<sup>8</sup>1 ◁ 74<sup>7</sup>1)
* Family 7777{4}1, its smallest prime is 77774444441

and thus we found that the smallest prime in the non-simple family {7}{4}1 in base 8 is 77774444441

For another example, for the non-simple family {8}{3}5 in base 9, we can separate it to these families:

* Family {8}5, it has no primes since the numbers can be factored as difference of squares
* Family {8}35, it has no primes since all numbers are divisible by 2
* Family {8}335, its smallest prime is 8<sub>19</sub>335
* Family {8}3335, it has no primes since all numbers are divisible by 2
* Family {8}33335, its smallest prime is 8<sub>9</sub>33335
* Family {8}333335, it has no primes since all numbers are divisible by 2
* Family {8}3333335, its smallest prime is 8<sub>9</sub>3333335 (not minimal prime, since 8<sub>9</sub>33335 ◁ 8<sub>9</sub>3333335)
* Family {8}33333335, it has no primes since all numbers are divisible by 2
* Family {8}333333335, its smallest prime is 8333333335

* Family {3}5, it has no primes since all numbers are divisible by either 2 or 5
* Family 8{3}5, its smallest prime is 8333333335

and thus we found that the smallest prime in the non-simple family {8}{3}5 in base 9 is 8333333335

The program "searchpm.cc" is searching the smallest (probable) prime in simple families up to length 1000.

The program "searchp1.cc" is searching the smallest (probable) prime in simple families extensively, starting with length 1000.

The program "searchLLR.cc" is a sieving (https://www.rieselprime.de/ziki/Sieving, https://www.rieselprime.de/ziki/Sieving_a_range_of_sequences, https://mathworld.wolfram.com/Sieve.html) program like *SRSIEVE* (https://www.bc-team.org/app.php/dlext/?cat=3, http://web.archive.org/web/20160922072340/https://sites.google.com/site/geoffreywalterreynolds/programs/, http://www.rieselprime.de/dl/CRUS_pack.zip, https://primes.utm.edu/bios/page.php?id=905, https://www.rieselprime.de/ziki/Srsieve, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/srsieve_1.1.4, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/sr1sieve_1.4.6, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/sr2sieve_2.0.0, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/srbsieve, https://github.com/xayahrainie4793/prime-programs-cached-copy/blob/main/mtsieve_2.4.1/srsieve2.exe, https://github.com/xayahrainie4793/prime-programs-cached-copy/blob/main/mtsieve_2.4.1/srsieve2cl.exe) but only sieved to the prime 130337 (while *SRSIEVE* usually sieve to 10<sup>9</sup> or more) and not remove the numbers with algebraic factors (see https://mersenneforum.org/showpost.php?p=452132&postcount=66 and https://mersenneforum.org/showthread.php?t=21916 and https://github.com/xayahrainie4793/prime-programs-cached-copy/blob/main/srsieve_1.1.4/algebraic.c (note: for the sequence (*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1), the case of "Mersenne number" in https://github.com/xayahrainie4793/prime-programs-cached-copy/blob/main/srsieve_1.1.4/algebraic.c is the case which *a* is rational power of *b*, *c* = −1 and the case which *a* is rational power of *b*, *c* = 1, *gcd*(*a*+*c*,*b*−1) ≥ 3, and the case of "GFN" in https://github.com/xayahrainie4793/prime-programs-cached-copy/blob/main/srsieve_1.1.4/algebraic.c is the case which *a* is rational power of *b*, *c* = 1, *gcd*(*a*+*c*,*b*−1) is either 1 or 2)), and the program "searchLLR.cc" prints the *LLR* (http://jpenne.free.fr/index2.html, https://primes.utm.edu/bios/page.php?id=431, https://www.rieselprime.de/ziki/LLR, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/llr403win64, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/llr403linux64) input file and thus the *LLR* program must be used after the program "searchLLR.cc".
