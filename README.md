A Prime Game:

Write down a multidigit prime number (i.e. a prime number > 10), and I can always strike out 0 or more digits to get a prime in this list:

{11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027}

e.g.

* Write down the prime 149 → I can delete the digit 4, to get the prime 19
* Write down the prime 439 → I can delete the digit 9, to get the prime 43
* Write down the prime 857 → I can delete zero digits, to get the prime 857
* Write down the prime 2081 → I can delete the digit 0, to get the prime 281
* Write down the largest known double Mersenne prime 170141183460469231731687303715884105727 (2<sup>127</sup>−1) → I can delete all digits except the third-leftmost 1 and the second-rightmost 3, to get the prime 13
* Write down the largest known Fermat prime 65537 → I can delete the 6 and the 3, to get the prime 557 (also I can choose to delete the 6 and two 5's, to get the prime 37) (also I can choose to delete two 5's and the 3, to get the prime 67) (also I can choose to delete the 6, one 5, and the 7, to get the prime 53)
* Write down the famous repunit prime 1111111111111111111 (with 19 1's) → I can delete 17 1's, to get the prime 11
* Write down the prime 1000000000000000000000000000000000000000000000000000000000007 (which is the next prime after 10<sup>60</sup>) → I can delete all 0's, to get the prime 17
* Write down the prime 95801 → I can delete the 9, to get the prime 5801
* Write down the prime 946969 → I can delete the first 9 and two 6's, to get the prime 499
* Write down the prime 90000000581 → I can delete five 0's, the 5, and the 8, to get the prime 9001
* Write down the prime 8555555555555555555551 → I can delete the 8 and nine 5's, to get the prime 555555555551

Now we extend this prime game to bases other than 10.

The minimal elements (https://en.wikipedia.org/wiki/Minimal_element) (https://mathworld.wolfram.com/MaximalElement.html for maximal element, the dual of minimal element, unfortunely there is no article "minimal element" in mathworld, a minimal element of a set (https://en.wikipedia.org/wiki/Set_(mathematics), https://mathworld.wolfram.com/Set.html) under a partial ordering binary relation (https://en.wikipedia.org/wiki/Binary_relation, https://mathworld.wolfram.com/BinaryRelation.html) is a maximal element of the same set under its converse relation (https://en.wikipedia.org/wiki/Converse_relation), a converse relation of a partial ordering relation must also be a partial ordering relation) of the prime numbers (https://en.wikipedia.org/wiki/Prime_number, https://primes.utm.edu/glossary/xpage/Prime.html, https://www.rieselprime.de/ziki/Prime, https://mathworld.wolfram.com/PrimeNumber.html) which are > *b* written in the positional numeral system (https://en.wikipedia.org/wiki/Positional_numeral_system) with radix (https://en.wikipedia.org/wiki/Radix, https://primes.utm.edu/glossary/xpage/Radix.html, https://www.rieselprime.de/ziki/Base, https://mathworld.wolfram.com/Radix.html) *b*, as digit (https://en.wikipedia.org/wiki/Numerical_digit, https://www.rieselprime.de/ziki/Digit, https://mathworld.wolfram.com/Digit.html) strings (https://en.wikipedia.org/wiki/String_(computer_science), https://mathworld.wolfram.com/String.html) under the subsequence (https://en.wikipedia.org/wiki/Subsequence, https://mathworld.wolfram.com/Subsequence.html) ordering (https://en.wikipedia.org/wiki/Partially_ordered_set, https://mathworld.wolfram.com/PartialOrder.html), for 2 ≤ *b* ≤ 36 (I stop at base 36 since this base is a maximum base for which it is possible to write the numbers with the symbols 0, 1, ..., 9 and A, B, ..., Z, references: http://www.tonymarston.net/php-mysql/converter.html, https://www.dcode.fr/base-36-cipher, http://www.urticator.net/essay/5/567.html, http://www.urticator.net/essay/6/624.html, https://docs.python.org/3/library/functions.html#int, https://reference.wolfram.com/language/ref/BaseForm.html, https://baseconvert.com/, https://www.calculand.com/unit-converter/zahlen.php?og=Base+2-36&ug=1, also see https://primes.utm.edu/notes/words.html for the English words which are prime numbers when viewed as a number base 36), using A−Z to represent digit values 10 to 35.

By the theorem that there are no infinite (https://en.wikipedia.org/wiki/Infinite_set, https://primes.utm.edu/glossary/xpage/Infinite.html, https://mathworld.wolfram.com/InfiniteSet.html) antichains (https://en.wikipedia.org/wiki/Antichain, https://mathworld.wolfram.com/Antichain.html) (i.e. a subset of a partially ordered set such that any two distinct elements in the subset are incomparable (https://en.wikipedia.org/wiki/Comparability, https://mathworld.wolfram.com/ComparableElements.html)) for the subsequence ordering (i.e. the set of the minimal elements of any set under the subsequence ordering must be finite, even if this set is infinite, such as the set of the "prime numbers > *b*" strings in base *b* (for a given base *b* ≥ 2), for the proofs for that there are infinitely many primes, see https://en.wikipedia.org/wiki/Euclid%27s_theorem, https://mathworld.wolfram.com/EuclidsTheorems.html, https://primes.utm.edu/notes/proofs/infinite/, https://primes.utm.edu/notes/proofs/infinite/euclids.html, https://primes.utm.edu/notes/proofs/infinite/topproof.html, https://primes.utm.edu/notes/proofs/infinite/goldbach.html, https://primes.utm.edu/notes/proofs/infinite/kummers.html, https://primes.utm.edu/notes/proofs/infinite/Saidak.html), there must be only finitely such minimal elements in every base *b*.

Addition (https://en.wikipedia.org/wiki/Addition, https://www.rieselprime.de/ziki/Addition, https://mathworld.wolfram.com/Addition.html) and multiplication (https://en.wikipedia.org/wiki/Multiplication, https://www.rieselprime.de/ziki/Multiplication, https://mathworld.wolfram.com/Multiplication.html) are the basic operations of arithmetic (https://en.wikipedia.org/wiki/Arithmetic, https://www.rieselprime.de/ziki/Arithmetic, https://mathworld.wolfram.com/Arithmetic.html) (which is also the basics of mathematics (https://en.wikipedia.org/wiki/Mathematics, https://www.rieselprime.de/ziki/Mathematics, https://mathworld.wolfram.com/Mathematics.html)). In the addition operation, the identity element (https://en.wikipedia.org/wiki/Identity_element, https://mathworld.wolfram.com/IdentityElement.html) is 0, and all natural numbers > 0 can be written as the sum of many 1’s, and the number 1 cannot be broken up; in the multiplication operation, the identity element is 1, and all natural numbers > 1 can be written as the product of many prime numbers, and the prime numbers cannot be broken up. Also, prime numbers are central in number theory (https://en.wikipedia.org/wiki/Number_theory, https://www.rieselprime.de/ziki/Number_theory, https://mathworld.wolfram.com/NumberTheory.html) because of the fundamental theorem of arithmetic (https://en.wikipedia.org/wiki/Fundamental_theorem_of_arithmetic, https://primes.utm.edu/glossary/xpage/FundamentalTheorem.html, https://mathworld.wolfram.com/FundamentalTheoremofArithmetic.html): every natural number greater than 1 is either a prime itself or can be factorized (https://en.wikipedia.org/wiki/Integer_factorization, https://www.rieselprime.de/ziki/Factorization, https://mathworld.wolfram.com/PrimeFactorization.html) as a product of primes that is unique up to (https://en.wikipedia.org/wiki/Up_to) their order. Also, primes are the natural numbers *n* > 1 such that if *n* divides (https://en.wikipedia.org/wiki/Divides, https://primes.utm.edu/glossary/xpage/Divides.html, https://mathworld.wolfram.com/Divides.html) *x*×*y* (*x* and *y* are natural numbers), then *n* divides either *x* or *y* (or both). Also, prime numbers are the numbers *n* such that the ring (https://en.wikipedia.org/wiki/Ring_(mathematics), https://mathworld.wolfram.com/Ring.html) of integers modulo *n* (https://en.wikipedia.org/wiki/Integers_modulo_n, https://mathworld.wolfram.com/Mod.html) (i.e. the ring *Z*<sub>*n*</sub>) is a field (https://en.wikipedia.org/wiki/Field_(mathematics), https://mathworld.wolfram.com/Field.html) (also is an integral domain (https://en.wikipedia.org/wiki/Integral_domain, https://mathworld.wolfram.com/IntegralDomain.html), also is a division ring (https://en.wikipedia.org/wiki/Division_ring), also has no zero divisors (https://en.wikipedia.org/wiki/Zero_divisor, https://mathworld.wolfram.com/ZeroDivisor.html) other than 0 (for the special case that *n* = 1, it is the zero ring (https://en.wikipedia.org/wiki/Zero_ring, https://mathworld.wolfram.com/TrivialRing.html))). Besides, "the set of the minimal elements of the base *b* representations of the prime numbers > *b* under the subsequence ordering" to "the set of the prime numbers (except *b* itself) digit strings with length > 1 in base *b*" to "the partially ordered binary relation by subsequence" is "the set of the prime numbers" to "the set of the integers > 1" to "the partially ordered binary relation by divisibility" (and indeed, the "> 1" in "the prime numbers (except *b* itself) digit strings with length > 1 in base *b*" can be corresponded to the "> 1" in "the integers > 1") (for the reason why *b* itself is excluded (when *b* is prime, if *b* is composite, then there is no difference to include the *b* itself or not), see the sections below and https://mersenneforum.org/showpost.php?p=531632&postcount=7, the main reason is that *b* is the *only* prime ending with 0), thus the problem in this article is very important and beautiful.

|subsequence ordering|divisibility ordering|
|---|---|
|the "prime numbers > *b*" digit strings in base *b*|the integers > 1|
|the set of the prime numbers (except *b* itself) digit strings with length > 1 in base *b*" to "the partially ordered binary relation by subsequence (which is exactly the target of this project)|the set of the prime numbers|
|no common subsequence with length > 1|coprime (no common divisor > 1) (https://en.wikipedia.org/wiki/Coprime_integers, https://primes.utm.edu/glossary/xpage/RelativelyPrime.html, https://www.rieselprime.de/ziki/Coprime, https://mathworld.wolfram.com/RelativelyPrime.html)|
|proper subsequence with length > 1|proper factor (https://en.wikipedia.org/wiki/Proper_factor, https://mathworld.wolfram.com/ProperFactor.html, https://mathworld.wolfram.com/ProperDivisor.html) > 1|
|longest common subsequence (https://en.wikipedia.org/wiki/Longest_common_subsequence_problem)|greatest common divisor (https://en.wikipedia.org/wiki/Greatest_common_divisor, https://mathworld.wolfram.com/GreatestCommonDivisor.html)|
|shortest common supersequence (https://en.wikipedia.org/wiki/Shortest_common_supersequence_problem)|least common multiple (https://en.wikipedia.org/wiki/Least_common_multiple, https://mathworld.wolfram.com/LeastCommonMultiple.html)|
|pairwise incomparable strings (no string is a subsequence of another string)|pairwise incomparable numbers (no number divides another number)|

This problem is an extension of the original minimal prime problem (https://cs.uwaterloo.ca/~cbright/reports/mepn.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_17.pdf), https://cs.uwaterloo.ca/~shallit/Papers/br10.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_18.pdf), https://cs.uwaterloo.ca/~cbright/talks/minimal-slides.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_19.pdf), https://doi.org/10.1080/10586458.2015.1064048 (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_20.pdf), https://scholar.colorado.edu/downloads/hh63sw661 (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_16.pdf), https://github.com/curtisbright/mepn-data, https://github.com/curtisbright/mepn, https://github.com/RaymondDevillers/primes) to cover Conjectures ‘R Us Sierpinski/Riesel conjectures base *b* (http://www.noprimeleftbehind.net/crus/, http://www.noprimeleftbehind.net/crus/Sierp-conjectures.htm, http://www.noprimeleftbehind.net/crus/Sierp-conjectures-powers2.htm, http://www.noprimeleftbehind.net/crus/Riesel-conjectures.htm, http://www.noprimeleftbehind.net/crus/Riesel-conjectures-powers2.htm, http://www.noprimeleftbehind.net/crus/Sierp-conjecture-reserves.htm, http://www.noprimeleftbehind.net/crus/Riesel-conjecture-reserves.htm, https://www.utm.edu/staff/caldwell/preprints/2to100.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_3.pdf)) with *k*-values < *b*, i.e. finding the smallest prime of the form *k*×*b*<sup>*n*</sup>+1 and *k*×*b*<sup>*n*</sup>−1 (or proving that such prime does not exist) for all *k* < *b* (also to cover dual (http://www.kurims.kyoto-u.ac.jp/EMIS/journals/INTEGERS/papers/i61/i61.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_1.pdf), https://www.rechenkraft.net/wiki/Five_or_Bust, https://oeis.org/A076336/a076336c.html, http://www.mit.edu/~kenta/three/prime/dual-sierpinski/ezgxggdm/dualsierp-excerpt.txt, http://mit.edu/kenta/www/three/prime/dual-sierpinski/ezgxggdm/dualsierp.txt.gz, https://mersenneforum.org/showthread.php?t=10761, https://mersenneforum.org/showthread.php?t=6545) Sierpinski/Riesel conjectures base *b* with *k*-values < *b*, i.e. finding the smallest prime of the form *b*<sup>*n*</sup>+*k* and *b*<sup>*n*</sup>−*k* (which are the dual forms of *k*×*b*<sup>*n*</sup>+1 and *k*×*b*<sup>*n*</sup>−1, respectively) (or proving that such prime does not exist) for all *k* < *b*) (also to cover finding the smallest prime of some classic forms (or proving that such prime does not exist), such as *b*<sup>*n*</sup>+2, *b*<sup>*n*</sup>−2, *b*<sup>*n*</sup>+(*b*−1), *b*<sup>*n*</sup>−(*b*−1), 2×*b*<sup>*n*</sup>+1, 2×*b*<sup>*n*</sup>−1, (*b*−1)×*b*<sup>*n*</sup>+1, (*b*−1)×*b*<sup>*n*</sup>−1, with *n* ≥ 1, for the same base *b* (of course, for some bases *b* the original minimal prime base *b* problem already covers finding the smallest prime of these forms, e.g. the original minimal prime base *b* problem covers finding the smallest prime of the form (*b*−1)×*b*<sup>*n*</sup>+1 if and only if *b*−1 is not prime, and the original minimal prime base *b* problem covers finding the smallest prime of the form (*b*−1)×*b*<sup>*n*</sup>−1 if and only if neither *b*−1 nor *b*−2 is prime, but I want the problem covers finding the smallest prime of these forms for *all* bases *b*)). The original minimal prime base *b* problem does not cover Conjectures ‘R Us Sierpinski/Riesel conjectures base *b* with conjectured *k* (http://www.noprimeleftbehind.net/crus/tab/CRUS_tab.htm, http://www.noprimeleftbehind.net/crus/vstats/all_ck_sierpinski.txt, http://www.noprimeleftbehind.net/crus/vstats/all_ck_riesel.txt) < *b*, since in Riesel side, the prime is not minimal prime in original definition if either *k*−1 or *b*−1 (or both) is prime, and in Sierpinski side, the prime is not minimal prime in original definition if *k* is prime (e.g. 25×30<sup>34205</sup>−1 is not minimal prime in base 30 in original definition, since it is OT<sub>34205</sub> in base 30, and T (= 29 in decimal) is prime, but it is minimal prime in base 30 if only primes > base are counted), but this extended version of minimal prime base *b* problem does. (There is someone else who also exclude the single-digit primes, but his research is about substring (https://en.wikipedia.org/wiki/Substring) instead of subsequence, see https://www.mersenneforum.org/showpost.php?p=235383&postcount=42, subsequences can contain consecutive elements which were not consecutive in the original sequence, a subsequence which consists of a consecutive run of elements from the original sequence, such as 234 from 123456, is a substring, substring is a refinement of the subsequence, subsequence is a generalization of substring, substring must be subsequence, but subsequence may not be substring, 514 is a subsequence of 352148, but not a substring of 352148, see the list below of the comparation of "subsequence" and "substring")

|subsequence|substring|
|---|---|
|https://oeis.org/A071062|https://oeis.org/A033274|
|https://oeis.org/A130448|https://oeis.org/A238334|
|https://oeis.org/A039995|https://oeis.org/A039997|
|https://oeis.org/A039994|https://oeis.org/A039996|
|https://oeis.org/A094535|https://oeis.org/A093301|
|https://oeis.org/A350508|https://oeis.org/A038103|
|https://oeis.org/A354113|https://oeis.org/A354114|
|longest common subsequence problem (https://en.wikipedia.org/wiki/Longest_common_subsequence_problem)|longest common substring problem (https://en.wikipedia.org/wiki/Longest_common_substring_problem)

However, including the base (*b*) itself results in automatic elimination of all possible extension numbers with "0 after 1" from the set (when the base is prime, if the base is composite, then there is no difference to include the base (*b*) itself or not), which is quite restrictive (since when the base is prime, then the base (*b*) itself is the only prime ending with 0, i.e. having trailing zero (https://en.wikipedia.org/wiki/Trailing_zero), since in any base, all numbers ending with 0 (i.e. having trailing zero) are divisible by the base (*b*), thus cannot be prime unless it is equal the base (*b*), i.e. "10" in base *b*, note that the numbers cannot have leading zero (https://en.wikipedia.org/wiki/Leading_zero), since typically this is not the way we write numbers (in any base), thus for all primes in our sets (i.e. all primes > base (*b*)), all zero digits must be "between" other digits).

Besides, this problem is better than the original minimal prime problem since this problem is regardless whether 1 is considered as prime or not, i.e. no matter 1 is considered as prime or not prime (https://primes.utm.edu/notes/faq/one.html, https://primefan.tripod.com/Prime1ProCon.html, https://cs.uwaterloo.ca/journals/JIS/VOL15/Caldwell2/cald6.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_24.pdf), http://www.numericana.com/answer/numbers.htm#one), the sets in this problem are the same, while the sets in the original minimal prime problem are different, e.g. in base 10, if 1 is considered as prime, then the set in the original minimal prime problem is {1, 2, 3, 5, 7, 89, 409, 449, 499, 6469, 6949, 9049, 9649, 9949, 60649, 666649, 946669, 60000049, 66000049, 66600049}, while if 1 is not considered as prime, then the set in the original minimal prime problem is {2, 3, 5, 7, 11, 19, 41, 61, 89, 409, 449, 499, 881, 991, 6469, 6949, 9001, 9049, 9649, 9949, 60649, 666649, 946669, 60000049, 66000049, 66600049}, however, in base 10, the set in this problem is always {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027}, no matter 1 is considered as prime or not prime.

The third reason for excluding the single-digit primes is that they are trivial like that Conjectures ‘R Us Sierpinski/Riesel conjectures base *b* requires exponent *n* ≥ 1 for these primes (see https://mersenneforum.org/showpost.php?p=447679&postcount=27), *n* = 0 is not acceptable to avoid the trivial primes (e.g. 2×*b*<sup>*n*</sup>+1, 4×*b*<sup>*n*</sup>+1, 6×*b*<sup>*n*</sup>+1, 10×*b*<sup>*n*</sup>+1, 12×*b*<sup>*n*</sup>+1, 16×*b*<sup>*n*</sup>+1, 3×*b*<sup>*n*</sup>−1, 4×*b*<sup>*n*</sup>−1, 6×*b*<sup>*n*</sup>−1, 8×*b*<sup>*n*</sup>−1, 12×*b*<sup>*n*</sup>−1, 14×*b*<sup>*n*</sup>−1, ... cannot be quickly eliminated with *n* = 0, or the conjectures become much more easy and uninteresting), for the same reason, this minimal prime puzzle requires ≥ *b* (i.e. ≥ 2 digits) for these primes, single-digit primes are not acceptable to avoid the trivial primes (e.g. families containing digit 2, 3, 5, 7, B, D, H, J, N, T, V, ... cannot be quickly eliminated with the single-digit prime, or the conjectures become much more easy and uninteresting).

The fourth reason for excluding the primes ≤ *b* is that starting with *b*+1 makes the formula of the number of possible (first digit,last digit) combo of a minimal prime in base *b* more simple and smooth number (https://en.wikipedia.org/wiki/Smooth_number, https://mathworld.wolfram.com/SmoothNumber.html), it is (*b*−1)×*eulerphi*(*b*) (https://oeis.org/A062955), where *eulerphi* is Euler's totient function (https://en.wikipedia.org/wiki/Euler%27s_totient_function, https://primes.utm.edu/glossary/xpage/EulersPhi.html, https://mathworld.wolfram.com/TotientFunction.html, https://oeis.org/A000010), since *b*−1 is the number of possible first digit (except 0, all digits can be first digit), and *eulerphi*(*b*) is the number of possible last digit (only digits coprime to *b* can be last digit), by rule of product, there are (*b*−1)×*eulerphi*(*b*) possible (first digit,last digit) combo, and if start with *b*, then when *b* is prime, there is an additional possible (first digit,last digit) combo: (1,0), and hence the formula will be (*b*−1)×*eulerphi*(*b*)+1 if *b* is prime, or (*b*−1)×*eulerphi*(*b*) if *b* is composite (the fully formula will be (*b*−1)×*eulerphi*(*b*)+*isprime*(*b*) or (*b*−1)×*eulerphi*(*b*)+*floor*((*b*−*eulerphi*(*b*)) / (*b*−1))), which is more complex, and if start with 1 (i.e. the original minimal prime problem), the formula is much more complex.

This problem covers finding the smallest prime of these forms in the same base *b* (or proving that such prime does not exist): (while the original minimal prime problem does not cover some of these forms for some bases (or all bases) *b*)

|family|smallest allowed *n*|*OEIS* sequences for the smallest *n* such that this form is prime|references
|---|---|---|---|
|(*b*<sup>*n*</sup>−1)/(*b*−1)|2|https://oeis.org/A084740<br>https://oeis.org/A084738 (corresponding primes)<br>https://oeis.org/A065854 (prime *b*)<br>https://oeis.org/A279068 (prime *b*, corresponding primes)<br>https://oeis.org/A128164 (*n* = 2 not allowed)<br>https://oeis.org/A285642 (*n* = 2 not allowed, corresponding primes)|http://www.fermatquotient.com/PrimSerien/GenRepu.txt<br>https://web.archive.org/web/20021111141203/http://www.users.globalnet.co.uk/~aads/primes.html<br>http://www.primenumbers.net/Henri/us/MersFermus.htm<br>https://www.ams.org/journals/mcom/1993-61-204/S0025-5718-1993-1185243-9/S0025-5718-1993-1185243-9.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_4.pdf)|
|*b*<sup>*n*</sup>+1|1|https://oeis.org/A228101 (*log*<sub>2</sub> of *n*)<br>https://oeis.org/A079706<br>https://oeis.org/A084712 (corresponding primes)<br>https://oeis.org/A123669 (*n* = 1 not allowed, corresponding primes)|http://jeppesn.dk/generalized-fermat.html<br>http://www.noprimeleftbehind.net/crus/GFN-primes.htm<br>http://yves.gallot.pagesperso-orange.fr/primes/index.html<br>http://yves.gallot.pagesperso-orange.fr/primes/results.html<br>http://yves.gallot.pagesperso-orange.fr/primes/stat.html|
|(*b*<sup>*n*</sup>+1)/2 (for odd *b*)|2||http://www.fermatquotient.com/PrimSerien/GenFermOdd.txt|
|2×*b*<sup>*n*</sup>+1|1|https://oeis.org/A119624<br>https://oeis.org/A253178 (only bases *b* which have possible primes)<br>https://oeis.org/A098872 (*b* divisible by 6)|https://mersenneforum.org/showthread.php?t=6918<br>https://mersenneforum.org/showthread.php?t=19725 (*b* == 11 mod 12)|
|2×*b*<sup>*n*</sup>−1|1|https://oeis.org/A119591<br>https://oeis.org/A098873 (*b* divisible by 6)|https://mersenneforum.org/showthread.php?t=24576, https://www.mersenneforum.org/attachment.php?attachmentid=20976&d=1567314217|
|*b*<sup>*n*</sup>+2|1|https://oeis.org/A138066<br>https://oeis.org/A084713 (corresponding primes)<br>https://oeis.org/A138067 (*n* = 1 not allowed)|
|*b*<sup>*n*</sup>−2|2|https://oeis.org/A250200<br>https://oeis.org/A255707 (*n* = 1 allowed)<br>https://oeis.org/A084714 (*n* = 1 allowed, corresponding primes)<br>https://oeis.org/A292201 (prime *b*, *n* = 1 allowed)|https://www.primepuzzles.net/puzzles/puzz_887.htm (*n* = 1 allowed)|
|3×*b*<sup>*n*</sup>+1|1|https://oeis.org/A098877 (*b* divisible by 6)||
|3×*b*<sup>*n*</sup>−1|1|https://oeis.org/A098876 (*b* divisible by 6)||
|10×*b*<sup>*n*</sup>+1|1|https://oeis.org/A088782<br>https://oeis.org/A088622 (corresponding primes)||
|2×*b*<sup>*n*</sup>+3|1||https://www.primegrid.com/forum_thread.php?id=9538|
|*b*<sup>*n*</sup>/2+1 (for even *b*)|2||https://www.primegrid.com/forum_thread.php?id=9538|
|(*b*−1)×*b*<sup>*n*</sup>+1|1|https://oeis.org/A305531<br>https://oeis.org/A087139 (prime *b*, *n* replaced by *n*+1)|https://www.rieselprime.de/ziki/Williams_prime_MP_least<br>https://www.rieselprime.de/ziki/Williams_prime_MP_table<br>https://sites.google.com/view/williams-primes<br>http://www.bitman.name/math/table/477|
|(*b*−1)×*b*<sup>*n*</sup>−1|1|https://oeis.org/A122396 (prime *b*, *n* replaced by *n*+1)|https://harvey563.tripod.com/wills.txt<br>https://www.rieselprime.de/ziki/Williams_prime_MM_least<br>https://www.rieselprime.de/ziki/Williams_prime_MM_table<br>https://sites.google.com/view/williams-primes<br>http://matwbn.icm.edu.pl/ksiazki/aa/aa39/aa3912.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_9.pdf)<br>https://www.ams.org/journals/mcom/2000-69-232/S0025-5718-00-01212-6/S0025-5718-00-01212-6.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_10.pdf)<br>http://www.bitman.name/math/table/484|
|*b*<sup>*n*</sup>+(*b*−1)|1|https://oeis.org/A076845<br>https://oeis.org/A076846 (corresponding primes)<br>https://oeis.org/A078178 (*n* = 1 not allowed)<br>https://oeis.org/A078179 (*n* = 1 not allowed, corresponding primes)|https://sites.google.com/view/williams-primes|
|*b*<sup>*n*</sup>−(*b*−1)|2|https://oeis.org/A113516<br>https://oeis.org/A343589 (corresponding primes)|https://sites.google.com/view/williams-primes<br>https://cs.uwaterloo.ca/journals/JIS/VOL3/mccranie.html (prime *b*)<br>http://www.bitman.name/math/table/435 (prime *b*)|
|*k*×*b*<sup>*n*</sup>+1 for all 2 ≤ *k* ≤ 12|1||https://www.rieselprime.de/ziki/Proth_prime_small_bases_least_n<br>https://mersenneforum.org/showthread.php?t=10354|
|*k*×*b*<sup>*n*</sup>−1 for all 2 ≤ *k* ≤ 12|1||https://www.rieselprime.de/ziki/Riesel_prime_small_bases_least_n<br>https://mersenneforum.org/showthread.php?t=10354|

(below (as well as the "left *b*" files), family "12{3}45" means sequence {1245, 12345, 123345, 1233345, 12333345, 123333345, ...}, where the members are expressed as base *b* strings, like the numbers in https://stdkmd.net/nrr/aaaab.htm, https://stdkmd.net/nrr/abbbb.htm, https://stdkmd.net/nrr/aaaba.htm, https://stdkmd.net/nrr/abaaa.htm, https://stdkmd.net/nrr/abbba.htm, https://stdkmd.net/nrr/abbbc.htm, https://stdkmd.net/nrr/prime/primecount.txt, https://stdkmd.net/nrr/prime/primedifficulty.txt, e.g. 1{3} (in decimal) is the numbers in https://stdkmd.net/nrr/1/13333.htm, and {1}3 (in decimal) is the numbers in https://stdkmd.net/nrr/1/11113.htm, and 1{2}3 (in decimal) is the numbers in https://stdkmd.net/nrr/1/12223.htm)

In fact, this problem covers finding the smallest prime of these form in the same base *b*: (where *x*, *y*, *z* are any digits in base *b*)

* *x*{0}*y*
* *x*{*y*} (unless *y* = 1) (see https://stdkmd.net/nrr/abbbb.htm)
* {*x*}*y* (unless *x* = 1) (see https://stdkmd.net/nrr/aaaab.htm)
* *x*{0}*yz* (unless there is a prime of the form *x*{0}*y* or *x*{0}*z*)
* *xy*{0}*z* (unless there is a prime of the form *x*{0}*z* or *y*{0}*z*)
* *xy*{*x*} (unless either *x* = 1 or there is a prime of the form *y*{*x*} (or both)) (see https://stdkmd.net/nrr/abaaa.htm)
* {*x*}*yx* (unless either *x* = 1 or there is a prime of the form {*x*}*y* (or both)) (see https://stdkmd.net/nrr/aaaba.htm)

Proving that "the set of the minimal elements of the base *b* representations of the prime numbers > *b* under the subsequence ordering" = the set *S* is equivalent to:

* Prove that all elements in *S*, when read as base *b* representation, are primes > *b*.
* Prove that all proper subsequence of all elements in *S*, when read as base *b* representation, which are > *b*, are composite.
* Prove that all primes > *b*, when written in base *b*, contain at least one element in *S* as subsequence (equivalently, prove that all strings not containing any element in *S* as subsequence, when read as base *b* representation, which are > *b*, are composite).

("the set of the minimal elements of the base *b* representations of the prime numbers > *b* under the subsequence ordering" = *S* is proved if and only if all these three problems are proved, i.e. "the set of the minimal elements of the base *b* representations of the prime numbers > *b* under the subsequence ordering" = *S* is a theorem if and only if all these three "conjectures" are theorems)

e.g. proving that "the set of the minimal elements of the base 10 representations of the prime numbers > 10 under the subsequence ordering" = {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027}, is equivalent to:

* Prove that all of 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027 are primes > 10.
* Prove that all proper subsequence of all elements in {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027} which are > 10 are composite.
* Prove that all primes > 10 contain at least one element in {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027} as subsequence (equivalently, prove that all numbers > 10 not containing any element in {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027} as subsequence are composite, since they are contraposition (https://en.wikipedia.org/wiki/Contraposition), *P* ⟶ *Q* and ¬*Q* ⟶ ¬*P* are logically equivalent (https://en.wikipedia.org/wiki/Logical_equivalence)).

(since for base *b* = 10, all these three problems are proved, i.e. all they are theorems, thus, "the set of the minimal elements of the base 10 representations of the prime numbers > 10 under the subsequence ordering" = {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027} is also proved, i.e. "the set of the minimal elements of the base 10 representations of the prime numbers > 10 under the subsequence ordering" = {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 227, 251, 257, 277, 281, 349, 409, 449, 499, 521, 557, 577, 587, 727, 757, 787, 821, 827, 857, 877, 881, 887, 991, 2087, 2221, 5051, 5081, 5501, 5581, 5801, 5851, 6469, 6949, 8501, 9001, 9049, 9221, 9551, 9649, 9851, 9949, 20021, 20201, 50207, 60649, 80051, 666649, 946669, 5200007, 22000001, 60000049, 66000049, 66600049, 80555551, 555555555551, 5000000000000000000000000000027} is also a theorem)

To solve this problem (i.e. to compute (https://en.wikipedia.org/wiki/Computing) the set of the minimal elements of the base *b* representations of the prime numbers > *b* under the subsequence ordering), we need to determine whether a given family contains a prime. In practice, if family *x*{*Y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *Y* is a set of digits in base *b*) could not be ruled out as only containing composites and *Y* contains two or more digits, then a relatively small prime > *b* could always be found in this family. Intuitively, this is because there are a large number of small strings in such a family, and at least one is likely to be prime (e.g. there are 2<sup>*n*−2</sup> strings of length *n* in the family 1{3,7}9, and there are over a thousand strings of length 12 in the family 1{3,7}9, thus it is very impossible that these numbers are all composite). In the case *Y* contains only one digit, this family is of the form *x*{*y*}*z*, and there is only a single string of each length > (the length of *x* + the length of *z*), and it is not known if the following decision problem (https://en.wikipedia.org/wiki/Decision_problem, https://mathworld.wolfram.com/DecisionProblem.html) is recursively solvable:

Problem: Given strings *x*, *z*, a digit *y*, and a base *b*, does there exist a prime number whose base-*b* expansion is of the form *xy*<sub>*n*</sub>*z* for some *n* ≥ 0? (If we say "yes", then we should find such a prime (the smallest such prime may be very large, e.g. > 10<sup>25000</sup>, and if so, then we should use primality testing programs such as *PFGW* or *LLR* to find it, and before using these programs, we should use sieving programs such as *srsieve* (or *sr*1/2/5*sieve*) to remove the numbers either having small prime factors or having algebraic factors) and prove its primality (and if we want to solve the problem in this article, we should check whether this prime is the smallest such prime or not, i.e. prove all smaller numbers of the form *xy*<sub>*n*</sub>*z* with *n* ≥ 0 are composite, usually by trial division or Fermat primality test), and if we say "no", then we should prove that such prime does not exist, may by covering congruence, algebraic factorization, or combine of them)

An algorithm to solve this problem, for example, would allow us to decide if there are any additional Fermat primes (https://en.wikipedia.org/wiki/Fermat_number, https://primes.utm.edu/glossary/xpage/FermatNumber.html, https://www.rieselprime.de/ziki/Fermat_number, https://mathworld.wolfram.com/FermatNumber.html, https://mathworld.wolfram.com/FermatPrime.html) (of the form 2<sup>2<sup>*n*</sup></sup>+1) other than the known ones (corresponding to *n* = 0, 1, 2, 3, 4). To see this, take *b* = 2, *x* = 1, *y* = 0, and *z* = 0<sub>16</sub>1. Since if 2<sup>*n*</sup>+1 is prime then *n* must be a power of two, a prime of the form *x*{*y*}*z* in base *b* must be a new Fermat prime. Besides, it would allow us to decide if there are infinitely many Mersenne primes (https://en.wikipedia.org/wiki/Mersenne_prime, https://primes.utm.edu/glossary/xpage/MersenneNumber.html, https://primes.utm.edu/glossary/xpage/Mersennes.html, https://www.rieselprime.de/ziki/Mersenne_number, https://www.rieselprime.de/ziki/Mersenne_prime, https://mathworld.wolfram.com/MersenneNumber.html, https://mathworld.wolfram.com/MersennePrime.html) (of the form 2<sup>*p*</sup>−1 with prime *p*). To see this, take *b* = 2, *x* = *𝜆* (the empty string (https://en.wikipedia.org/wiki/Empty_string)), y = 1, and z = 1<sub>*n*+1</sub>, where *n* is the exponent of the Mersenne prime which we want to know whether it is the largest Mersenne prime or not. Since if 2<sup>*n*</sup>−1 is prime then *n* must be a prime, a prime of the form *x*{*y*}*z* in base *b* must be a new Mersenne prime.

(for the references of Fermat primes and Mersenne primes, see http://www.prothsearch.com/fermat.html and http://www.mersenne.org/primes/, respectively)

Some *x*{*y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *y* is a digit in base *b*) families can be proven to contain no primes > *b*, by covering congruence (http://irvinemclean.com/maths/siercvr.htm, http://web.archive.org/web/20060925100410/http://www.glasgowg43.freeserve.co.uk/siernums.htm, https://web.archive.org/web/20061116164533/http://www.glasgowg43.freeserve.co.uk/brier2.htm, https://sites.google.com/site/robertgerbicz/coveringsets, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/coveringsets, http://www.iakovlev.org/zip/riesel2.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_8.pdf), https://www.ams.org/journals/mcom/1975-29-129/S0025-5718-1975-0376583-0/S0025-5718-1975-0376583-0.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_27.pdf), https://www.ams.org/journals/mcom/1983-40-161/S0025-5718-1983-0679453-8/S0025-5718-1983-0679453-8.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_40.pdf), http://yves.gallot.pagesperso-orange.fr/papers/smallbrier.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_48.pdf), https://cs.uwaterloo.ca/journals/JIS/VOL16/Ismailescu/ismailescu3.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_51.pdf), https://arxiv.org/pdf/2209.10646.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_52.pdf), http://www.primepuzzles.net/problems/prob_029.htm, http://www.primepuzzles.net/problems/prob_036.htm, http://www.primepuzzles.net/problems/prob_049.htm, https://www.rieselprime.de/Related/LiskovetsGallot.htm, https://www.rieselprime.de/Related/RieselTwinSG.htm, https://stdkmd.net/nrr/coveringset.htm, https://stdkmd.net/nrr/9/91113.htm#prime_period, https://stdkmd.net/nrr/9/94449.htm#prime_period, https://stdkmd.net/nrr/9/95559.htm#prime_period, https://en.wikipedia.org/wiki/Covering_set, https://www.rieselprime.de/ziki/Covering_set, https://mathworld.wolfram.com/SierpinskisCompositeNumberTheorem.html), algebraic factorization (https://en.wikipedia.org/w/index.php?title=Factorization&oldid=790838198#Recognizable_patterns, https://mathworld.wolfram.com/PolynomialFactorization.html, https://stdkmd.net/nrr/repunit/repunitnote.htm, https://stdkmd.net/nrr/1/10004.htm#about_algebraic, https://stdkmd.net/nrr/1/10008.htm#about_algebraic, https://stdkmd.net/nrr/1/13333.htm#about_algebraic, https://stdkmd.net/nrr/4/40001.htm#about_algebraic, https://stdkmd.net/nrr/5/53333.htm#about_algebraic, https://stdkmd.net/nrr/5/54444.htm#about_algebraic, https://stdkmd.net/nrr/5/55552.htm#about_algebraic, https://stdkmd.net/nrr/7/79999.htm#about_algebraic, https://stdkmd.net/nrr/8/83333.htm#about_algebraic, https://stdkmd.net/nrr/8/89999.htm#about_algebraic, https://stdkmd.net/nrr/8/88889.htm#about_algebraic, https://stdkmd.net/nrr/9/99991.htm#about_algebraic, https://brnikat.com/nums/cullen_woodall/algebraic.txt, https://www.numberempire.com/factoringcalculator.php (e.g. for the family 3{8} in base 9, type "4\*9^n-1", and it will tell you that this form can be factored to (2×3<sup>*n*</sup>−1) × (2×3<sup>*n*</sup>+1))) (which includes difference-of-two-squares factorization (https://en.wikipedia.org/wiki/Difference_of_two_squares) and sum/difference-of-two-*n*th-powers factorization with odd *n* > 1 (https://en.wikipedia.org/wiki/Binomial_number, https://mathworld.wolfram.com/BinomialNumber.html) and Aurifeuillean factorization (https://en.wikipedia.org/wiki/Aurifeuillean_factorization, https://www.rieselprime.de/ziki/Aurifeuillian_factor, https://mathworld.wolfram.com/AurifeuilleanFactorization.html,http://myfactorcollection.mooo.com:8090/source/cyclo.cpp, http://myfactorcollection.mooo.com:8090/LCD_2_199, http://myfactorcollection.mooo.com:8090/LCD_2_998) of *x*<sup>4</sup>+4*y*<sup>4</sup>), or combine of them (https://mersenneforum.org/showthread.php?t=11143, https://www.fq.math.ca/Scanned/33-3/izotov.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_46.pdf), https://doi.org/10.1016/j.jnt.2008.02.004 (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_47.pdf)), e.g. (only list the families which all numbers do not contain "prime > *b*" subsequence) (see post https://mersenneforum.org/showpost.php?p=594923&postcount=231 for the factor pattern for some of these families) (for the case of covering congruence, we can show that the corresponding numbers are > all elements in the sets if the corresponding numbers are > *b*, thus these factorizations are nontrivial; and for the case of algebraic factorization, we can show that both factors are > 1 if the corresponding numbers are > *b*, thus these factorizations are nontrivial; for the case of combine of them, we can show that for the part of covering congruence, the corresponding numbers are > all elements in the sets if the corresponding numbers are > *b*, and for the part of algebraic factorization, both factors are > 1 if the corresponding numbers are > *b*, thus these factorizations are nontrivial)

(You can see the factorization (https://en.wikipedia.org/wiki/Integer_factorization, https://www.rieselprime.de/ziki/Factorization, https://mathworld.wolfram.com/PrimeFactorization.html) of the numbers in these families in *factordb* (http://factordb.com/), you have to convert them to algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form, and you will find that *all* numbers in these families have status (http://factordb.com/status.html) either "FF" or "CF", and no numbers in these families have status (http://factordb.com/status.html) "C" (i.e. in http://factordb.com/listtype.php?t=3), e.g. for the family 3{0}95 in base 13, its algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form is 3×13<sup>*n*+2</sup>+122, and in *factordb* you will find that all numbers in this family are divisible by some element of {5,7,17}, see http://factordb.com/index.php?query=3*13%5E%28n%2B2%29%2B122&use=n&n=0&VP=on&VC=on&EV=on&OD=on&PR=on&FF=on&PRP=on&CF=on&U=on&C=on&perpage=200&format=1&sent=Show; for the family {7}D in base 21, its algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form is (7×21<sup>*n*+1</sup>+113)/20, and in *factordb* you will find that all numbers in this family are divisible by some element of {2,13,17}, see http://factordb.com/index.php?query=%287*21%5E%28n%2B1%29%2B113%29%2F20&use=n&n=1&VP=on&VC=on&EV=on&OD=on&PR=on&FF=on&PRP=on&CF=on&U=on&C=on&perpage=200&format=1&sent=Show (note: for this family *n* = 0 is not allowed, since we only consider the numbers > base); for the family 30{F}A0F in base 16, its algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form is 49×16<sup>*n*+3</sup>−1521, and in *factordb* you will find that no numbers in this family have a prime factor with decimal length > ((the decimal length of the number + 1)/2), and all numbers in this family have two nearly equal (prime or composite) factors, see http://factordb.com/index.php?query=49*16%5E%28n%2B3%29-1521&use=n&n=0&VP=on&VC=on&EV=on&OD=on&PR=on&FF=on&PRP=on&CF=on&U=on&C=on&perpage=200&format=1&sent=Show; for the family 5{1} in base 25, its algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form is (121×25<sup>*n*</sup>−1)/24, and in *factordb* you will find that no numbers in this family have a prime factor with decimal length > ((the decimal length of the number + 1)/2), and all numbers in this family have two nearly equal (prime or composite) factors, see http://factordb.com/index.php?query=%28121*25%5En-1%29%2F24&use=n&n=1&VP=on&VC=on&EV=on&OD=on&PR=on&FF=on&PRP=on&CF=on&U=on&C=on&perpage=200&format=1&sent=Show (note: for this family *n* = 0 is not allowed, since we only consider the numbers > base); for the family {D}5 in base 14, its algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form is 14<sup>*n*+1</sup>−9, and in *factordb* you will find that all numbers with even *n* in this family are divisible by 5, and you will find that no numbers with odd *n* in this family have a prime factor with decimal length > ((the decimal length of the number + 1)/2), and all numbers with odd *n* in this family have two nearly equal (prime or composite) factors, see http://factordb.com/index.php?query=14%5E%28n%2B1%29-9&use=n&n=1&VP=on&VC=on&EV=on&OD=on&PR=on&FF=on&PRP=on&CF=on&U=on&C=on&perpage=200&format=1&sent=Show (note: for this family *n* = 0 is not allowed, since we only consider the numbers > base); for the family 7{9} in base 17, its algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form is (121×17<sup>*n*</sup>−9)/16, and in *factordb* you will find that all numbers with odd *n* in this family are divisible by 2, and you will find that no numbers with even *n* in this family have a prime factor with decimal length > ((the decimal length of the number + 1)/2), and all numbers with even *n* in this family have two nearly equal (prime or composite) factors, see http://factordb.com/index.php?query=%28121*17%5En-9%29%2F16&use=n&n=1&VP=on&VC=on&EV=on&OD=on&PR=on&FF=on&PRP=on&CF=on&U=on&C=on&perpage=200&format=1&sent=Show (note: for this family *n* = 0 is not allowed, since we only consider the numbers > base). In contrast, you can see the factorization of the numbers in unsolved families in base *b* (which are listed in the "left *b*" file) in *factordb*, you will find some numbers in these families which have neither small prime factors (say < 10<sup>16</sup>) nor two nearly equal (prime or composite) factors, also you will find some numbers in these families which have no known proper factor (https://en.wikipedia.org/wiki/Proper_factor, https://mathworld.wolfram.com/ProperFactor.html, https://mathworld.wolfram.com/ProperDivisor.html) > 1 (i.e. you will find some numbers in these families with status (http://factordb.com/status.html) "C" (instead of "CF" or "FF") (i.e. in http://factordb.com/listtype.php?t=3) in *factordb* (http://factordb.com/)), and they have positive Nash weight (https://www.rieselprime.de/ziki/Nash_weight) (or difficulty (https://stdkmd.net/nrr/prime/primedifficulty.txt)), and they have prime candidates, we can use the sense of http://www.iakovlev.org/zip/riesel2.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_8.pdf), https://stdkmd.net/nrr/1/10003.htm#prime_period, https://stdkmd.net/nrr/3/30001.htm#prime_period, https://stdkmd.net/nrr/1/13333.htm#prime_period, https://stdkmd.net/nrr/3/33331.htm#prime_period, https://stdkmd.net/nrr/1/11113.htm#prime_period, https://stdkmd.net/nrr/3/31111.htm#prime_period, https://mersenneforum.org/showpost.php?p=138737&postcount=24, https://mersenneforum.org/showpost.php?p=153508&postcount=147, to show this)

|*b*|family|why this family contain no primes > *b*|
|---|---|---|
|10|2{0}1|always divisible by 3|
|10|2{0}7|always divisible by 3<br>(in fact, always divisible by 9)|
|10|5{0}1|always divisible by 3|
|10|5{0}7|always divisible by 3|
|10|8{0}1|always divisible by 3<br>(in fact, always divisible by 9)|
|10|8{0}7|always divisible by 3|
|10|28{0}7|always divisible by 7|
|10|4{6}9|always divisible by 7|
|10|families ending with 0, 2, 4, 6, or 8|always divisible by 2|
|10|families ending with 0 or 5|always divisible by 5|
|10|{0,3,6,9}|always divisible by 3<br>(non-simple family)|
|10|{0,7}|always divisible by 7<br>(non-simple family)|
|any base (*b*)|families ending with digits *d* which are not coprime to *b*|always divisible by *gcd*(*d*,*b*)|
|any base (*b*)|families whose digits all have a common factor *d* > 1|always divisible by *d*|
|3|1{0}1|always divisible by 2|
|4|2{0}1|always divisible by 3|
|5|1{0}1|always divisible by 2|
|5|1{0}3|always divisible by 2<br>(in fact, always divisible by 4)|
|5|3{0}1|always divisible by 2<br>(in fact, always divisible by 4)|
|5|11{0}3|always divisible by 3|
|5|3{0}11|always divisible by 3|
|6|4{0}1|always divisible by 5|
|7|1{0}1|always divisible by 2|
|7|1{0}3|always divisible by 2|
|7|1{0}5|always divisible by 2<br>(in fact, always divisible by 6)|
|7|3{0}1|always divisible by 2|
|7|3{0}5|always divisible by 2|
|7|5{0}1|always divisible by 2<br>(in fact, always divisible by 6)|
|7|5{0}3|always divisible by 2|
|7|1{0}2|always divisible by 3|
|7|2{0}1|always divisible by 3|
|7|4{0}5|always divisible by 3|
|7|5{0}4|always divisible by 3|
|7|1{0}1{0}1|always divisible by 3<br>(non-simple family)|
|7|1{0}3{0}5|always divisible by 3<br>(non-simple family)|
|7|1{0}5{0}3|always divisible by 3<br>(non-simple family)|
|7|3{0}1{0}5|always divisible by 3<br>(non-simple family)|
|7|3{0}5{0}1|always divisible by 3<br>(non-simple family)|
|7|5{0}1{0}3|always divisible by 3<br>(non-simple family)|
|7|5{0}3{0}1|always divisible by 3<br>(non-simple family)|
|7|1{0}1{0}1{0}1|always divisible by 2<br>(non-simple family)|
|7|1{0}1{0}2|always divisible by 2<br>(non-simple family)|
|7|1{0}2{0}1|always divisible by 2<br>(non-simple family)|
|7|2{0}1{0}1|always divisible by 2<br>(non-simple family)|
|7|4{0}5{0}5|always divisible by 2<br>(non-simple family)|
|7|5{0}4{0}5|always divisible by 2<br>(non-simple family)|
|7|5{0}5{0}4|always divisible by 2<br>(non-simple family)|
|8|2{0}5|always divisible by 7|
|8|4{0}3|always divisible by 7|
|8|6{0}1|always divisible by 7|
|8|44{0}3|always divisible by 3|
|8|6{0}11|always divisible by 3|
|9|{7}62|always divisible by 7|
|12|A{0}21|always divisible by 5|
|13|C{A}5|always divisible by 7|
|14|40{4}9|always divisible by 61|
|15|9{6}8|always divisible by 11|
|16|2{C}3|always divisible by 7|
|21|B0{H}6H|always divisible by 4637|
|28|4{O}9|always divisible by 11|
|28|D{6}R|always divisible by 17|
|28|N{6}R|always divisible by 11|
|9|{1}5|always divisible by some element of {2,5}<br>divisible by 2 if the length is even, divisible by 5 if the length is odd|
|9|{1}61|always divisible by some element of {2,5}<br>divisible by 2 if the length is even, divisible by 5 if the length is odd|
|9|2{7}|always divisible by some element of {2,5}<br>divisible by 2 if the length is odd, divisible by 5 if the length is even|
|9|{3}5|always divisible by some element of {2,5}<br>divisible by 2 if the length is even, divisible by 5 if the length is odd|
|9|{3}8|always divisible by some element of {2,5}<br>divisible by 2 if the length is odd, divisible by 5 if the length is even|
|9|{3}05|always divisible by some element of {2,5}<br>divisible by 2 if the length is odd, divisible by 5 if the length is even|
|9|5{1}|always divisible by some element of {2,5}<br>divisible by 2 if the length is even, divisible by 5 if the length is odd|
|9|5{7}|always divisible by some element of {2,5}<br>divisible by 2 if the length is even, divisible by 5 if the length is odd|
|9|6{1}|always divisible by some element of {2,5}<br>divisible by 2 if the length is odd, divisible by 5 if the length is even|
|9|{7}2|always divisible by some element of {2,5}<br>divisible by 2 if the length is odd, divisible by 5 if the length is even|
|9|{7}5|always divisible by some element of {2,5}<br>divisible by 2 if the length is even, divisible by 5 if the length is odd|
|9|{7}05|always divisible by some element of {2,5}<br>divisible by 2 if the length is odd, divisible by 5 if the length is even|
|9|{1}6{1}|always divisible by some element of {2,5}<br>(non-simple family)<br>divisible by 2 if the length is odd, divisible by 5 if the length is even|
|9|{7}2{7}|always divisible by some element of {2,5}<br>(non-simple family)<br>divisible by 2 if the length is odd, divisible by 5 if the length is even|
|9|5{0}{7}|always divisible by some element of {2,5}<br>(non-simple family)<br>divisible by 2 if the number of 7's is odd, divisible by 5 if the number of 7's is even|
|9|{3}{0}5|always divisible by some element of {2,5}<br>(non-simple family)<br>divisible by 2 if the number of 3's is odd, divisible by 5 if the number of 3's is even|
|9|{7}{0}5|always divisible by some element of {2,5}<br>(non-simple family)<br>divisible by 2 if the number of 7's is odd, divisible by 5 if the number of 7's is even|
|11|2{5}|always divisible by some element of {2,3}<br>divisible by 2 if the length is odd, divisible by 3 if the length is even|
|11|3{5}|always divisible by some element of {2,3}<br>divisible by 2 if the length is even, divisible by 3 if the length is odd|
|11|3{7}|always divisible by some element of {2,3}<br>divisible by 2 if the length is even, divisible by 3 if the length is odd|
|11|4{7}|always divisible by some element of {2,3}<br>divisible by 2 if the length is odd, divisible by 3 if the length is even|
|11|8{5}|always divisible by some element of {2,3}<br>divisible by 2 if the length is odd, divisible by 3 if the length is even|
|11|9{5}|always divisible by some element of {2,3}<br>divisible by 2 if the length is even, divisible by 3 if the length is odd|
|11|9{7}|always divisible by some element of {2,3}<br>divisible by 2 if the length is even, divisible by 3 if the length is odd|
|11|A{7}|always divisible by some element of {2,3}<br>divisible by 2 if the length is odd, divisible by 3 if the length is even|
|11|{5}2|always divisible by some element of {2,3}<br>divisible by 2 if the length is odd, divisible by 3 if the length is even|
|11|{5}3|always divisible by some element of {2,3}<br>divisible by 2 if the length is even, divisible by 3 if the length is odd|
|11|{7}3|always divisible by some element of {2,3}<br>divisible by 2 if the length is even, divisible by 3 if the length is odd|
|11|{7}4|always divisible by some element of {2,3}<br>divisible by 2 if the length is odd, divisible by 3 if the length is even|
|11|{5}8|always divisible by some element of {2,3}<br>divisible by 2 if the length is odd, divisible by 3 if the length is even|
|11|{5}9|always divisible by some element of {2,3}<br>divisible by 2 if the length is even, divisible by 3 if the length is odd|
|11|{7}9|always divisible by some element of {2,3}<br>divisible by 2 if the length is even, divisible by 3 if the length is odd|
|11|{7}A|always divisible by some element of {2,3}<br>divisible by 2 if the length is odd, divisible by 3 if the length is even|
|11|3{0}{5}|always divisible by some element of {2,3}<br>(non-simple family)<br>divisible by 2 if the number of 5's is odd, divisible by 3 if the number of 5's is even|
|11|{5}{0}3|always divisible by some element of {2,3}<br>(non-simple family)<br>divisible by 2 if the number of 5's is odd, divisible by 3 if the number of 5's is even|
|14|4{0}1|always divisible by some element of {3,5}<br>divisible by 3 if the length is even, divisible by 5 if the length is odd|
|14|B{0}1|always divisible by some element of {3,5}<br>divisible by 3 if the length is odd, divisible by 5 if the length is even|
|14|3{D}|always divisible by some element of {3,5}<br>divisible by 3 if the length is odd, divisible by 5 if the length is even|
|14|A{D}|always divisible by some element of {3,5}<br>divisible by 3 if the length is even, divisible by 5 if the length is odd|
|14|1{0}B|always divisible by some element of {3,5}<br>divisible by 3 if the length is odd, divisible by 5 if the length is even|
|14|{D}3|always divisible by some element of {3,5}<br>divisible by 3 if the length is odd, divisible by 5 if the length is even|
|14|{4}9|always divisible by some element of {3,5}<br>divisible by 3 if the length is odd, divisible by 5 if the length is even|
|14|{8}5|always divisible by some element of {3,5}<br>divisible by 3 if the length is even, divisible by 5 if the length is odd|
|20|8{0}1|always divisible by some element of {3,7}<br>divisible by 3 if the length is odd, divisible by 7 if the length is even|
|20|D{0}1|always divisible by some element of {3,7}<br>divisible by 3 if the length is even, divisible by 7 if the length is odd|
|20|7{J}|always divisible by some element of {3,7}<br>divisible by 3 if the length is even, divisible by 7 if the length is odd|
|20|C{J}|always divisible by some element of {3,7}<br>divisible by 3 if the length is odd, divisible by 7 if the length is even|
|20|1{0}D|always divisible by some element of {3,7}<br>divisible by 3 if the length is even, divisible by 7 if the length is odd|
|20|{J}7|always divisible by some element of {3,7}<br>divisible by 3 if the length is even, divisible by 7 if the length is odd|
|25|D{1}|always divisible by some element of {2,13}<br>divisible by 2 if the length is even, divisible by 13 if the length is odd|
|25|E{1}|always divisible by some element of {2,13}<br>divisible by 2 if the length is odd, divisible by 13 if the length is even|
|25|1E{1}|always divisible by some element of {2,13}<br>divisible by 2 if the length is odd, divisible by 13 if the length is even|
|25|1F{1}|always divisible by some element of {2,13}<br>divisible by 2 if the length is even, divisible by 13 if the length is odd|
|32|A{0}1|always divisible by some element of {3,11}<br>divisible by 3 if the length is even, divisible by 11 if the length is odd|
|32|N{0}1|always divisible by some element of {3,11}<br>divisible by 3 if the length is odd, divisible by 11 if the length is even|
|32|9{V}|always divisible by some element of {3,11}<br>divisible by 3 if the length is odd, divisible by 11 if the length is even|
|32|M{V}|always divisible by some element of {3,11}<br>divisible by 3 if the length is even, divisible by 11 if the length is odd|
|32|1{0}N|always divisible by some element of {3,11}<br>divisible by 3 if the length is odd, divisible by 11 if the length is even|
|32|{V}9|always divisible by some element of {3,11}<br>divisible by 3 if the length is odd, divisible by 11 if the length is even|
|34|6{0}1|always divisible by some element of {5,7}<br>divisible by 5 if the length is even, divisible by 7 if the length is odd|
|34|5{X}|always divisible by some element of {5,7}<br>divisible by 5 if the length is odd, divisible by 7 if the length is even|
|34|S{X}|always divisible by some element of {5,7}<br>divisible by 5 if the length is even, divisible by 7 if the length is odd|
|34|{X}5|always divisible by some element of {5,7}<br>divisible by 5 if the length is odd, divisible by 7 if the length is even|
|8|6{4}7|always divisible by some element of {3,5,13}<br>divisible by 3 if the length is odd, divisible by 5 if the length is == 2 mod 4, divisible by 13 if the length is == 0 mod 4<br>(special example, as the numbers with length ≥ 222 in this family contain "prime > b" subsequence, this prime is 4<sub>220</sub>7)|
|13|3{0}95|always divisible by some element of {5,7,17}<br>divisible by 7 if the length is even, divisible by 5 if the length is == 1 mod 4, divisible by 17 if the length is == 3 mod 4|
|13|95{0}3|always divisible by some element of {5,7,17}<br>divisible by 7 if the length is odd, divisible by 5 if the length is == 2 mod 4, divisible by 17 if the length is == 0 mod 4|
|16|{4}D|always divisible by some element of {3,7,13}<br>divisible by 3 if the length is == 0 mod 3, divisible by 7 if the length is == 2 mod 3, divisible by 13 if the length is == 1 mod 3|
|16|{8}F|always divisible by some element of {3,7,13}<br>divisible by 3 if the length is == 1 mod 3, divisible by 7 if the length is == 0 mod 3, divisible by 13 if the length is == 2 mod 3|
|17|7F{0}D|always divisible by some element of {3,5,29}<br>divisible by 3 if the length is even, divisible by 5 if the length is == 1 mod 4, divisible by 29 if the length is == 3 mod 4|
|17|D{0}7F|always divisible by some element of {3,5,29}<br>divisible by 3 if the length is odd, divisible by 5 if the length is == 2 mod 4, divisible by 29 if the length is == 0 mod 4|
|21|{7}D|always divisible by some element of {2,13,17}<br>divisible by 2 if the length is even, divisible by 13 if the length is == 1 mod 4, divisible by 17 if the length is == 3 mod 4|
|23|7L{0}1|always divisible by some element of {3,5,53}<br>divisible by 3 if the length is even, divisible by 5 if the length is == 1 mod 4, divisible by 53 if the length is == 3 mod 4|
|23|1{0}7L|always divisible by some element of {3,5,53}<br>divisible by 3 if the length is odd, divisible by 5 if the length is == 2 mod 4, divisible by 53 if the length is == 0 mod 4|
|23|{D}GA|always divisible by some element of {2,5,7,37,79}<br>divisible by 2 if the length is even, divisible by 5 if the length is == 3 mod 4, divisible by 7 if the length is == 2 mod 3, divisible by 37 if the length is == 9 mod 12, divisible by 79 if the length is == 1 mod 3|
|23|L{5}L|always divisible by some element of {2,5,7,13,37}<br>divisible by 2 if the length is even, divisible by 5 if the length is == 3 mod 4, divisible by 7 if the length is == 2 mod 3, divisible by 13 if the length is == 3 mod 6, divisible by 37 if the length is == 1 mod 12|
|27|JP{0}1|always divisible by some element of {5,7,73}<br>divisible by 7 if the length is even, divisible by 5 if the length is == 1 mod 4, divisible by 73 if the length is == 3 mod 4|
|27|1{0}JP|always divisible by some element of {5,7,73}<br>divisible by 7 if the length is odd, divisible by 5 if the length is == 2 mod 4, divisible by 73 if the length is == 0 mod 4|
|27|J{0}2|always divisible by some element of {5,7,73}<br>divisible by 7 if the length is odd, divisible by 5 if the length is == 2 mod 4, divisible by 73 if the length is == 0 mod 4|
|29|{2}{5}|always divisible by some element of {2,3,5}<br>(non-simple family)<br>divisible by 2 if the number of 5's is even, divisible by 3 if the number of 2's and the number of 5's are both even or both odd, divisible by 5 if the number of 2's is even|
|30|A{0}9J|always divisible by some element of {7,13,19,31}<br>divisible by 7 if the length is == 0 mod 3, divisible by 13 if the length is == 1 mod 6, divisible by 19 if the length is == 2 mod 3, divisible by 31 if the length is even|
|31|O{5}|always divisible by some element of {2,3,7,19}<br>divisible by 2 if the length is odd, divisible by 3 if the length is == 1 mod 3, divisible by 7 if the length is 2 mod 6, divisible by 19 if the length is == 0 mod 6|
|32|8{0}V|always divisible by some element of {3,5,41}<br>divisible by 3 if the length is odd, divisible by 5 if the length is == 0 mod 4, divisible by 41 if the length is == 2 mod 4|
|32|{G}L|always divisible by some element of {3,5,41}<br>divisible by 3 if the length is odd, divisible by 5 if the length is == 0 mod 4, divisible by 41 if the length is == 2 mod 4|
|9|{1}|difference-of-squares factorization<br>(9<sup>*n*</sup>−1)/8 = (3<sup>*n*</sup>−1) × (3<sup>*n*</sup>+1) / 8|
|8|1{0}1|sum-of-cubes factorization<br>8<sup>*n*</sup>+1 = (2<sup>*n*</sup>+1) × (4<sup>*n*</sup>−2<sup>*n*</sup>+1)|
|9|3{1}|difference-of-squares factorization<br>(25×9<sup>*n*</sup>−1)/8 = (5×3<sup>*n*</sup>−1) × (5×3<sup>*n*</sup>+1) / 8|
|9|3{8}|difference-of-squares factorization<br>4×9<sup>*n*</sup>−1 = (2×3<sup>*n*</sup>−1) × (2×3<sup>*n*</sup>+1)|
|9|{8}5|difference-of-squares factorization<br>9<sup>*n*</sup>−4 = (3<sup>*n*</sup>−2) × (3<sup>*n*</sup>+2)|
|9|3{8}35|difference-of-squares factorization<br>4×9<sup>*n*</sup>−49 = (2×3<sup>*n*</sup>−7) × (2×3<sup>*n*</sup>+7)|
|16|8{F}|difference-of-squares factorization<br>9×16<sup>*n*</sup>−1 = (3×4<sup>*n*</sup>−1) × (3×4<sup>*n*</sup>+1)|
|16|{F}7|difference-of-squares factorization<br>16<sup>*n*</sup>−9 = (4<sup>*n*</sup>−3) × (4<sup>*n*</sup>+3)|
|16|{4}1|difference-of-squares factorization<br>(4×16<sup>*n*</sup>−49)/15 = (2×4<sup>*n*</sup>−7) × (2×4<sup>*n*</sup>+7) / 15|
|16|B{4}1|difference-of-squares factorization<br>(169×16<sup>*n*</sup>−49)/15 = (13×4<sup>*n*</sup>−7) × (13×4<sup>*n*</sup>+7) / 15|
|16|1{5}|difference-of-squares factorization<br>(4×16<sup>*n*</sup>−1)/3 = (2×4<sup>*n*</sup>−1) × (2×4<sup>*n*</sup>+1) / 3|
|16|8{5}|difference-of-squares factorization<br>(25×16<sup>*n*</sup>−1)/3 = (5×4<sup>*n*</sup>−1) × (5×4<sup>*n*</sup>+1) / 3|
|16|10{5}|difference-of-squares factorization<br>(49×16<sup>*n*</sup>−1)/3 = (7×4<sup>*n*</sup>−1) × (7×4<sup>*n*</sup>+1) / 3|
|16|A1{5}|difference-of-squares factorization<br>(484×16<sup>*n*</sup>−1)/3 = (22×4<sup>*n*</sup>−1) × (22×4<sup>*n*</sup>+1) / 3|
|16|7{3}|difference-of-squares factorization<br>(36×16<sup>*n*</sup>−1)/5 = (6×4<sup>*n*</sup>−1) × (6×4<sup>*n*</sup>+1) / 5|
|16|3{F}AF|difference-of-squares factorization<br>4×16<sup>*n*</sup>−81 = (2×4<sup>*n*</sup>−9) × (2×4<sup>*n*</sup>+9)|
|16|30{F}AF|difference-of-squares factorization<br>49×16<sup>*n*</sup>−81 = (7×4<sup>*n*</sup>−9) × (7×4<sup>*n*</sup>+9)|
|16|3{F}A0F|difference-of-squares factorization<br>4×16<sup>*n*</sup>−1521 = (2×4<sup>*n*</sup>−39) × (2×4<sup>*n*</sup>+39)|
|16|30{F}A0F|difference-of-squares factorization<br>49×16<sup>*n*</sup>−1521 = (7×4<sup>*n*</sup>−39) × (7×4<sup>*n*</sup>+39)|
|16|{3}23|difference-of-squares factorization<br>(16<sup>*n*</sup>−81)/5 = (4<sup>*n*</sup>−9) × (4<sup>*n*</sup>+9) / 5<br>(in fact, difference-of-4th-powers factorization)<br>(16<sup>*n*</sup>−81)/5 = (2<sup>*n*</sup>−3) × (2<sup>*n*</sup>+3) × (4<sup>*n*</sup>+9) / 5|
|16|{5}45|difference-of-squares factorization<br>(16<sup>*n*</sup>−49)/3 = (4<sup>*n*</sup>−7) × (4<sup>*n*</sup>+7) / 3|
|16|{C}B|difference-of-squares factorization<br>(4×16<sup>*n*</sup>−9)/5 = (2×4<sup>*n*</sup>−3) × (2×4<sup>*n*</sup>+3) / 5|
|16|{C}D|Aurifeuillian factorization of *x*<sup>4</sup>+4×*y*<sup>4</sup><br>(4×16<sup>*n*</sup>+1)/5 = (2×4<sup>*n*</sup>−2×2<sup>*n*</sup>+1) × (2×4<sup>*n*</sup>+2×2<sup>*n*</sup>+1) / 5|
|16|{C}DD|Aurifeuillian factorization of *x*<sup>4</sup>+4×*y*<sup>4</sup><br>(4×16<sup>*n*</sup>+81)/5 = (2×4<sup>*n*</sup>−6×2<sup>*n*</sup>+9) × (2×4<sup>*n*</sup>+6×2<sup>*n*</sup>+9) / 5|
|25|{1}|difference-of-squares factorization<br>(25<sup>*n*</sup>−1)/24 = (5<sup>*n*</sup>−1) × (5<sup>*n*</sup>+1) / 24|
|25|2{1}|difference-of-squares factorization<br>(49×25<sup>*n*</sup>−1)/24 = (7×5<sup>*n*</sup>−1) × (7×5<sup>*n*</sup>+1) / 24|
|25|5{1}|difference-of-squares factorization<br>(121×25<sup>*n*</sup>−1)/24 = (11×5<sup>*n*</sup>−1) × (11×5<sup>*n*</sup>+1) / 24|
|25|7{1}|difference-of-squares factorization<br>(169×25<sup>*n*</sup>−1)/24 = (13×5<sup>*n*</sup>−1) × (13×5<sup>*n*</sup>+1) / 24|
|25|C{1}|difference-of-squares factorization<br>(289×25<sup>*n*</sup>−1)/24 = (17×5<sup>*n*</sup>−1) × (17×5<sup>*n*</sup>+1) / 24|
|25|F{1}|difference-of-squares factorization<br>(361×25<sup>*n*</sup>−1)/24 = (19×5<sup>*n*</sup>−1) × (19×5<sup>*n*</sup>+1) / 24|
|25|M{1}|difference-of-squares factorization<br>(529×25<sup>*n*</sup>−1)/24 = (23×5<sup>*n*</sup>−1) × (23×5<sup>*n*</sup>+1) / 24|
|25|27{1}|difference-of-squares factorization<br>(1369×25<sup>*n*</sup>−1)/24 = (37×5<sup>*n*</sup>−1) × (37×5<sup>*n*</sup>+1) / 24|
|25|7C{1}|difference-of-squares factorization<br>(4489×25<sup>*n*</sup>−1)/24 = (67×5<sup>*n*</sup>−1) × (67×5<sup>*n*</sup>+1) / 24|
|25|D5{1}|difference-of-squares factorization<br>(7921×25<sup>*n*</sup>−1)/24 = (89×5<sup>*n*</sup>−1) × (89×5<sup>*n*</sup>+1) / 24|
|25|1{3}|difference-of-squares factorization<br>(9×25<sup>*n*</sup>−1)/8 = (3×5<sup>*n*</sup>−1) × (3×5<sup>*n*</sup>+1) / 8|
|25|1{8}|difference-of-squares factorization<br>(4×25<sup>*n*</sup>−1)/3 = (2×5<sup>*n*</sup>−1) × (2×5<sup>*n*</sup>+1) / 3|
|25|5{8}|difference-of-squares factorization<br>(16×25<sup>*n*</sup>−1)/3 = (4×5<sup>*n*</sup>−1) × (4×5<sup>*n*</sup>+1) / 3|
|25|A{3}|difference-of-squares factorization<br>(81×25<sup>*n*</sup>−1)/8 = (9×5<sup>*n*</sup>−1) × (9×5<sup>*n*</sup>+1) / 8|
|25|L{8}|difference-of-squares factorization<br>(64×25<sup>*n*</sup>−1)/3 = (8×5<sup>*n*</sup>−1) × (8×5<sup>*n*</sup>+1) / 3|
|25|{3}2|difference-of-squares factorization<br>(25<sup>*n*</sup>−9)/8 = (5<sup>*n*</sup>−3) × (5<sup>*n*</sup>+3) / 8|
|25|{8}3|difference-of-squares factorization<br>(25<sup>*n*</sup>−16)/3 = (5<sup>*n*</sup>−4) × (5<sup>*n*</sup>+4) / 3|
|25|{8}7|difference-of-squares factorization<br>(25<sup>*n*</sup>−4)/3 = (5<sup>*n*</sup>−2) × (5<sup>*n*</sup>+2) / 3|
|25|{3}2I|difference-of-squares factorization<br>(25<sup>*n*</sup>−81)/8 = (5<sup>*n*</sup>−9) × (5<sup>*n*</sup>+9) / 8|
|25|{8}5I|difference-of-squares factorization<br>(25<sup>*n*</sup>−196)/3 = (5<sup>*n*</sup>−14) × (5<sup>*n*</sup>+14) / 3|
|25|{8}7C|difference-of-squares factorization<br>(25<sup>*n*</sup>−64)/3 = (5<sup>*n*</sup>−8) × (5<sup>*n*</sup>+8) / 3|
|27|8{0}1|sum-of-cubes factorization<br>8×27<sup>*n*</sup>+1 = (2×3<sup>*n*</sup>+1) × (4×9<sup>*n*</sup>−2×3<sup>*n*</sup>+1)|
|27|1{0}8|sum-of-cubes factorization<br>27<sup>*n*</sup>+8 = (3<sup>*n*</sup>+2) × (9<sup>*n*</sup>−2×3<sup>*n*</sup>+4)|
|27|{D}E|sum-of-cubes factorization<br>(27<sup>*n*</sup>+1)/2 = (3<sup>*n*</sup>+1) × (9<sup>*n*</sup>−3<sup>*n*</sup>+1) / 2|
|27|7{Q}|difference-of-cubes factorization<br>8×27<sup>*n*</sup>−1 = (2×3<sup>*n*</sup>−1) × (4×9<sup>*n*</sup>+2×3<sup>*n*</sup>+1)|
|27|{Q}J|difference-of-cubes factorization<br>27<sup>*n*</sup>−8 = (3<sup>*n*</sup>−2) × (9<sup>*n*</sup>+2×3<sup>*n*</sup>+4)|
|27|9{G}|difference-of-cubes factorization<br>(125×27<sup>*n*</sup>−8)/13 = (5×3<sup>*n*</sup>−2) × (25×9<sup>*n*</sup>+10×3<sup>*n*</sup>+4) / 13|
|32|1{0}1|sum-of-5th-powers factorization<br>32<sup>*n*</sup>+1 = (2<sup>*n*</sup>+1) × (16<sup>*n*</sup>−8<sup>*n*</sup>+4<sup>*n*</sup>−2<sup>*n*</sup>+1)|
|32|{1}|difference-of-5th-powers factorization<br>(32<sup>*n*</sup>−1)/31 = (2<sup>*n*</sup>−1) × (16<sup>*n*</sup>+8<sup>*n*</sup>+4<sup>*n*</sup>+2<sup>*n*</sup>+1) / 31|
|36|3{7}|difference-of-squares factorization<br>(16×36<sup>*n*</sup>−1)/5 = (4×6<sup>*n*</sup>−1) × (4×6<sup>*n*</sup>+1) / 5|
|36|3{Z}|difference-of-squares factorization<br>4×36<sup>*n*</sup>−1 = (2×6<sup>*n*</sup>−1) × (2×6<sup>*n*</sup>+1)|
|36|8{Z}|difference-of-squares factorization<br>9×36<sup>*n*</sup>−1 = (3×6<sup>*n*</sup>−1) × (3×6<sup>*n*</sup>+1)|
|36|O{Z}|difference-of-squares factorization<br>25×36<sup>*n*</sup>−1 = (5×6<sup>*n*</sup>−1) × (5×6<sup>*n*</sup>+1)|
|36|{Z}B|difference-of-squares factorization<br>36<sup>*n*</sup>−25 = (6<sup>*n*</sup>−5) × (6<sup>*n*</sup>+5)|
|36|8{Z}B|difference-of-squares factorization<br>9×36<sup>*n*</sup>−25 = (3×6<sup>*n*</sup>−5) × (3×6<sup>*n*</sup>+5)|
|36|F{Z}B|difference-of-squares factorization<br>16×36<sup>*n*</sup>−25 = (4×6<sup>*n*</sup>−5) × (4×6<sup>*n*</sup>+5)|
|36|{Z}RZ|difference-of-squares factorization<br>36<sup>*n*</sup>−289 = (6<sup>*n*</sup>−17) × (6<sup>*n*</sup>+17)|
|36|F{Z}RZ|difference-of-squares factorization<br>16×36<sup>*n*</sup>−289 = (4×6<sup>*n*</sup>−17) × (4×6<sup>*n*</sup>+17)|
|36|O{Z}RZ|difference-of-squares factorization<br>25×36<sup>*n*</sup>−289 = (5×6<sup>*n*</sup>−17) × (5×6<sup>*n*</sup>+17)|
|36|O{5}|difference-of-squares factorization<br>(169×36<sup>*n*</sup>−1)/7 = (13×6<sup>*n*</sup>−1) × (13×6<sup>*n*</sup>+1) / 7|
|36|O{7}|difference-of-squares factorization<br>(121×36<sup>*n*</sup>−1)/5 = (11×6<sup>*n*</sup>−1) × (11×6<sup>*n*</sup>+1) / 5|
|36|{9}1|difference-of-squares factorization<br>(9×36<sup>*n*</sup>−289)/35 = (3×6<sup>*n*</sup>−17) × (3×6<sup>*n*</sup>+17) / 35|
|36|T{9}1|difference-of-squares factorization<br>(1024×36<sup>*n*</sup>−289)/35 = (32×6<sup>*n*</sup>−17) × (32×6<sup>*n*</sup>+17) / 35|
|36|{G}D|difference-of-squares factorization<br>(16×36<sup>*n*</sup>−121)/35 = (4×6<sup>*n*</sup>−11) × (4×6<sup>*n*</sup>+11) / 35|
|36|{G}8D|difference-of-squares factorization<br>(16×36<sup>*n*</sup>−10201)/35 = (4×6<sup>*n*</sup>−101) × (4×6<sup>*n*</sup>+101) / 35|
|36|R{G}D|difference-of-squares factorization<br>(961×36<sup>*n*</sup>−121)/35 = (31×6<sup>*n*</sup>−11) × (31×6<sup>*n*</sup>+11) / 35|
|36|3{G}8D|difference-of-squares factorization<br>(121×36<sup>*n*</sup>−10201)/35 = (11×6<sup>*n*</sup>−101) × (11×6<sup>*n*</sup>+101) / 35|
|36|R{G}8D|difference-of-squares factorization<br>(961×36<sup>*n*</sup>−10201)/35 = (31×6<sup>*n*</sup>−101) × (31×6<sup>*n*</sup>+101) / 35|
|36|{K}H|difference-of-squares factorization<br>(4×36<sup>*n*</sup>−25)/7 = (2×6<sup>*n*</sup>−5) × (2×6<sup>*n*</sup>+5) / 7|
|36|{K}IH|difference-of-squares factorization<br>(4×36<sup>*n*</sup>−529)/7 = (2×6<sup>*n*</sup>−23) × (2×6<sup>*n*</sup>+23) / 7|
|36|B{K}H|difference-of-squares factorization<br>(81×36<sup>*n*</sup>−25)/7 = (9×6<sup>*n*</sup>−5) × (9×6<sup>*n*</sup>+5) / 7|
|36|3{K}IH|difference-of-squares factorization<br>(25×36<sup>*n*</sup>−529)/7 = (5×6<sup>*n*</sup>−23) × (5×6<sup>*n*</sup>+23) / 7|
|36|B{K}IH|difference-of-squares factorization<br>(81×36<sup>*n*</sup>−529)/7 = (9×6<sup>*n*</sup>−23) × (9×6<sup>*n*</sup>+23) / 7|
|36|{S}J|difference-of-squares factorization<br>(4×36<sup>*n*</sup>−49)/5 = (2×6<sup>*n*</sup>−7) × (2×6<sup>*n*</sup>+7) / 5|
|36|{S}IJ|difference-of-squares factorization<br>(4×36<sup>*n*</sup>−1849)/5 = (2×6<sup>*n*</sup>−43) × (2×6<sup>*n*</sup>+43) / 5|
|36|1{S}J|difference-of-squares factorization<br>(9×36<sup>*n*</sup>−49)/5 = (3×6<sup>*n*</sup>−7) × (3×6<sup>*n*</sup>+7) / 5|
|36|C{S}J|difference-of-squares factorization<br>(64×36<sup>*n*</sup>−49)/5 = (8×6<sup>*n*</sup>−7) × (8×6<sup>*n*</sup>+7) / 5|
|36|X{S}J|difference-of-squares factorization<br>(169×36<sup>*n*</sup>−49)/5 = (13×6<sup>*n*</sup>−7) × (13×6<sup>*n*</sup>+7) / 5|
|36|1{S}GJ|difference-of-squares factorization<br>(9×36<sup>*n*</sup>−2209)/5 = (3×6<sup>*n*</sup>−47) × (3×6<sup>*n*</sup>+47) / 5|
|36|9{S}GJ|difference-of-squares factorization<br>(49×36<sup>*n*</sup>−2209)/5 = (7×6<sup>*n*</sup>−47) × (7×6<sup>*n*</sup>+47) / 5|
|36|C{S}GJ|difference-of-squares factorization<br>(64×36<sup>*n*</sup>−2209)/5 = (8×6<sup>*n*</sup>−47) × (8×6<sup>*n*</sup>+47) / 5|
|36|X{S}GJ|difference-of-squares factorization<br>(169×36<sup>*n*</sup>−2209)/5 = (13×6<sup>*n*</sup>−47) × (13×6<sup>*n*</sup>+47) / 5|
|36|1{S}IJ|difference-of-squares factorization<br>(9×36<sup>*n*</sup>−1849)/5 = (3×6<sup>*n*</sup>−43) × (3×6<sup>*n*</sup>+43) / 5|
|36|9{S}IJ|difference-of-squares factorization<br>(49×36<sup>*n*</sup>−1849)/5 = (7×6<sup>*n*</sup>−43) × (7×6<sup>*n*</sup>+43) / 5|
|14|8{D}|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization 9×14<sup>2×*n*</sup>−1 = (3×14<sup>*n*</sup>−1) × (3×14<sup>*n*</sup>+1)|
|12|{B}9B|combine of factor 13 and difference-of-squares factorization<br>odd length is divisible by 13, even length has factorization 12<sup>2×*n*</sup>−25 = (12<sup>*n*</sup>−5) × (12<sup>*n*</sup>+5)|
|14|{D}5|combine of factor 5 and difference-of-squares factorization<br>odd length is divisible by 5, even length has factorization 14<sup>2×*n*</sup>−9 = (14<sup>*n*</sup>−3) × (14<sup>*n*</sup>+3)|
|17|1{9}|combine of factor 2 and difference-of-squares factorization<br>even length is divisible by 2, odd length has factorization (25×17<sup>2×*n*</sup>−9)/16 = (5×17<sup>*n*</sup>−3) × (5×17<sup>*n*</sup>+3) / 16|
|17|7{9}|combine of factor 2 and difference-of-squares factorization<br>even length is divisible by 2, odd length has factorization (121×17<sup>2×*n*</sup>−9)/16 = (11×17<sup>*n*</sup>−3) × (11×17<sup>*n*</sup>+3) / 16|
|17|{9}2|combine of factor 2 and difference-of-squares factorization<br>odd length is divisible by 2, even length has factorization (9×17<sup>2×*n*</sup>−121)/16 = (3×17<sup>*n*</sup>−11) × (3×17<sup>*n*</sup>+11) / 16|
|17|{9}8|combine of factor 2 and difference-of-squares factorization<br>odd length is divisible by 2, even length has factorization (9×17<sup>2×*n*</sup>−25)/16 = (3×17<sup>*n*</sup>−5) × (3×17<sup>*n*</sup>+5) / 16|
|19|1{6}|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization (4×19<sup>2×*n*</sup>−1)/3 = (2×19<sup>*n*</sup>−1) × (2×19<sup>*n*</sup>+1) / 3|
|19|{6}5|combine of factor 5 and difference-of-squares factorization<br>odd length is divisible by 5, even length has factorization (19<sup>2×*n*</sup>−4)/3 = (19<sup>*n*</sup>−2) × (19<sup>*n*</sup>+2) / 3|
|19|7{2}|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization (64×19<sup>2×*n*</sup>−1)/9 = (8×19<sup>*n*</sup>−1) × (8×19<sup>*n*</sup>+1) / 9|
|19|89{6}|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization (484×19<sup>2×*n*</sup>−1)/3 = (22×19<sup>*n*</sup>−1) × (22×19<sup>*n*</sup>+1) / 3|
|24|3{N}|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization 4×24<sup>2×*n*</sup>−1 = (2×24<sup>*n*</sup>−1) × (2×24<sup>*n*</sup>+1)|
|24|5{N}|combine of factor 5 and difference-of-squares factorization<br>odd length is divisible by 5, even length has factorization 6×24<sup>2×*n*+1</sup>−1 = (12×24<sup>*n*</sup>−1) × (12×24<sup>*n*</sup>+1)|
|24|8{N}|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization 9×24<sup>2×*n*</sup>−1 = (3×24<sup>*n*</sup>−1) × (3×24<sup>*n*</sup>+1)|
|24|{6}1|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization (6×24<sup>2×*n*+1</sup>−121)/23 = (12×24<sup>*n*</sup>−11) × (12×24<sup>*n*</sup>+11) / 23|
|24|{N}LN|combine of factor 5 and difference-of-squares factorization<br>odd length is divisible by 5, even length has factorization 24<sup>2×*n*</sup>−49 = (24<sup>*n*</sup>−7) × (24<sup>*n*</sup>+7)|
|33|F{W}|combine of factor 17 and difference-of-squares factorization<br>even length is divisible by 17, odd length has factorization 16×33<sup>2×*n*</sup>−1 = (4×33<sup>*n*</sup>−1) × (4×33<sup>*n*</sup>+1)|
|33|{W}H|combine of factor 17 and difference-of-squares factorization<br>odd length is divisible by 17, even length has factorization 33<sup>2×*n*</sup>−16 = (33<sup>*n*</sup>−4) × (33<sup>*n*</sup>+4)|
|33|3{P}|combine of factor 2 and difference-of-squares factorization<br>even length is divisible by 2, odd length has factorization (121×33<sup>2×*n*</sup>−25)/32 = (11×33<sup>*n*</sup>−5) × (11×33<sup>*n*</sup>+5) / 32|
|33|D{P}|combine of factor 2 and difference-of-squares factorization<br>even length is divisible by 2, odd length has factorization (441×33<sup>2×*n*</sup>−25)/32 = (21×33<sup>*n*</sup>−5) × (21×33<sup>*n*</sup>+5) / 32|
|34|1{B}|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization (4×34<sup>2×*n*</sup>−1)/3 = (2×34<sup>*n*</sup>−1) × (2×34<sup>*n*</sup>+1) / 3|
|34|8{X}|combine of factor 5 and difference-of-squares factorization<br>even length is divisible by 5, odd length has factorization 9×34<sup>2×*n*</sup>−1 = (3×34<sup>*n*</sup>−1) × (3×34<sup>*n*</sup>+1)|
|34|{X}P|combine of factor 5 and difference-of-squares factorization<br>odd length is divisible by 5, even length has factorization 34<sup>2×*n*</sup>−9 = (34<sup>*n*</sup>−3) × (34<sup>*n*</sup>+3)|

Also families which contain only one very small prime > *b*:

|*b*|family|why this family contains only one prime > *b*|
|---|---|---|
|27|2{0}J|always divisible by some element of {5,7,73}<br>but 2J is prime, and 2J is the only prime > *b* in this family<br>divisible by 7 if the length is odd, divisible by 5 if the length is == 0 mod 4, divisible by 73 if the length is == 2 mod 4|
|4|{1}|difference-of-squares factorization<br>but 11 is prime, and 11 is the only prime > *b* in this family<br>(4<sup>*n*</sup>−1)/3 = (2<sup>*n*</sup>−1) × (2<sup>*n*</sup>+1) / 3|
|8|{1}|difference-of-cubes factorization<br>but 111 is prime, and 111 is the only prime > *b* in this family<br>(8<sup>*n*</sup>−1)/7 = (2<sup>*n*</sup>−1) × (4<sup>*n*</sup>+2<sup>*n*</sup>+1) / 7|
|16|{1}|difference-of-squares factorization<br>but 11 is prime, and 11 is the only prime > *b* in this family<br>(16<sup>*n*</sup>−1)/15 = (4<sup>*n*</sup>−1) × (4<sup>*n*</sup>+1) / 15|
|27|{1}|difference-of-cubes factorization<br>but 111 is prime, and 111 is the only prime > *b* in this family<br>(27<sup>*n*</sup>−1)/26 = (3<sup>*n*</sup>−1) × (9<sup>*n*</sup>+3<sup>*n*</sup>+1) / 26|
|27|{G}7|difference-of-cubes factorization<br>but G7 is prime, and G7 is the only prime > *b* in this family<br>(8×27<sup>*n*</sup>−125)/13 = (2×3<sup>*n*</sup>−5) × (4×9<sup>*n*</sup>+10×3<sup>*n*</sup>+25) / 13|
|36|{1}|difference-of-squares factorization<br>but 11 is prime, and 11 is the only prime > *b* in this family<br>(36<sup>*n*</sup>−1)/35 = (6<sup>*n*</sup>−1) × (6<sup>*n*</sup>+1) / 35|

Some *x*{*y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *y* is a digit in base *b*) families could not be proven to contain no primes > *b* (by covering congruence, algebraic factorization, or combine of them) but no primes > *b* could be found in the family, even after searching through numbers with over 100000 digits. In such a case, the only way to proceed is to test the primality of larger and larger numbers of such form and hope a prime is eventually discovered.

Many *x*{*y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *y* is a digit in base *b*) families contain no small primes > *b* even though they do contain very large primes. e.g. the smallest prime in base 13 family 9{5} is 95<sub>197420</sub> which when written in decimal contains 219916 digits (http://www.primenumbers.net/prptop/searchform.php?form=%28113*13%5E197420-5%29%2F12&action=Search), and the smallest prime in base 16 family {3}AF is 3<sub>116137</sub>AF which when written in decimal contains 139845 digits (http://www.primenumbers.net/prptop/searchform.php?form=%2816%5E116139%2B619%29%2F5&action=Search), and the smallest prime in base 23 family 9{E} is 9E<sub>800873</sub> which when written in decimal contains 1090573 digits (http://www.primenumbers.net/prptop/searchform.php?form=%28106*23%5E800873-7%29%2F11&action=Search), and the smallest prime in base 25 family 71JD{0}1 is 71JD0<sub>458549</sub>1 which when written in decimal contains 641031 digits (http://primes.utm.edu/primes/page.php?id=111834) (this number can be proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is trivially fully factored), and the smallest prime in base 32 family NU{0}1 is NU0<sub>661863</sub>1 which when written in decimal contains 996208 digits (https://primes.utm.edu/primes/page.php?id=134216) (this number can be proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is trivially fully factored), and the smallest prime in base 36 family {P}SZ is P<sub>81993</sub>SZ which when written in decimal contains 127609 digits (http://www.primenumbers.net/prptop/searchform.php?form=%285*36%5E81995%2B821%29%2F7&action=Search) (technically, probable primality tests were used to show this (which have a very small chance of making an error (https://primes.utm.edu/notes/prp_prob.html, https://www.ams.org/journals/mcom/1989-53-188/S0025-5718-1989-0982368-4/S0025-5718-1989-0982368-4.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_22.pdf))) because all known primality tests (https://en.wikipedia.org/wiki/Primality_test, https://www.rieselprime.de/ziki/Primality_test, https://mathworld.wolfram.com/PrimalityTest.html) run far too slowly to run on a number of this size unless either *N*−1 (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1) or *N*+1 (https://primes.utm.edu/prove/prove3_2.html, http://factordb.com/nmoverview.php?method=2) (or both) (unfortunely, none of Wikipedia, Prime Wiki, Mathworld has article for *N*−1 primality test or *N*+1 primality test, but a similar article for Pocklington primality test: https://en.wikipedia.org/wiki/Pocklington_primality_test, https://www.rieselprime.de/ziki/Pocklington%27s_theorem, https://mathworld.wolfram.com/PocklingtonsTheorem.html, also see the article for the cyclotomy primality test: https://primes.utm.edu/glossary/xpage/Cyclotomy.html) can be ≥ 1/3 factored (https://en.wikipedia.org/wiki/Integer_factorization, https://www.rieselprime.de/ziki/Factorization, https://mathworld.wolfram.com/PrimeFactorization.html) or can be ≥ 1/4 factored and the number is not very large (say not > 10<sup>100000</sup>), if either *N*−1 or *N*+1 (or both) can be ≥ 1/2 factored, then we can use the Pocklington *N*−1 primality test (https://primes.utm.edu/prove/prove3_1.html, https://en.wikipedia.org/wiki/Pocklington_primality_test, https://www.rieselprime.de/ziki/Pocklington%27s_theorem, https://mathworld.wolfram.com/PocklingtonsTheorem.html, https://stdkmd.net/nrr/pock/, http://factordb.com/nmoverview.php?method=1) (the *N*−1 case) or the Morrison *N*+1 primality test (https://primes.utm.edu/prove/prove3_2.html, http://factordb.com/nmoverview.php?method=2) (the *N*+1 case), if either *N*−1 or *N*+1 (or both) can be ≥ 1/3 factored, then we can use the Brillhart-Lehmer-Selfridge primality test (https://www.ams.org/journals/mcom/1975-29-130/S0025-5718-1975-0384673-1/S0025-5718-1975-0384673-1.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_23.pdf), https://en.wikipedia.org/wiki/Pocklington_primality_test#Extensions_and_variants, http://factordb.com/nmoverview.php?method=3), if either *N*−1 or *N*+1 (or both) can be ≥ 1/4 factored but neither can be ≥ 1/3 factored, then we need to use *CHG* (https://mersenneforum.org/attachment.php?attachmentid=21133&d=1571237465, https://primes.utm.edu/bios/page.php?id=797, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/CHG) to prove its primality (see https://mersenneforum.org/showpost.php?p=528149&postcount=3 and https://mersenneforum.org/showpost.php?p=603181&postcount=438), however, unlike Brillhart-Lehmer-Selfridge primality test for the numbers *N* such that *N*−1 or *N*+1 (or both) can be ≥ 1/3 factored can run for arbitrarily large numbers *N* (thus, there are no unproven probable primes *N* such that *N*−1 or *N*+1 (or both) can be ≥ 1/3 factored), *CHG* for the numbers *N* such that either *N*−1 or *N*+1 (or both) can be ≥ 1/4 factored but neither can be ≥ 1/3 factored cannot run for very large *N* (say > 10<sup>100000</sup>), for the examples of the numbers which are proven prime by *CHG*, see https://primes.utm.edu/primes/page.php?id=126454, https://primes.utm.edu/primes/page.php?id=131964, https://primes.utm.edu/primes/page.php?id=123456, https://primes.utm.edu/primes/page.php?id=130933, https://stdkmd.net/nrr/cert/1/ (search for "CHG"), https://stdkmd.net/nrr/cert/2/ (search for "CHG"), https://stdkmd.net/nrr/cert/3/ (search for "CHG"), https://stdkmd.net/nrr/cert/4/ (search for "CHG"), https://stdkmd.net/nrr/cert/5/ (search for "CHG"), https://stdkmd.net/nrr/cert/6/ (search for "CHG"), https://stdkmd.net/nrr/cert/7/ (search for "CHG"), https://stdkmd.net/nrr/cert/8/ (search for "CHG"), https://stdkmd.net/nrr/cert/9/ (search for "CHG"), however, *factordb* (http://factordb.com/) lacks the ability to verify *CHG* proofs, see https://mersenneforum.org/showpost.php?p=608362&postcount=165)

The numbers in *x*{*y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *y* is a digit in base *b*) families are of the form (*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1) for some fixed *a*, *b*, *c* such that *a* ≥ 1, *b* ≥ 2 (*b* is the base), *c* ≠ 0, *gcd*(*a*,*c*) = 1, *gcd*(*b*,*c*) = 1. Except in the special case *c* = ±1 and *gcd*(*a*+*c*,*b*−1) = 1, when *n* is large the known primality tests for such a number are too inefficient to run. In this case one must resort to a probable primality test such as a Miller–Rabin primality test (https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test, https://primes.utm.edu/glossary/xpage/MillersTest.html, https://www.rieselprime.de/ziki/Miller-Rabin_pseudoprimality_test, https://mathworld.wolfram.com/Rabin-MillerStrongPseudoprimeTest.html) or a Baillie–PSW primality test (https://en.wikipedia.org/wiki/Baillie%E2%80%93PSW_primality_test, https://mathworld.wolfram.com/Baillie-PSWPrimalityTest.html), unless a divisor of the number can be found. Since we are testing many numbers in an exponential sequence, it is possible to use a sieving process (https://www.rieselprime.de/ziki/Sieving, https://www.rieselprime.de/ziki/Sieving_a_range_of_sequences, https://mathworld.wolfram.com/Sieve.html) to find divisors rather than using trial division (https://en.wikipedia.org/wiki/Trial_division, https://primes.utm.edu/glossary/xpage/TrialDivision.html, https://www.rieselprime.de/ziki/Trial_factoring, https://mathworld.wolfram.com/TrialDivision.html).

To do this, we made use of Geoffrey Reynolds' *SRSIEVE* software (https://www.bc-team.org/app.php/dlext/?cat=3, http://web.archive.org/web/20160922072340/https://sites.google.com/site/geoffreywalterreynolds/programs/, http://www.rieselprime.de/dl/CRUS_pack.zip, https://primes.utm.edu/bios/page.php?id=905, https://www.rieselprime.de/ziki/Srsieve, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/srsieve_1.1.4, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/sr1sieve_1.4.6, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/sr2sieve_2.0.0, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/srbsieve). This program uses the baby-step giant-step algorithm to find all primes *p* which divide *a*×*b*<sup>*n*</sup>+*c* where *p* and *n* lie in a specified range (also, this program was updated so that it also removes the *n* such that *a*×*b*<sup>*n*</sup>+*c* has algebraic factors (e.g. difference-of-two-squares factorization (https://en.wikipedia.org/wiki/Difference_of_two_squares) and sum/difference-of-two-*n*th-powers factorization with odd *n* > 1 (https://en.wikipedia.org/wiki/Binomial_number, https://mathworld.wolfram.com/BinomialNumber.html) and Aurifeuillean factorization (https://en.wikipedia.org/wiki/Aurifeuillean_factorization, https://www.rieselprime.de/ziki/Aurifeuillian_factor, https://mathworld.wolfram.com/AurifeuilleanFactorization.html) of *x*<sup>4</sup>+4*y*<sup>4</sup>), see https://mersenneforum.org/showpost.php?p=452132&postcount=66 and https://mersenneforum.org/showthread.php?t=21916 and https://github.com/xayahrainie4793/prime-programs-cached-copy/blob/main/srsieve_1.1.4/algebraic.c). Since this program cannot handle the general case (*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1) when *gcd*(*a*+*c*,*b*−1) > 1 we only used it to sieve the sequence *a*×*b*<sup>*n*</sup>+*c* for primes *p* not dividing *gcd*(*a*+*c*,*b*−1), and initialized the list of candidates to not include *n* for which there is some prime *p* dividing *gcd*(*a*+*c*,*b*−1) for which *p* dividing (*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1). The program had to be modified slightly to remove a check which would prevent it from running in the case when *a*, *b*, and *c* were all odd (since then 2 divides *a*×*b*<sup>*n*</sup>+*c*, but 2 may not divide (*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) (see https://github.com/curtisbright/mepn-data/commit/1b55b353f46c707bbe52897573914128b3303960).

Once the numbers with small divisors had been removed, it remained to test the remaining numbers using a probable primality test. For this we used the software *LLR* by Jean Penné (http://jpenne.free.fr/index2.html, https://primes.utm.edu/bios/page.php?id=431, https://www.rieselprime.de/ziki/LLR, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/llr403win64, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/llr403linux64) or *PFGW* (https://sourceforge.net/projects/openpfgw/, https://primes.utm.edu/bios/page.php?id=175, https://www.rieselprime.de/ziki/PFGW, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/pfgw_win_4.0.3). Although undocumented, it is possible to run these two programs on numbers of the form (*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1) when *gcd*(*a*+*c*,*b*−1) > 1, so this program required no modifications. A script was also written which allowed one to run srsieve while *LLR* or *PFGW* was testing the remaining candidates, so that when a divisor was found by srsieve on a number which had not yet been tested by *LLR* or *PFGW* it would be removed from the list of candidates.

For the primes < 10<sup>25000</sup> for the solved or near-solved bases (bases *b* with ≤ 10 unsolved families, i.e. bases *b* = 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 26, 28, 30, 36), we employed *PRIMO* by Marcel Martin (http://www.ellipsa.eu/public/primo/primo.html, http://www.rieselprime.de/dl/Primo309.zip, https://primes.utm.edu/bios/page.php?id=46, https://www.rieselprime.de/ziki/Primo, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/primo-433-lx64, https://github.com/xayahrainie4793/prime-programs-cached-copy/tree/main/Primo309), an elliptic curve primality proving (https://primes.utm.edu/prove/prove4_2.html, https://en.wikipedia.org/wiki/Elliptic_curve_primality, https://primes.utm.edu/glossary/xpage/ECPP.html, https://mathworld.wolfram.com/EllipticCurvePrimalityProving.html, https://primes.utm.edu/top20/page.php?id=27) implementation, to compute primality certificates (https://en.wikipedia.org/wiki/Primality_certificate, https://primes.utm.edu/glossary/xpage/Certificate.html, https://mathworld.wolfram.com/PrimalityCertificate.html, http://www.lix.polytechnique.fr/Labo/Francois.Morain/Primes/myprimes.html, https://stdkmd.net/nrr/cert/, http://factordb.com/certoverview.php) for the candidates for minimal prime base *b* which are > 10<sup>299</sup> and neither N−1 nor N+1 can be ≥ 1/4 factored.

We have completely solved this problem for bases *b* = 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 18, 20, 24 (i.e. we have found all minimal primes in these bases and proved that they are all such primes and proved that they are definitely primes (https://en.wikipedia.org/wiki/Provable_prime, http://factordb.com/listtype.php?t=4) (i.e. not merely probable primes)) (thus, currently we can complete the classification of the minimal primes in these bases, and the "minimal prime problem" for these bases are theorems (https://en.wikipedia.org/wiki/Theorem, https://mathworld.wolfram.com/Theorem.html, https://primes.utm.edu/notes/proofs/)), also we have completely solved this problem for bases *b* = 11, 16, 22, 30 if we allow probable primes (https://en.wikipedia.org/wiki/Probable_prime, https://primes.utm.edu/glossary/xpage/PRP.html, https://www.rieselprime.de/ziki/Probable_prime, https://mathworld.wolfram.com/ProbablePrime.html, http://factordb.com/listtype.php?t=1) > 10<sup>25000</sup> in place of proven primes, besides, we have completely solved this problem for bases *b* = 13, 17, 19, 21, 23, 25, 26, 27, 28, 32, 34, 36 (if we allow strong probable primes in place of proven primes) except the families *x*{*y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *y* is a digit in base *b*) listed in the "left *b*" files (see the condensed table below for the searching limit of these families) (thus, currently the "minimal prime problem" for these bases are still unsolved problems (https://en.wikipedia.org/wiki/Open_problem, https://en.wikipedia.org/wiki/List_of_unsolved_problems_in_mathematics, https://primes.utm.edu/glossary/xpage/OpenQuestion.html, https://mathworld.wolfram.com/UnsolvedProblems.html, https://primes.utm.edu/notes/conjectures/)).

We are unable to determine if the families *x*{*y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *y* is a digit in base *b*) listed in the "left *b*" files (see the condensed table below for the searching limit of these families) contain a prime (only count the numbers > *b*) or not (even if we allow strong probable primes), i.e. these families have no known prime (or strong probable prime) members > *b*, nor can they be ruled out as only containing composites (only count the numbers > *b*) (by covering congruence, algebraic factorization, or combine of them), i.e. whether these families contain a prime or a strong probable prime (only count the numbers > *b*) are open problems (https://en.wikipedia.org/wiki/Open_problem, https://en.wikipedia.org/wiki/List_of_unsolved_problems_in_mathematics, https://primes.utm.edu/glossary/xpage/OpenQuestion.html, https://mathworld.wolfram.com/UnsolvedProblems.html, https://primes.utm.edu/notes/conjectures/), and all of these families are expected to contain a prime > *b* (in fact, expected to contain infinitely many primes), since there is a heuristic argument (https://en.wikipedia.org/wiki/Heuristic_argument, https://primes.utm.edu/glossary/xpage/Heuristic.html, https://mathworld.wolfram.com/Heuristic.html) that all families which cannot be ruled out as only containing composites or only containing finitely many primes (by covering congruence, algebraic factorization, or combine of them) contain infinitely many primes (references: https://primes.utm.edu/mersenne/heuristic.html, https://primes.utm.edu/notes/faq/NextMersenne.html, https://web.archive.org/web/20100628035147/http://www.math.niu.edu/~rusin/known-math/98/exp_primes), since by the prime number theorem (https://en.wikipedia.org/wiki/Prime_number_theorem, https://primes.utm.edu/glossary/xpage/PrimeNumberThm.html, https://mathworld.wolfram.com/PrimeNumberTheorem.html, https://primes.utm.edu/howmany.html, https://oeis.org/wiki/User:Charles_R_Greathouse_IV/Tables_of_special_primes) the chance (https://en.wikipedia.org/wiki/Probability, https://mathworld.wolfram.com/Probability.html) that a random (https://en.wikipedia.org/wiki/Random_number, https://mathworld.wolfram.com/RandomNumber.html) *n*-digit base *b* number is prime is approximately (https://en.wikipedia.org/wiki/Asymptotic_analysis, https://primes.utm.edu/glossary/xpage/AsymptoticallyEqual.html, https://mathworld.wolfram.com/Asymptotic.html) 1/*n* (more accurately, the chance is approximately 1/(*n*×*ln*(*b*)), where *ln* is the natural logarithm (https://en.wikipedia.org/wiki/Natural_logarithm, https://primes.utm.edu/glossary/xpage/Log.html, https://mathworld.wolfram.com/NaturalLogarithm.html)). If one conjectures the numbers *x*{*y*}*z* behave similarly you would expect 1/1 + 1/2 + 1/3 + 1/4 + ... = ∞ (https://en.wikipedia.org/wiki/Harmonic_series_(mathematics), https://mathworld.wolfram.com/HarmonicSeries.html) primes of the form *x*{*y*}*z* (of course, this does not always happen, since some *x*{*y*}*z* families can be ruled out as only containing composites (only count the numbers > *b*) (by covering congruence, algebraic factorization, or combine of them), and every family has its own Nash weight (https://www.rieselprime.de/ziki/Nash_weight) (or difficulty (https://stdkmd.net/nrr/prime/primedifficulty.txt)), families which can be proven to only contain composites or only contain finitely many primes (by covering congruence, algebraic factorization, or combine of them) have Nash weight (or difficulty) 0, and families which cannot be proven to only contain composites or only contain finitely many primes (by covering congruence, algebraic factorization, or combine of them) have positive Nash weight (or difficulty), but it is at least a reasonable conjecture in the absence of evidence to the contrary).

There are also unproven probable primes (however, in this project our results assume that they are in fact primes, since they are > 10<sup>25000</sup> and the probability that they are in fact composite is < 10<sup>−2000</sup>, see https://primes.utm.edu/notes/prp_prob.html and https://www.ams.org/journals/mcom/1989-53-188/S0025-5718-1989-0982368-4/S0025-5718-1989-0982368-4.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_22.pdf)), the unproven probable primes for bases *b* = 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 26, 28, 30, 36 (the solved or near-solved bases, i.e. the bases *b* with ≤ 10 unsolved families) are:

|*b*|index of this minimal prime in base *b* (assuming the primality of all probable primes in base *b*)|base-*b* form of this unproven probable prime|algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form of this unproven probable prime|*factordb* entry of this unproven probable prime|*Primo* input file of this unproven probable prime|
|---|---|---|---|---|---|
|11|1068|57<sub>62668</sub>|(57×11<sup>62668</sup>−7)/10|http://factordb.com/index.php?id=1100000003573679860|http://factordb.com/cert.php?id=1100000003573679860&inputfile|
|13|3194|C5<sub>23755</sub>C|(149×13<sup>23756</sup>+79)/12|http://factordb.com/index.php?id=1100000003590647776|http://factordb.com/cert.php?id=1100000003590647776&inputfile|
|13|3195|80<sub>32017</sub>111|8×13<sup>32020</sup>+183|http://factordb.com/index.php?id=1100000000490878060|http://factordb.com/cert.php?id=1100000000490878060&inputfile|
|13|3196|95<sub>197420</sub>|(113×13<sup>197420</sup>−5)/12|http://factordb.com/index.php?id=1100000003943359311|(no *Primo* input file, since this unproven probable prime is too large (> 10<sup>149999</sup>) to be PRP-tested in *factordb*, and *factordb* does not have *Primo* input file for numbers with status (http://factordb.com/status.html) "U" (i.e. in http://factordb.com/listtype.php?t=2), factordb only has *Primo* input file for numbers with status "PRP" (i.e. in http://factordb.com/listtype.php?t=1))
|16|2345|DB<sub>32234</sub>|(206×16<sup>32234</sup>−11)/15|http://factordb.com/index.php?id=1100000002383583629|http://factordb.com/cert.php?id=1100000002383583629&inputfile|
|16|2346|4<sub>72785</sub>DD|(4×16<sup>72787</sup>+2291)/15|http://factordb.com/index.php?id=1100000003615909841|http://factordb.com/cert.php?id=1100000003615909841&inputfile|
|16|2347|3<sub>116137</sub>AF|(16<sup>116139</sup>+619)/5|http://factordb.com/index.php?id=1100000003851731988|http://factordb.com/cert.php?id=1100000003851731988&inputfile|
|22|8003|BK<sub>22001</sub>5|(251×22<sup>22002</sup>−335)/21|http://factordb.com/index.php?id=1100000003594696838|http://factordb.com/cert.php?id=1100000003594696838&inputfile|
|26|25250|5<sub>19391</sub>6F|(26<sup>19393</sup>+179)/5|http://factordb.com/index.php?id=1100000003850151202|http://factordb.com/cert.php?id=1100000003850151202&inputfile|
|26|25251|7<sub>20279</sub>OL|(7×26<sup>20281</sup>+11393)/25|http://factordb.com/index.php?id=1100000003892628605|http://factordb.com/cert.php?id=1100000003892628605&inputfile|
|26|25252|LD0<sub>20975</sub>7|559×26<sup>20976</sup>+7|http://factordb.com/index.php?id=1100000003892628658|http://factordb.com/cert.php?id=1100000003892628658&inputfile|
|26|25253|6K<sub>23300</sub>5|(34×26<sup>23301</sup>−79)/5|http://factordb.com/index.php?id=1100000003892628745|http://factordb.com/cert.php?id=1100000003892628745&inputfile|
|28|25526|N6<sub>24051</sub>LR|(209×28<sup>24053</sup>+3967)/9|http://factordb.com/index.php?id=1100000003879667576|http://factordb.com/cert.php?id=1100000003879667576&inputfile|
|28|25527|5OA<sub>31238</sub>F|(4438×28<sup>31239</sup>+125)/27|http://factordb.com/index.php?id=1100000003880455200|http://factordb.com/cert.php?id=1100000003880455200&inputfile|
|28|25528|O4O<sub>94535</sub>9|(6092×28<sup>94536</sup>−143)/9|http://factordb.com/index.php?id=1100000000808118231|http://factordb.com/cert.php?id=1100000000808118231&inputfile|
|30|2618|I0<sub>24608</sub>D|18×30<sup>24609</sup>+13|http://factordb.com/index.php?id=1100000003593967511|http://factordb.com/cert.php?id=1100000003593967511&inputfile|
|36|35284|7K<sub>26567</sub>Z|(53×36<sup>26568</sup>+101)/7|http://factordb.com/index.php?id=1100000003896952461|http://factordb.com/cert.php?id=1100000003896952461&inputfile|
|36|35285|S0<sub>75007</sub>8H|28×36<sup>75009</sup>+305|http://factordb.com/index.php?id=1100000004020085177|http://factordb.com/cert.php?id=1100000004020085177&inputfile|
|36|35286|P<sub>81993</sub>SZ|(5×36<sup>81995</sup>+821)/7|http://factordb.com/index.php?id=1100000002394962083|http://factordb.com/cert.php?id=1100000002394962083&inputfile|

All these numbers are strong probable primes (https://en.wikipedia.org/wiki/Strong_pseudoprime, https://primes.utm.edu/glossary/xpage/StrongPRP.html, https://mathworld.wolfram.com/StrongPseudoprime.html) to bases 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61 (see https://oeis.org/A014233), and strong Lucas probable primes (https://en.wikipedia.org/wiki/Lucas_pseudoprime#Strong_Lucas_pseudoprimes, https://mathworld.wolfram.com/StrongLucasPseudoprime.html) with parameters (*P*, *Q*) defined by Selfridge's Method *A* (see https://oeis.org/A217255), and trial factored to 10<sup>16</sup> (thus, all these numbers are Baillie–PSW probable primes.

Primality certificates (https://en.wikipedia.org/wiki/Primality_certificate, https://primes.utm.edu/glossary/xpage/Certificate.html, https://mathworld.wolfram.com/PrimalityCertificate.html, http://www.lix.polytechnique.fr/Labo/Francois.Morain/Primes/myprimes.html, https://stdkmd.net/nrr/cert/, http://factordb.com/certoverview.php) for large proven primes (> 10<sup>299</sup>) for bases *b* = 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 26, 28, 30, 36 (the solved or near-solved bases, i.e. the bases *b* with ≤ 10 unsolved families):

|*b*|index of this minimal prime in base *b*|base-*b* form of this minimal prime|algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form of this minimal prime|*factordb* entry of this minimal prime|primality certificate for this minimal prime|
|---|---|---|---|---|---|
|9|149|76<sub>329</sub>2|(31×9<sup>330</sup>−19)/4|http://factordb.com/index.php?id=1100000002359003642|http://factordb.com/cert.php?id=1100000002359003642|
|9|150|27<sub>686</sub>07|(23×9<sup>688</sup>−511)/8|http://factordb.com/index.php?id=1100000002495467486|http://factordb.com/cert.php?id=1100000002495467486|
|9|151|30<sub>1158</sub>11|3×9<sup>1160</sup>+10|http://factordb.com/index.php?id=1100000002376318423|http://factordb.com/cert.php?id=1100000002376318423|
|11|1065|A<sub>713</sub>58|11<sup>715</sup>−58|http://factordb.com/index.php?id=1100000003576826487|http://factordb.com/cert.php?id=1100000003576826487|
|11|1066|7<sub>759</sub>44|(7×11<sup>761</sup>−367)/10|http://factordb.com/index.php?id=1100000002505568840|http://factordb.com/cert.php?id=1100000002505568840|
|11|1067|557<sub>1011</sub>|(607×11<sup>1011</sup>−7)/10|http://factordb.com/index.php?id=1100000002361376522|http://factordb.com/cert.php?id=1100000002361376522|
|13|3165|50<sub>270</sub>44|5×13<sup>272</sup>+56|http://factordb.com/index.php?id=1100000002632397005|http://factordb.com/cert.php?id=1100000002632397005|
|13|3166|9<sub>271</sub>095|(3×13<sup>274</sup>−6103)/4|http://factordb.com/index.php?id=1100000003590431654|http://factordb.com/cert.php?id=1100000003590431654|
|13|3167|10<sub>286</sub>7771|13<sup>290</sup>+16654|http://factordb.com/index.php?id=1100000003590431633|http://factordb.com/cert.php?id=1100000003590431633|
|13|3168|9<sub>308</sub>1|(3×13<sup>309</sup>−35)/4|http://factordb.com/index.php?id=1100000000840126705|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is 39/4×(13<sup>308</sup>−1), thus factor *N*−1 is equivalent to factor 13<sup>308</sup>−1, and for the factorization of 13<sup>308</sup>−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=308&c0=-&EN=|
|13|3169|B<sub>341</sub>C4|(11×13<sup>343</sup>+61)/12|http://factordb.com/index.php?id=1100000003590431618|http://factordb.com/cert.php?id=1100000003590431618|
|13|3170|8B<sub>343</sub>|(107×13<sup>343</sup>−11)/12|http://factordb.com/index.php?id=1100000002321018736|http://factordb.com/cert.php?id=1100000002321018736|
|13|3171|710<sub>371</sub>111|92×13<sup>374</sup>+183|http://factordb.com/index.php?id=1100000003590431609|http://factordb.com/cert.php?id=1100000003590431609|
|13|3172|75<sub>375</sub>7|(89×13<sup>376</sup>+19)/12|http://factordb.com/index.php?id=1100000003590431596|http://factordb.com/cert.php?id=1100000003590431596|
|13|3173|9B0<sub>391</sub>9|128×13<sup>392</sup>+9|http://factordb.com/index.php?id=1100000002632396790|http://factordb.com/cert.php?id=1100000002632396790|
|13|3174|7B0B<sub>397</sub>|(15923×13<sup>397</sup>−11)/12|http://factordb.com/index.php?id=1100000003590431574|http://factordb.com/cert.php?id=1100000003590431574|
|13|3175|10<sub>414</sub>93|13<sup>416</sup>+120|http://factordb.com/index.php?id=1100000002523249240|http://factordb.com/cert.php?id=1100000002523249240|
|13|3176|81010<sub>415</sub>1|17746×13<sup>416</sup>+1|http://factordb.com/index.php?id=1100000003590431555|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is trivially fully factored|
|13|3177|8110<sub>435</sub>1|1366×13<sup>436</sup>+1|http://factordb.com/index.php?id=1100000002373259109|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is trivially fully factored|
|13|3178|B7<sub>486</sub>|(139×13<sup>486</sup>−7)/12|http://factordb.com/index.php?id=1100000002321015892|http://factordb.com/cert.php?id=1100000002321015892|
|13|3179|B<sub>563</sub>C|(11×13<sup>564</sup>+1)/12|http://factordb.com/index.php?id=1100000000000217927|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is 11/12×(13<sup>564</sup>−1), thus factor *N*−1 is equivalent to factor 13<sup>564</sup>−1, and for the factorization of 13<sup>564</sup>−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=564&c0=-&EN=|
|13|3180|1B<sub>576</sub>|(23×13<sup>576</sup>−11)/12|http://factordb.com/index.php?id=1100000002321021456|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is 23/12×(13<sup>576</sup>−1), thus factor *N*−1 is equivalent to factor 13<sup>576</sup>−1, and for the factorization of 13<sup>576</sup>−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=576&c0=-&EN=|
|13|3181|80<sub>693</sub>87|8×13<sup>695</sup>+111|http://factordb.com/index.php?id=1100000002615636527|http://factordb.com/cert.php?id=1100000002615636527|
|13|3182|CC5<sub>713</sub>|(2021×13<sup>713</sup>−5)/12|http://factordb.com/index.php?id=1100000002615627353|http://factordb.com/cert.php?id=1100000002615627353|
|13|3183|B<sub>834</sub>74|(11×13<sup>836</sup>−719)/12|http://factordb.com/index.php?id=1100000003590430871|http://factordb.com/cert.php?id=1100000003590430871|
|13|3184|9<sub>968</sub>B|(3×13<sup>969</sup>+5)/4|http://factordb.com/index.php?id=1100000000258566244|http://factordb.com/cert.php?id=1100000000258566244|
|13|3185|10<sub>1295</sub>181|13<sup>1298</sup>+274|http://factordb.com/index.php?id=1100000002615445013|http://factordb.com/cert.php?id=1100000002615445013|
|13|3186|9<sub>1362</sub>5|(3×13<sup>1363</sup>−19)/4|http://factordb.com/index.php?id=1100000002321017776|http://factordb.com/cert.php?id=1100000002321017776|
|13|3187|7<sub>1504</sub>1|(7×13<sup>1505</sup>−79)/12|http://factordb.com/index.php?id=1100000002320890755|http://factordb.com/cert.php?id=1100000002320890755|
|13|3188|930<sub>1551</sub>1|120×13<sup>1552</sup>+1|http://factordb.com/index.php?id=1100000000765961452|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is trivially fully factored|
|13|3189|720<sub>2297</sub>2|93×13<sup>2298</sup>+2|http://factordb.com/index.php?id=1100000002632396910|http://factordb.com/cert.php?id=1100000002632396910|
|13|3190|1770<sub>2703</sub>17|267×13<sup>2705</sup>+20|http://factordb.com/index.php?id=1100000003590430825|http://factordb.com/cert.php?id=1100000003590430825|
|13|3191|390<sub>6266</sub>1|48×13<sup>6267</sup>+1|http://factordb.com/index.php?id=1100000000765961441|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is trivially fully factored|
|13|3192|B0<sub>6540</sub>BBA|11×13<sup>6543</sup>+2012|http://factordb.com/index.php?id=1100000002616382906|http://factordb.com/cert.php?id=1100000002616382906|
|13|3193|C<sub>10631</sub>92|13<sup>10633</sup>−50|http://factordb.com/index.php?id=1100000003590493750|http://factordb.com/cert.php?id=1100000003590493750|
|14|649|34D<sub>708</sub>|47×14<sup>708</sup>−1|http://factordb.com/index.php?id=1100000001540144903|proven prime by *N*+1 test (https://primes.utm.edu/prove/prove3_2.html, http://factordb.com/nmoverview.php?method=2), since *N*+1 is trivially fully factored|
|14|650|4D<sub>19698</sub>|5×14<sup>19698</sup>−1|http://factordb.com/index.php?id=1100000000884560233|proven prime by *N*+1 test (https://primes.utm.edu/prove/prove3_2.html, http://factordb.com/nmoverview.php?method=2), since *N*+1 is trivially fully factored|
|16|2328|880<sub>246</sub>7|136×16<sup>247</sup>+7|http://factordb.com/index.php?id=1100000002468140199|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), *N*−1 is 2<sup>3</sup>×3×7×13×25703261×(289-digit prime)|
|16|2329|D4<sub>263</sub>D|(199×16<sup>264</sup>+131)/15|http://factordb.com/index.php?id=1100000002468170238|http://factordb.com/cert.php?id=1100000002468170238|
|16|2330|E0<sub>261</sub>4DD|14×16<sup>264</sup>+1245|http://factordb.com/index.php?id=1100000003588388352|http://factordb.com/cert.php?id=1100000003588388352|
|16|2331|8C0<sub>290</sub>ED|140×16<sup>292</sup>+237|http://factordb.com/index.php?id=1100000003588388307|http://factordb.com/cert.php?id=1100000003588388307|
|16|2332|DA<sub>305</sub>5|(41×16<sup>306</sup>−17)/3|http://factordb.com/index.php?id=1100000003588388284|http://factordb.com/cert.php?id=1100000003588388284|
|16|2333|CE80<sub>422</sub>D|3304×16<sup>423</sup>+13|http://factordb.com/index.php?id=1100000003588388257|http://factordb.com/cert.php?id=1100000003588388257|
|16|2334|5F<sub>544</sub>6F|6×16<sup>546</sup>−145|http://factordb.com/index.php?id=1100000002604723967|http://factordb.com/cert.php?id=1100000002604723967|
|16|2335|88F<sub>545</sub>|137×16<sup>545</sup>−1|http://factordb.com/index.php?id=1100000000413679658|proven prime by *N*+1 test (https://primes.utm.edu/prove/prove3_2.html, http://factordb.com/nmoverview.php?method=2), since *N*+1 is trivially fully factored|
|16|2336|BE0<sub>792</sub>BB|190×16<sup>794</sup>+187|http://factordb.com/index.php?id=1100000003588387938|http://factordb.com/cert.php?id=1100000003588387938|
|16|2337|D9<sub>1052</sub>|(68×16<sup>1052</sup>−3)/5|http://factordb.com/index.php?id=1100000002321036020|http://factordb.com/cert.php?id=1100000002321036020|
|16|2338|FAF<sub>1062</sub>45|251×16<sup>1064</sup>−187|http://factordb.com/index.php?id=1100000003588387610|http://factordb.com/cert.php?id=1100000003588387610|
|16|2339|F8<sub>1517</sub>F|(233×16<sup>1518</sup>+97)/15|http://factordb.com/index.php?id=1100000000633744824|http://factordb.com/cert.php?id=1100000000633744824|
|16|2340|20<sub>1713</sub>321|2×16<sup>1716</sup>+801|http://factordb.com/index.php?id=1100000003588386735|http://factordb.com/cert.php?id=1100000003588386735|
|16|2341|300F<sub>1960</sub>AF|769×16<sup>1962</sup>−81|http://factordb.com/index.php?id=1100000003588368750|http://factordb.com/cert.php?id=1100000003588368750|
|16|2342|90<sub>3542</sub>91|9×16<sup>3544</sup>+145|http://factordb.com/index.php?id=1100000000633424191|http://factordb.com/cert.php?id=1100000000633424191|
|16|2343|5BC<sub>3700</sub>D|(459×16<sup>3701</sup>+1)/5|http://factordb.com/index.php?id=1100000000993764322|http://factordb.com/cert.php?id=1100000000993764322|
|16|2344|D0B<sub>17804</sub>|(3131×16<sup>17804</sup>−11)/15|http://factordb.com/index.php?id=1100000003589278511|http://factordb.com/cert.php?id=1100000003589278511|
|18|547|80<sub>298</sub>B|8×18<sup>299</sup>+11|http://factordb.com/index.php?id=1100000002355574745|http://factordb.com/cert.php?id=1100000002355574745|
|18|548|H<sub>766</sub>FH|18<sup>768</sup>−37|http://factordb.com/index.php?id=1100000003590430490|http://factordb.com/cert.php?id=1100000003590430490|
|18|549|C0<sub>6268</sub>C5|12×18<sup>6270</sup>+221|http://factordb.com/index.php?id=1100000003590442437|http://factordb.com/cert.php?id=1100000003590442437|
|20|3301|H<sub>247</sub>A0H|(17×20<sup>250</sup>−59677)/19|http://factordb.com/index.php?id=1100000003590502619|http://factordb.com/cert.php?id=1100000003590502619|
|20|3302|7<sub>249</sub>A7|(7×20<sup>251</sup>+1133)/19|http://factordb.com/index.php?id=1100000003590502602|http://factordb.com/cert.php?id=1100000003590502602|
|20|3303|J7<sub>270</sub>|(368×20<sup>270</sup>−7)/19|http://factordb.com/index.php?id=1100000002325395462|http://factordb.com/cert.php?id=1100000002325395462|
|20|3304|J<sub>330</sub>CCC7|20<sup>334</sup>−58953|http://factordb.com/index.php?id=1100000003590502572|http://factordb.com/cert.php?id=1100000003590502572|
|20|3305|40<sub>387</sub>404B|4×20<sup>391</sup>+32091|http://factordb.com/index.php?id=1100000003590502563|http://factordb.com/cert.php?id=1100000003590502563|
|20|3306|EC0<sub>429</sub>7|292×20<sup>430</sup>+7|http://factordb.com/index.php?id=1100000002633348702|http://factordb.com/cert.php?id=1100000002633348702|
|20|3307|G<sub>447</sub>99|(16×20<sup>449</sup>−2809)/19|http://factordb.com/index.php?id=1100000000840126753|http://factordb.com/cert.php?id=1100000000840126753|
|20|3308|3A<sub>527</sub>3|(67×20<sup>528</sup>−143)/19|http://factordb.com/index.php?id=1100000003590502531|http://factordb.com/cert.php?id=1100000003590502531|
|20|3309|E<sub>566</sub>C7|(14×20<sup>568</sup>−907)/19|http://factordb.com/index.php?id=1100000003590502516|http://factordb.com/cert.php?id=1100000003590502516|
|20|3310|JCJ<sub>629</sub>|393×20<sup>629</sup>−1|http://factordb.com/index.php?id=1100000001559454258|proven prime by *N*+1 test (https://primes.utm.edu/prove/prove3_2.html, http://factordb.com/nmoverview.php?method=2), since *N*+1 is trivially fully factored|
|20|3311|J<sub>655</sub>05J|20<sup>658</sup>−7881|http://factordb.com/index.php?id=1100000003590502490|http://factordb.com/cert.php?id=1100000003590502490|
|20|3312|50<sub>1163</sub>AJ|5×20<sup>1165</sup>+219|http://factordb.com/index.php?id=1100000003590502412|http://factordb.com/cert.php?id=1100000003590502412|
|20|3313|CD<sub>2449</sub>|(241×20<sup>2449</sup>−13)/19|http://factordb.com/index.php?id=1100000002325393915|http://factordb.com/cert.php?id=1100000002325393915|
|20|3314|G0<sub>6269</sub>D|16×20<sup>6270</sup>+13|http://factordb.com/index.php?id=1100000003590539457|http://factordb.com/cert.php?id=1100000003590539457|
|22|7984|I7G0<sub>254</sub>H|8882×22<sup>255</sup>+17|http://factordb.com/index.php?id=1100000003591372788|http://factordb.com/cert.php?id=1100000003591372788|
|22|7985|D0<sub>255</sub>5EEF|13×22<sup>259</sup>+60339|http://factordb.com/index.php?id=1100000003591371932|http://factordb.com/cert.php?id=1100000003591371932|
|22|7986|IK<sub>322</sub>F|(398×22<sup>323</sup>−125)/21|http://factordb.com/index.php?id=1100000000840384145|http://factordb.com/cert.php?id=1100000000840384145|
|22|7987|C0<sub>340</sub>G9|12×22<sup>342</sup>+361|http://factordb.com/index.php?id=1100000000840384159|http://factordb.com/cert.php?id=1100000000840384159|
|22|7988|77E<sub>348</sub>K7|(485×22<sup>350</sup>+373)/3|http://factordb.com/index.php?id=1100000003591369779|http://factordb.com/cert.php?id=1100000003591369779|
|22|7989|J<sub>379</sub>KJ|(19×22<sup>381</sup>+443)/21|http://factordb.com/index.php?id=1100000003591369027|http://factordb.com/cert.php?id=1100000003591369027|
|22|7990|J<sub>388</sub>EJ|(19×22<sup>390</sup>−2329)/21|http://factordb.com/index.php?id=1100000003591367729|http://factordb.com/cert.php?id=1100000003591367729|
|22|7991|DJ<sub>400</sub>|(292×22<sup>400</sup>−19)/21|http://factordb.com/index.php?id=1100000002325880110|http://factordb.com/cert.php?id=1100000002325880110|
|22|7992|E<sub>404</sub>K7|(2×22<sup>406</sup>+373)/3|http://factordb.com/index.php?id=1100000003591366298|http://factordb.com/cert.php?id=1100000003591366298|
|22|7993|66F<sub>453</sub>B3|(971×22<sup>455</sup>−705)/7|http://factordb.com/index.php?id=1100000003591365809|http://factordb.com/cert.php?id=1100000003591365809|
|22|7994|L0<sub>454</sub>B63|21×22<sup>457</sup>+5459|http://factordb.com/index.php?id=1100000003591365331|http://factordb.com/cert.php?id=1100000003591365331|
|22|7995|L<sub>483</sub>G3|22<sup>485</sup>−129|http://factordb.com/index.php?id=1100000003591364730|http://factordb.com/cert.php?id=1100000003591364730|
|22|7996|E60<sub>496</sub>L|314×22<sup>497</sup>+21|http://factordb.com/index.php?id=1100000000632703239|http://factordb.com/cert.php?id=1100000000632703239|
|22|7997|I<sub>626</sub>AF|(6×22<sup>628</sup>−1259)/7|http://factordb.com/index.php?id=1100000000632724334|http://factordb.com/cert.php?id=1100000000632724334|
|22|7998|K0<sub>760</sub>EC1|20×22<sup>763</sup>+7041|http://factordb.com/index.php?id=1100000000632724415|http://factordb.com/cert.php?id=1100000000632724415|
|22|7999|J0<sub>767</sub>IGGJ|19×22<sup>771</sup>+199779|http://factordb.com/index.php?id=1100000003591362567|http://factordb.com/cert.php?id=1100000003591362567|
|22|8000|7<sub>959</sub>K7|(22<sup>961</sup>+857)/3|http://factordb.com/index.php?id=1100000003591361817|http://factordb.com/cert.php?id=1100000003591361817|
|22|8001|L<sub>2385</sub>KE7|22<sup>2388</sup>−653|http://factordb.com/index.php?id=1100000003591360774|http://factordb.com/cert.php?id=1100000003591360774|
|22|8002|7<sub>3815</sub>2L|(22<sup>3817</sup>−289)/3|http://factordb.com/index.php?id=1100000003591359839|http://factordb.com/cert.php?id=1100000003591359839|
|24|3400|I0<sub>241</sub>I5|18×24<sup>243</sup>+437|http://factordb.com/index.php?id=1100000002633360037|http://factordb.com/cert.php?id=1100000002633360037|
|24|3401|D0<sub>259</sub>KKD|13×24<sup>262</sup>+12013|http://factordb.com/index.php?id=1100000003593270725|http://factordb.com/cert.php?id=1100000003593270725|
|24|3402|C7<sub>298</sub>|(283×24<sup>298</sup>−7)/23|http://factordb.com/index.php?id=1100000002326181235|http://factordb.com/cert.php?id=1100000002326181235|
|24|3403|20<sub>313</sub>7|2×24<sup>314</sup>+7|http://factordb.com/index.php?id=1100000002355610241|http://factordb.com/cert.php?id=1100000002355610241|
|24|3404|BC0<sub>331</sub>B|276×24<sup>332</sup>+11|http://factordb.com/index.php?id=1100000002633359842|http://factordb.com/cert.php?id=1100000002633359842|
|24|3405|N<sub>2644</sub>LLN|24<sup>2647</sup>−1201|http://factordb.com/index.php?id=1100000003593270089|http://factordb.com/cert.php?id=1100000003593270089|
|24|3406|D<sub>2698</sub>LD|(13×24<sup>2700</sup>+4403)/23|http://factordb.com/index.php?id=1100000003593269876|http://factordb.com/cert.php?id=1100000003593269876|
|24|3407|A0<sub>2951</sub>8ID|10×24<sup>2954</sup>+5053|http://factordb.com/index.php?id=1100000003593269654|http://factordb.com/cert.php?id=1100000003593269654|
|24|3408|88N<sub>5951</sub>|201×24<sup>5951</sup>−1|http://factordb.com/index.php?id=1100000003593275880|proven prime by *N*+1 test (https://primes.utm.edu/prove/prove3_2.html, http://factordb.com/nmoverview.php?method=2), since *N*+1 is trivially fully factored|
|24|3409|N00N<sub>8129</sub>LN|13249×24<sup>8131</sup>−49|http://factordb.com/index.php?id=1100000003593391606|http://factordb.com/cert.php?id=1100000003593391606|
|26|25174|OL0<sub>214</sub>M9|645×26<sup>216</sup>+581|http://factordb.com/index.php?id=1100000000840631576|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), *N*−1 is 2<sup>2</sup>×5<sup>2</sup>×7×223×42849349×(296-digit prime)
|26|25175|1A<sub>219</sub>P|(7×26<sup>220</sup>+73)/5|http://factordb.com/index.php?id=1100000000840631595|http://factordb.com/cert.php?id=1100000000840631595|
|26|25176|A<sub>223</sub>DP|(2×26<sup>225</sup>+463)/5|http://factordb.com/index.php?id=1100000003850155262|http://factordb.com/cert.php?id=1100000003850155262|
|26|25177|6J<sub>225</sub>|(169×26<sup>225</sup>−19)/25|http://factordb.com/index.php?id=1100000002328050895|http://factordb.com/cert.php?id=1100000002328050895|
|26|25178|O<sub>228</sub>5|(24×26<sup>229</sup>−499)/5|http://factordb.com/index.php?id=1100000002328059255|http://factordb.com/cert.php?id=1100000002328059255|
|26|25179|K0<sub>230</sub>K0IP|20×26<sup>234</sup>+352013|http://factordb.com/index.php?id=1100000000840631669|http://factordb.com/cert.php?id=1100000000840631669|
|26|25180|B0<sub>236</sub>OB|11×26<sup>238</sup>+635|http://factordb.com/index.php?id=1100000002634136234|http://factordb.com/cert.php?id=1100000002634136234|
|28|25485|JN<sub>206</sub>|(536×28<sup>206</sup>−23)/27|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), *N*−1 is 2×1061×1171×74311×(289-digit prime)|
|28|25486|3<sub>211</sub>M9|(28<sup>213</sup>+4841)/9|http://factordb.com/cert.php?id=1100000003850161936|
|28|25487|HD0<sub>213</sub>D|489×28<sup>214</sup>+13|http://factordb.com/cert.php?id=1100000003850161937|
|28|25488|64O<sub>217</sub>9|(1556×28<sup>218</sup>−143)/9|http://factordb.com/cert.php?id=1100000000840840215|
|28|25489|G0<sub>217</sub>A0N|16×28<sup>220</sup>+7863|http://factordb.com/cert.php?id=1100000003850161938|
|28|25490|55OA<sub>226</sub>F|(110278×28<sup>227</sup>+125)/27|http://factordb.com/cert.php?id=1100000003850161939|
|28|25491|L0<sub>229</sub>Q3|21×28<sup>231</sup>+731|http://factordb.com/cert.php?id=1100000003850161940|
|28|25492|B0<sub>231</sub>7ID|11×28<sup>234</sup>+6005|http://factordb.com/cert.php?id=1100000003850161941|
|28|25493|PM<sub>233</sub>B|(697×28<sup>234</sup>−319)/27|http://factordb.com/cert.php?id=1100000003850161942|
|28|25494|K0<sub>238</sub>OF|20×28<sup>240</sup>+687|http://factordb.com/cert.php?id=1100000000840840142|
|28|25495|I<sub>262</sub>E3|(2×28<sup>264</sup>−383)/3|http://factordb.com/cert.php?id=1100000003850161943|
|28|25496|C5A<sub>273</sub>F|(9217×28<sup>274</sup>+125)/27|http://factordb.com/cert.php?id=1100000003850161944|
|28|25497|J0<sub>276</sub>IMB|19×28<sup>279</sup>+14739|http://factordb.com/cert.php?id=1100000003850161945|
|28|25498|F0<sub>282</sub>QAP|15×28<sup>285</sup>+20689|http://factordb.com/cert.php?id=1100000000840840006|
|28|25499|M0<sub>296</sub>KKN|22×28<sup>299</sup>+16263|http://factordb.com/cert.php?id=1100000003850161946|
|28|25500|C<sub>310</sub>43|(4×28<sup>312</sup>−2101)/9|http://factordb.com/cert.php?id=1100000003850161947|
|28|25501|RN<sub>319</sub>|(752×28<sup>319</sup>−23)/27|http://factordb.com/cert.php?id=1100000002611723967|
|28|25502|CA<sub>320</sub>F|(334×28<sup>321</sup>+125)/27|http://factordb.com/cert.php?id=1100000000840839995|
|28|25503|D6<sub>326</sub>LR|(119×28<sup>328</sup>+3967)/9|http://factordb.com/cert.php?id=1100000003850161948|
|28|25504|B<sub>350</sub>AB|(11×28<sup>352</sup>−767)/27|http://factordb.com/cert.php?id=1100000003850161949|
|28|25505|GA0<sub>355</sub>N|458×28<sup>356</sup>+23|http://factordb.com/cert.php?id=1100000003850161950|
|28|25506|A0<sub>356</sub>P7P|10×28<sup>359</sup>+19821|http://factordb.com/cert.php?id=1100000003850161951|
|28|25507|J<sub>363</sub>H|(19×28<sup>364</sup>−73)/27|http://factordb.com/cert.php?id=1100000002611724460|
|28|25508|4B<sub>381</sub>|(119×28<sup>381</sup>−11)/27|http://factordb.com/cert.php?id=1100000002611724588|
|28|25509|EB0<sub>405</sub>1|403×28<sup>406</sup>+1|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html), since *N*−1 is trivially fully factored|
|28|25510|AN<sub>461</sub>|(293×28<sup>461</sup>−23)/27|http://factordb.com/cert.php?id=1100000002611724556|
|28|25511|4O<sub>614</sub>09|(44×28<sup>616</sup>−6191)/9|http://factordb.com/cert.php?id=1100000000840839989|
|28|25512|2D<sub>641</sub>|(67×28<sup>641</sup>−13)/27|http://factordb.com/cert.php?id=1100000002611725341|
|28|25513|70<sub>748</sub>M5|7×28<sup>750</sup>+621|http://factordb.com/cert.php?id=1100000003850161956|
|28|25514|4A0<sub>804</sub>B|122×28<sup>805</sup>+11|http://factordb.com/cert.php?id=1100000003850161957|
|28|25515|LK<sub>925</sub>F|(587×28<sup>926</sup>−155)/27|http://factordb.com/cert.php?id=1100000000840839978|
|28|25516|J0<sub>1071</sub>AC5|19×28<sup>1074</sup>+8181|http://factordb.com/cert.php?id=1100000003850161959|
|28|25517|J0<sub>1252</sub>J5|19×28<sup>1254</sup>+537|http://factordb.com/cert.php?id=1100000003850161963|
|28|25518|5<sub>1304</sub>6F|(5×28<sup>1306</sup>+1021)/27|http://factordb.com/cert.php?id=1100000003850161964|
|28|25519|5<sub>1332</sub>P8P|(5×28<sup>1335</sup>+426163)/27|http://factordb.com/cert.php?id=1100000003850161965|
|28|25520|5I<sub>1370</sub>F|(17×28<sup>1371</sup>−11)/3|http://factordb.com/cert.php?id=1100000003850161972|
|28|25521|A<sub>1423</sub>6F|(10×28<sup>1425</sup>−2899)/27|http://factordb.com/cert.php?id=1100000000840839947|
|28|25522|G0<sub>1899</sub>AN|16×28<sup>1901</sup>+303|http://factordb.com/cert.php?id=1100000003850161973|
|28|25523|5<sub>3746</sub>8P|(5×28<sup>3748</sup>+2803)/27|http://factordb.com/cert.php?id=1100000003850161974|
|28|25524|QO<sub>4239</sub>69|(242×28<sup>4241</sup>−4679)/9|http://factordb.com/cert.php?id=1100000000840839934|
|28|25525|D0<sub>5267</sub>77D|13×28<sup>5270</sup>+5697|http://factordb.com/cert.php?id=1100000003850151420|
|30|2613|AN<sub>206</sub>|(313×30<sup>206</sup>−23)/29|http://factordb.com/cert.php?id=1100000002327651073|
|30|2614|M<sub>241</sub>QB|(22×30<sup>243</sup>+3139)/29|http://factordb.com/cert.php?id=1100000003593408295|
|30|2615|M0<sub>547</sub>SS7|22×30<sup>550</sup>+26047|http://factordb.com/cert.php?id=1100000003593407988|
|30|2616|C0<sub>1022</sub>1|12×30<sup>1023</sup>+1|proven prime by *N*−1 test (https://primes.utm.edu/prove/prove3_1.html, http://factordb.com/nmoverview.php?method=1), since *N*−1 is trivially fully factored|
|30|2617|5<sub>4882</sub>J|(5×30<sup>4883</sup>+401)/29|http://factordb.com/cert.php?id=1100000002327649423|
|30|2619|OT<sub>34205</sub>|25×30<sup>34205</sup>−1|proven prime by *N*+1 test (https://primes.utm.edu/prove/prove3_2.html, http://factordb.com/nmoverview.php?method=2), since *N*+1 is trivially fully factored|

Condensed table for bases 2 ≤ *b* ≤ 36: (the bases *b* = 11, 13, 16, 17, 19, 21\~23, 25\~36 data assumes the primality of the probable primes) (This data assumes that a number > 10<sup>25000</sup> which has passed the Miller–Rabin primality tests to all prime bases *p* < 64 and has passed the Baillie–PSW primality test and has trial factored to 10<sup>16</sup> is in fact prime, since in some cases (e.g. *b* = 11) a candidate for minimal prime base *b* is too large to be proven prime rigorously)

|*b*|number of minimal primes base *b*|base-*b* form of the top 10 known minimal prime base *b* (write "*d*<sub>*n*</sub>" if there are 5 or more (*n*) consecutive same digits *d*)|length of the top 10 known minimal prime base *b*|algebraic ((*a*×*b*<sup>*n*</sup>+*c*)/*gcd*(*a*+*c*,*b*−1)) form of the top 10 known minimal prime base *b*|number of unsolved families in base *b*|searching limit of length for the unsolved families in base *b* (if there are different searching limits for the unsolved families in base *b*, choose the lowest searching limit)
|---|---|---|---|---|---|---|
|2|1|11|2|3|0|–|
|3|3|111<br>21<br>12|3<br>2<br>2|13<br>7<br>5|0|–|
|4|5|221<br>31<br>23<br>13<br>11|3<br>2<br>2<br>2<br>2|41<br>13<br>11<br>7<br>5|0|–|
|5|22|10<sub>93</sub>13<br>300031<br>44441<br>33331<br>33001<br>30301<br>14444<br>10103<br>3101<br>414|96<br>6<br>5<br>5<br>5<br>5<br>5<br>5<br>4<br>3|5<sup>95</sup>+8<br>9391<br>3121<br>2341<br>2251<br>1951<br>1249<br>653<br>401<br>109|0|–|
|6|11|40041<br>4441<br>4401<br>51<br>45<br>35<br>31<br>25<br>21<br>15|5<br>4<br>4<br>2<br>2<br>2<br>2<br>2<br>2<br>2|5209<br>1033<br>1009<br>31<br>29<br>23<br>19<br>17<br>13<br>11|0|–|
|7|71|3<sub>16</sub>1<br>510<sub>7</sub>1<br>3<sub>6</sub>01<br>1100021<br>531101<br>351101<br>300053<br>150001<br>100121<br>40054|17<br>10<br>8<br>7<br>6<br>6<br>6<br>6<br>6<br>5|(7<sup>17</sup>−5)/2<br>36×7<sup>8</sup>+1<br>(7<sup>8</sup>−47)/2<br>134471<br>91631<br>62819<br>50459<br>28813<br>16871<br>9643|0|–|
|8|75|4<sub>220</sub>7<br>5<sub>13</sub>25<br>7<sub>12</sub>1<br>77774<sub>6</sub>1<br>74<sub>7</sub>1<br>4<sub>8</sub>1<br>5<sub>5</sub>025<br>5550525<br>5500525<br>4<sub>5</sub>77|221<br>15<br>13<br>11<br>9<br>9<br>8<br>7<br>7<br>7|(4×8<sup>221</sup>+17)/7<br>(5×8<sup>15</sup>−173)/7<br>8<sup>13</sup>−7<br>(28669×8<sup>7</sup>−25)/7<br>(53×8<sup>8</sup>−25)/7<br>(4×8<sup>9</sup>−25)/7<br>(5×8<sup>8</sup>−2413)/7<br>1495381<br>1474901<br>(4×8<sup>7</sup>+185)/7|0|–|
|9|151|30<sub>1158</sub>11<br>27<sub>686</sub>07<br>76<sub>329</sub>2<br>561<sub>36</sub><br>10<sub>25</sub>57<br>30<sub>20</sub>51<br>8<sub>19</sub>335<br>727<sub>15</sub>07<br>51<sub>13</sub>61<br>10<sub>12</sub>507|1161<br>689<br>331<br>38<br>28<br>23<br>22<br>19<br>16<br>15|3×9<sup>1160</sup>+10<br>(23×9<sup>688</sup>−511)/8<br>(31×9<sup>330</sup>−19)/4<br>(409×9<sup>36</sup>−1)/8<br>9<sup>27</sup>+52<br>3×9<sup>22</sup>+46<br>9<sup>22</sup>−454<br>(527×9<sup>17</sup>−511)/8<br>(41×9<sup>15</sup>+359)/8<br>9<sup>14</sup>+412|0|–|
|10|77|50<sub>28</sub>27<br>5<sub>11</sub>1<br>805<sub>5</sub>1<br>66600049<br>66000049<br>60<sub>5</sub>49<br>220<sub>5</sub>1<br>5200007<br>946669<br>666649|31<br>12<br>8<br>8<br>8<br>8<br>8<br>7<br>6<br>6|5×10<sup>30</sup>+27<br>(5×10<sup>12</sup>−41)/9<br>(725×10<sup>6</sup>−41)/9<br>66600049<br>66000049<br>6×10<sup>7</sup>+49<br>22×10<sup>6</sup>+1<br>5200007<br>946669<br>666649|0|–|
|11|1068|57<sub>62668</sub><br>557<sub>1011</sub><br>7<sub>759</sub>44<br>A<sub>713</sub>58<br>85<sub>220</sub>05<br>507<sub>206</sub><br>5<sub>161</sub>2A<br>50<sub>126</sub>57<br>10<sub>125</sub>51<br>326<sub>122</sub>|62669<br>1013<br>761<br>715<br>223<br>208<br>163<br>129<br>128<br>124|(57×11<sup>62668</sup>−7)/10<br>(607×11<sup>1011</sup>−7)/10<br>(7×11<sup>761</sup>−367)/10<br>11<sup>715</sup>−58<br>(17×11<sup>222</sup>−111)/2<br>(557×11<sup>206</sup>−7)/10<br>(11<sup>163</sup>−57)/2<br>5×11<sup>128</sup>+62<br>11<sup>127</sup>+56<br>(178×11<sup>122</sup>−3)/5|0|–|
|12|106|40<sub>39</sub>77<br>B0<sub>27</sub>9B<br>B<sub>6</sub>99B<br>AA0<sub>5</sub>1<br>B00099B<br>AAA0001<br>BBBAA1<br>A00065<br>44AAA1<br>BBBB1|42<br>30<br>9<br>8<br>7<br>7<br>6<br>6<br>6<br>5|4×12<sup>41</sup>+91<br>11×12<sup>29</sup>+119<br>12<sup>9</sup>−313<br>130×12<sup>6</sup>+1<br>32847239<br>32555521<br>2985817<br>2488397<br>1097113<br>248821|0|–|
|13|3196\~3197|95<sub>197420</sub><br>80<sub>32017</sub>111<br>C5<sub>23755</sub>C<br>C<sub>10631</sub>92<br>B0<sub>6540</sub>BBA<br>390<sub>6266</sub>1<br>1770<sub>2703</sub>17<br>720<sub>2297</sub>2<br>930<sub>1551</sub>1<br>7<sub>1504</sub>1|197421<br>32021<br>23757<br>10633<br>6544<br>6269<br>2708<br>2300<br>1554<br>1505|(113×13<sup>197420</sup>−5)/12<br>8×13<sup>32020</sup>+183<br>(149×13<sup>23756</sup>+79)/12<br>13<sup>10633</sup>−50<br>11×13<sup>6543</sup>+2012<br>48×13<sup>6267</sup>+1<br>267×13<sup>2705</sup>+20<br>93×13<sup>2298</sup>+2<br>120×13<sup>1552</sup>+1<br>(7×13<sup>1505</sup>−79)/12|1|332573|
|14|650|4D<sub>19698</sub><br>34D<sub>708</sub><br>8D<sub>141</sub>85<br>8<sub>86</sub>B<br>40<sub>83</sub>49<br>8C<sub>79</sub>3<br>18<sub>79</sub>B<br>6B<sub>77</sub>2B<br>4<sub>63</sub>09<br>A<sub>59</sub>3|19699<br>710<br>144<br>87<br>86<br>81<br>81<br>80<br>65<br>60|5×14<sup>19698</sup>−1<br>47×14<sup>708</sup>−1<br>9×14<sup>143</sup>−79<br>(8×14<sup>87</sup>+31)/13<br>4×14<sup>85</sup>+65<br>(116×14<sup>80</sup>−129)/13<br>(21×14<sup>80</sup>+31)/13<br>(89×14<sup>79</sup>−1649)/13<br>(4×14<sup>65</sup>−667)/13<br>(10×14<sup>60</sup>−101)/13|0|–|
|15|1284|7<sub>155</sub>97<br>E<sub>145</sub>397<br>96<sub>104</sub>08<br>7<sub>73</sub>CE<br>7<sub>59</sub>CCE<br>50<sub>33</sub>17<br>EB<sub>31</sub><br>6330<sub>26</sub>1<br>7050<sub>24</sub>B<br>B70<sub>24</sub>1|157<br>148<br>107<br>75<br>62<br>36<br>32<br>30<br>28<br>27|(15<sup>157</sup>+59)/2<br>15<sup>148</sup>−2558<br>(66×15<sup>106</sup>−619)/7<br>(15<sup>75</sup>+163)/2<br>(15<sup>62</sup>+2413)/2<br>5×15<sup>35</sup>+22<br>(207×15<sup>31</sup>−11)/14<br>1398×15<sup>27</sup>+1<br>1580×15<sup>25</sup>+11<br>172×15<sup>25</sup>+1|0|–|
|16|2347|3<sub>116137</sub>AF<br>4<sub>72785</sub>DD<br>DB<sub>32234</sub><br>D0B<sub>17804</sub><br>5BC<sub>3700</sub>D<br>90<sub>3542</sub>91<br>300F<sub>1960</sub>AF<br>20<sub>1713</sub>321<br>F8<sub>1517</sub>F<br>FAF<sub>1062</sub>45|116139<br>72787<br>32235<br>17806<br>3703<br>3545<br>1965<br>1717<br>1519<br>1066|(16<sup>116139</sup>+619)/5<br>(4×16<sup>72787</sup>+2291)/15<br>(206×16<sup>32234</sup>−11)/15<br>(3131×16<sup>17804</sup>−11)/15<br>(459×16<sup>3701</sup>+1)/5<br>9×16<sup>3544</sup>+145<br>769×16<sup>1962</sup>−81<br>2×16<sup>1716</sup>+801<br>(233×16<sup>1518</sup>+97)/15<br>251×16<sup>1064</sup>−187|0|–|
|17|10409\~10427|B<sub>67103</sub>2E<br>570<sub>51310</sub>1<br>E9B<sub>44732</sub><br>D0GD<sub>37096</sub><br>G7<sub>32072</sub>F<br>150<sub>24325</sub>D<br>347<sub>16074</sub><br>B30<sub>13077</sub>D<br>9D0<sub>10398</sub>5<br>10<sub>9019</sub>1F|67105<br>51313<br>44734<br>37099<br>32074<br>24328<br>16076<br>13080<br>10401<br>9022|(11×17<sup>67105</sup>−2411)/16<br>92×17<sup>51311</sup>+1<br>(3963×17<sup>44732</sup>−11)/16<br>(60381×17<sup>37096</sup>−13)/16<br>(263×17<sup>32073</sup>+121)/16<br>22×17<sup>24326</sup>+13<br>(887×17<sup>16074</sup>−7)/16<br>190×17<sup>13078</sup>+13<br>166×17<sup>10399</sup>+5<br>17<sup>9021</sup>+32|18|100000|
|18|549|C0<sub>6268</sub>C5<br>H<sub>766</sub>FH<br>80<sub>298</sub>B<br>C0<sub>116</sub>F5<br>HD<sub>93</sub><br>GG0<sub>30</sub>1<br>CF<sub>30</sub>5<br>B<sub>19</sub>6B<br>CCF<sub>14</sub>5<br>7<sub>14</sub>G7|6271<br>768<br>300<br>119<br>94<br>33<br>32<br>21<br>17<br>16|12×18<sup>6270</sup>+221<br>18<sup>768</sup>−37<br>8×18<sup>299</sup>+11<br>12×18<sup>118</sup>+275<br>(302×18<sup>93</sup>−13)/17<br>304×18<sup>31</sup>+1<br>(219×18<sup>31</sup>−185)/17<br>(11×18<sup>21</sup>−1541)/17<br>(3891×18<sup>15</sup>−185)/17<br>(7×18<sup>16</sup>+2747)/17|0|–|
|19|31411\~31435|D90<sub>73046</sub>9<br>4F0<sub>49847</sub>6<br>2<sub>48224</sub>7<br>2<sub>45886</sub>7A<br>90<sub>42994</sub>G<br>DB<sub>36272</sub><br>3335<sub>31088</sub><br>B<sub>26588</sub>FG<br>10<sub>22790</sub>7717<br>C7<sub>22667</sub>C|73049<br>49850<br>48225<br>45888<br>42996<br>36273<br>31091<br>26590<br>22795<br>22669|256×19<sup>73047</sup>+9<br>91×19<sup>49848</sup>+6<br>(19<sup>48225</sup>+44)/9<br>(19<sup>45888</sup>+926)/9<br>9×19<sup>42995</sup>+16<br>(245×19<sup>36272</sup>−11)/18<br>(20579×19<sup>31088</sup>−5)/18<br>(11×19<sup>26590</sup>+1447)/18<br>19<sup>22794</sup>+50566<br>(223×19<sup>22668</sup>+83)/18|24|75000|
|20|3314|G0<sub>6269</sub>D<br>CD<sub>2449</sub><br>50<sub>1163</sub>AJ<br>J<sub>655</sub>05J<br>JCJ<sub>629</sub><br>E<sub>566</sub>C7<br>3A<sub>527</sub>3<br>G<sub>447</sub>99<br>EC0<sub>429</sub>7<br>40<sub>387</sub>404B|6271<br>2450<br>1166<br>658<br>631<br>568<br>529<br>449<br>432<br>392|16×20<sup>6270</sup>+13<br>(241×20<sup>2449</sup>−13)/19<br>5×20<sup>1165</sup>+219<br>20<sup>658</sup>−7881<br>393×20<sup>629</sup>−1<br>(14×20<sup>568</sup>−907)/19<br>(67×20<sup>528</sup>−143)/19<br>(16×20<sup>449</sup>−2809)/19<br>292×20<sup>430</sup>+7<br>4×20<sup>391</sup>+32091|0|–|
|21|13382\~13394|40<sub>47333</sub>9G<br>B90<sub>45019</sub>E5<br>HD<sub>37414</sub><br>BD<sub>35027</sub>B<br>990<sub>33239</sub>99H<br>5<sub>30606</sub>FEK<br>43<sub>29236</sub>B<br>J<sub>23304</sub>6J<br>9<sub>21126</sub>0D<br>5D0<sub>19848</sub>1|47336<br>45023<br>37415<br>35029<br>33244<br>30609<br>29238<br>23306<br>21128<br>19851|4×21<sup>47335</sup>+205<br>240×21<sup>45021</sup>+299<br>(353×21<sup>37414</sup>−13)/20<br>(233×21<sup>35028</sup>−53)/20<br>198×21<sup>33242</sup>+4175<br>(21<sup>30609</sup>+18455)/4<br>(83×21<sup>29237</sup>+157)/20<br>(19×21<sup>23306</sup>−5479)/20<br>(9×21<sup>21128</sup>−3709)/20<br>118×21<sup>19849</sup>+1|12|50000|
|22|8003|BK<sub>22001</sub>5<br>7<sub>3815</sub>2L<br>L<sub>2385</sub>KE7<br>7<sub>959</sub>K7<br>J0<sub>767</sub>IGGJ<br>K0<sub>760</sub>EC1<br>I<sub>626</sub>AF<br>E60<sub>496</sub>L<br>L<sub>483</sub>G3<br>L0<sub>454</sub>B63|22003<br>3817<br>2388<br>961<br>772<br>764<br>628<br>499<br>485<br>458|(251×22<sup>22002</sup>−335)/21<br>(22<sup>3817</sup>−289)/3<br>22<sup>2388</sup>−653<br>(22<sup>961</sup>+857)/3<br>19×22<sup>771</sup>+199779<br>20×22<sup>763</sup>+7041<br>(6×22<sup>628</sup>−1259)/7<br>314×22<sup>497</sup>+21<br>22<sup>485</sup>−129<br>21×22<sup>457</sup>+5459|0|–|
|23|65144\~65274|7<sub>19067</sub>33<br>70D0<sub>18398</sub>9<br>A77M7<sub>16359</sub><br>JL0<sub>15737</sub>H<br>570<sub>14048</sub>1<br>L<sub>13800</sub>B<br>JII0<sub>13152</sub>E<br>HJE0<sub>12455</sub>J<br>9B<sub>12409</sub>0B<br>L<sub>11992</sub>D<sub>7</sub>|19069<br>18402<br>16363<br>15740<br>14051<br>13801<br>13156<br>12459<br>12412<br>11999|(7×23<sup>19069</sup>−2119)/22<br>3716×23<sup>18399</sup>+9<br>(2762239×23<sup>16359</sup>−7)/22<br>458×23<sup>15738</sup>+17<br>122×23<sup>14049</sup>+1<br>(21×23<sup>13801</sup>−241)/22<br>10483×23<sup>13153</sup>+14<br>9444×23<sup>12456</sup>+19<br>(19×23<sup>12411</sup>−507)/2<br>(21×23<sup>11999</sup>−8×23<sup>7</sup>−13)/22|130|20000
|24|3409|N00N<sub>8129</sub>LN<br>88N<sub>5951</sub><br>A0<sub>2951</sub>8ID<br>D<sub>2698</sub>LD<br>N<sub>2644</sub>LLN<br>BC0<sub>331</sub>B<br>20<sub>313</sub>7<br>C7<sub>298</sub><br>D0<sub>259</sub>KKD<br>I0<sub>241</sub>I5|8134<br>5953<br>2955<br>2700<br>2647<br>334<br>315<br>299<br>263<br>244|13249×24<sup>8131</sup>−49<br>201×24<sup>5951</sup>−1<br>10×24<sup>2954</sup>+5053<br>(13×24<sup>2700</sup>+4403)/23<br>24<sup>2647</sup>−1201<br>276×24<sup>332</sup>+11<br>2×24<sup>314</sup>+7<br>(283×24<sup>298</sup>−7)/23<br>13×24<sup>262</sup>+12013<br>18×24<sup>243</sup>+437|0|–|
|25|133625~133724|5J<sub>46728</sub><br>JD10<sub>46037</sub>D07<br>4F<sub>42783</sub>OO<br>D<sub>41667</sub>G<br>GHN0<sub>40444</sub>H<br>5<sub>37981</sub>A8<br>DH0H<sub>35773</sub><br>50<sub>34151</sub>HHBB<br>H<sub>32683</sub>FH<br>M21<sub>31741</sub>|46729<br>46043<br>42786<br>41668<br>40448<br>37983<br>35776<br>34156<br>32685<br>31743|(139×25<sup>46728</sup>−19)/24<br>12201×25<sup>46040</sup>+8132<br>(37×25<sup>42785</sup>+1867)/8<br>(13×25<sup>41668</sup>+59)/24<br>10448×25<sup>40445</sup>+17<br>(5×25<sup>37983</sup>+3067)/24<br>(205217×25<sup>35773</sup>−17)/24<br>5×25<sup>34155</sup>+276536<br>(17×25<sup>32685</sup>−1217)/24<br>(13249×25<sup>31741</sup>−1)/24|99|50000|
|26|25255\~25259|M0<sub>61186</sub>2BB<br>J0<sub>44303</sub>KCB<br>6K<sub>23300</sub>5<br>LD0<sub>20975</sub>7<br>7<sub>20279</sub>OL<br>5<sub>19391</sub>6F<br>9GDK<sub>15920</sub>P<br>M<sub>8772</sub>P<br>K0<sub>4364</sub>I5<br>J<sub>4222</sub>P|61190<br>44307<br>23302<br>20978<br>20281<br>19393<br>15924<br>8773<br>4367<br>4223|22×26<sup>61189</sup>+1649<br>19×26<sup>44306</sup>+13843<br>(34×26<sup>23301</sup>−79)/5<br>559×26<sup>20976</sup>+7<br>(7×26<sup>20281</sup>+11393)/25<br>(26<sup>19393</sup>+179)/5<br>(32569×26<sup>15921</sup>+21)/5<br>(22×26<sup>8773</sup>+53)/25<br>20×26<sup>4366</sup>+473<br>(19×26<sup>4223</sup>+131)/25|4|100000|
|27|102848~102896|ME<sub>49640</sub>9G<br>PH0<sub>47890</sub>1<br>QF<sub>47165</sub>AF5<br>J0<sub>40791</sub>PD<br>510<sub>39164</sub>I07<br>NGN0<sub>36329</sub>N<br>153F<sub>35831</sub>5<br>L<sub>35564</sub>GLG<br>PN0<sub>33401</sub>J<br>BF<sub>27514</sub>8|49643<br>47893<br>47169<br>40794<br>39169<br>36333<br>35835<br>35567<br>33404<br>27516|(293×27<sup>49642</sup>−1736)/13<br>692×27<sup>47891</sup>+1<br>(691×27<sup>47168</sup>−95045)/26<br>19×27<sup>40793</sup>+688<br>136×27<sup>39167</sup>+13129<br>17222×27<sup>36330</sup>+23<br>(22557×27<sup>35832</sup>−275)/26<br>(21×27<sup>35567</sup>−94921)/26<br>698×27<sup>33402</sup>+19<br>(301×27<sup>27515</sup>−197)/26|48|50000|
|28|25528\~25529|O4O<sub>94535</sub>9<br>5OA<sub>31238</sub>F<br>N6<sub>24051</sub>LR<br>D0<sub>5267</sub>77D<br>QO<sub>4239</sub>69<br>5<sub>3746</sub>8P<br>G0<sub>1899</sub>AN<br>A<sub>1423</sub>6F<br>5I<sub>1370</sub>F<br>5<sub>1332</sub>P8P|94538<br>31241<br>24054<br>5271<br>4242<br>3748<br>1902<br>1425<br>1372<br>1335|(6092×28<sup>94536</sup>−143)/9<br>(4438×28<sup>31239</sup>+125)/27<br>(209×28<sup>24053</sup>+3967)/9<br>13×28<sup>5270</sup>+5697<br>(242×28<sup>4241</sup>−4679)/9<br>(5×28<sup>3748</sup>+2803)/27<br>16×28<sup>1901</sup>+303<br>(10×28<sup>1425</sup>−2899)/27<br>(17×28<sup>1371</sup>−11)/3<br>(5×28<sup>1335</sup>+426163)/27|1|543202|
|29|||||||
|30|2619|OT<sub>34205</sub><br>I0<sub>24608</sub>D<br>5<sub>4882</sub>J<br>C0<sub>1022</sub>1<br>M0<sub>547</sub>SS7<br>M<sub>241</sub>QB<br>AN<sub>206</sub><br>50<sub>164</sub>B<br>J<sub>153</sub>QJ<br>J<sub>94</sub>QQJ|34206<br>24610<br>4883<br>1024<br>551<br>243<br>207<br>166<br>155<br>97|25×30<sup>34205</sup>−1<br>18×30<sup>24609</sup>+13<br>(5×30<sup>4883</sup>+401)/29<br>12×30<sup>1023</sup>+1<br>22×30<sup>550</sup>+26047<br>(22×30<sup>243</sup>+3139)/29<br>(313×30<sup>206</sup>−23)/29<br>5×30<sup>165</sup>+11<br>(19×30<sup>155</sup>+6071)/29<br>(19×30<sup>97</sup>+188771)/29|0|–|
|31|||||||
|32|168832\~169017|V090<sub>18867</sub>D<br>T0<sub>18762</sub>F<br>DM<sub>18004</sub>L<br>F<sub>17783</sub>H<br>V<sub>17753</sub>33<br>A<sub>17650</sub>I5<br>80<sub>17186</sub>MJ<br>V6<sub>17107</sub>9<br>V<sub>16755</sub>O3<br>C0<sub>16737</sub>AAA9|18871<br>18764<br>18006<br>17784<br>17755<br>17652<br>17189<br>17109<br>16757<br>16742|31753×32<sup>18868</sup>+13<br>29×32<sup>18763</sup>+15<br>(425×32<sup>18005</sup>−53)/31<br>(15×32<sup>17784</sup>+47)/31<br>32<sup>17755</sup>−925<br>(10×32<sup>17652</sup>+7771)/31<br>8×32<sup>17188</sup>+723<br>(967×32<sup>17108</sup>+87)/31<br>32<sup>16757</sup>−253<br>12×32<sup>16741</sup>+338249|185|20000|
|33|||||||
|34|184772\~184833|UKN<sub>49845</sub><br>I<sub>46946</sub>8FF<br>M<sub>45310</sub>UIF<br>QG<sub>44663</sub>L<br>W0<sub>43669</sub>MKN<br>NA0<sub>41733</sub>1<br>K0<sub>38239</sub>J4J<br>F<sub>34013</sub>X5<br>K0<sub>32901</sub>E1<br>K7<sub>32021</sub>|49847<br>46949<br>45313<br>44665<br>43673<br>41736<br>38243<br>34015<br>32904<br>32022|(34343×34<sup>49845</sup>−23)/33<br>(6×34<sup>46949</sup>−128321)/11<br>(2×34<sup>45313</sup>+27313)/3<br>(874×34<sup>44664</sup>+149)/33<br>32×34<sup>43672</sup>+26135<br>792×34<sup>41734</sup>+1<br>20×34<sup>38242</sup>+22119<br>(5×34<sup>34015</sup>+6617)/11<br>20×34<sup>32903</sup>+477<br>(667×34<sup>32021</sup>−7)/33|61|50000|
|35|||||||
|36|35286\~35290|P<sub>81993</sub>SZ<br>S0<sub>75007</sub>8H<br>7K<sub>26567</sub>Z<br>J<sub>10117</sub>LJ<br>VL0<sub>7258</sub>J<br>EO0<sub>6177</sub>V<br>FZ<sub>5777</sub>3P<br>T09<sub>4618</sub>1<br>RY<sub>4562</sub>H<br>OZ<sub>3932</sub>AZ|81995<br>75010<br>26569<br>10119<br>7261<br>6180<br>5780<br>4621<br>4564<br>3935|(5×36<sup>81995</sup>+821)/7<br>28×36<sup>75009</sup>+305<br>(53×36<sup>26568</sup>+101)/7<br>(19×36<sup>10119</sup>+2501)/35<br>1137×36<sup>7259</sup>+19<br>528×36<sup>6178</sup>+31<br>16×36<sup>5779</sup>−1163<br>(36549×36<sup>4619</sup>−289)/35<br>(979×36<sup>4563</sup>−629)/35<br>25×36<sup>3934</sup>−901|4|100000|

Links for top (probable) primes:

* https://primes.utm.edu/primes/lists/all.txt (top definitely primes)
* https://primes.utm.edu/primes/lists/all.zip (top definitely primes, zipped file)
* https://primes.utm.edu/primes/lists/all.pdf (top definitely primes, pdf version)
* https://primes.utm.edu/primes/lists/all_pdf.zip (top definitely primes, pdf version, zipped file)
* https://primes.utm.edu/primes/lists/short.txt (definitely primes with ≥ 800000 decimal digits)
* https://primes.utm.edu/primes/lists/short.pdf (definitely primes with ≥ 800000 decimal digits, pdf version)
* https://primes.utm.edu/primes/lists/short_pdf.zip (definitely primes with ≥ 800000 decimal digits, pdf version, zipped file)
* https://primes.utm.edu/primes/search.php?OnList=all&Number=1000000&Style=HTML (all numbers in the list of top definitely primes)
* https://primes.utm.edu/primes/download.php (index page of top definitely primes)
* https://primes.utm.edu/largest.html (the information page of top definitely primes)
* https://primes.utm.edu/notes/by_year.html (the information page of the largest known prime by year)
* https://primes.utm.edu/notes/faq/why.html (the information page of why do people find these large primes)
* https://primes.utm.edu/primes/search.php (search page of top definitely primes)
* https://primes.utm.edu/primes/search.php?Advanced=1 (advanced search page of top definitely primes)
* https://primes.utm.edu/primes/search_proth.php (search page of top definitely primes of the form *k*×*b*<sup>*n*</sup>±1)
* https://primes.utm.edu/primes/status.php (verification status page of top definitely primes)
* https://primes.utm.edu/top20/index.php (the top 20 definitely primes of certain selected forms)
* https://primes.utm.edu/bios/submission.php (submit page of top definitely primes)
* https://primes.utm.edu/bios/newprover.php (submit page of top definitely primes, create a new prover account)
* https://primes.utm.edu/bios/newcode.php (submit page of top definitely primes, create a new prover code)
* https://primes.utm.edu/bios/index.php (index of the provers and programs and projects of top definitely primes)
* http://www.primenumbers.net/prptop/prptop.php (top probable primes)
* http://www.primenumbers.net/prptop/latest.php (recently found top probable primes)
* http://www.primenumbers.net/prptop/searchform.php (search page of top probable primes)
* http://www.primenumbers.net/prptop/searchform.php?form=%3F&action=Search (all numbers in the list of top probable primes)
* http://www.primenumbers.net/prptop/submit.php (submit page of top probable primes)
* http://www.primenumbers.net/prptop/topdisc.php (index of the provers of top probable primes)

Other researches for the digits of the primes:

Left-truncatable primes (https://en.wikipedia.org/wiki/Truncatable_prime, https://primes.utm.edu/glossary/xpage/LeftTruncatablePrime.html, https://mathworld.wolfram.com/TruncatablePrime.html), i.e. every nonempty suffix is prime:

1. http://primerecords.dk/left-truncatable.txt (base 10)
2. http://chesswanks.com/num/LTPs/ (bases 3 to 120)
3. https://www.ams.org/journals/mcom/1977-31-137/S0025-5718-1977-0427213-2/S0025-5718-1977-0427213-2.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_28.pdf) (bases 3 to 11)
4. https://oeis.org/A103443 (largest left-truncatable prime in base *b*)
5. https://oeis.org/A103463 (length of the largest left-truncatable prime in base *b*)
6. https://oeis.org/A076623 (number of left-truncatable primes in base *b*)

Right-truncatable primes (https://en.wikipedia.org/wiki/Truncatable_prime, https://primes.utm.edu/glossary/xpage/RightTruncatablePrime.html, https://mathworld.wolfram.com/TruncatablePrime.html), i.e. every nonempty prefix is prime:

1. http://primerecords.dk/right-truncatable.txt (base 10)
2. http://fatphil.org/maths/rtp/rtp.html (bases 3 to 90)
3. https://www.ams.org/journals/mcom/1977-31-137/S0025-5718-1977-0427213-2/S0025-5718-1977-0427213-2.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_28.pdf) (bases 3 to 15)
4. https://oeis.org/A023107 (largest right-truncatable prime in base *b*)
5. https://oeis.org/A103483 (length of the largest right-truncatable prime in base *b*)
6. https://oeis.org/A076586 (number of right-truncatable primes in base *b*)

Other researches for the minimal elements of other subsets of positive integers written in the positional numeral system with radix *b*, as digit strings with subsequence ordering:

Primes == 1 mod 4:

1. https://www.primepuzzles.net/puzzles/puzz_178.htm
2. https://oeis.org/A111055

Primes == 3 mod 4:

1. https://www.primepuzzles.net/puzzles/puzz_178.htm
2. https://oeis.org/A111056

Palindromic primes:

1. https://www.primepuzzles.net/puzzles/puzz_178.htm
2. https://oeis.org/A114835

Composites:

1. https://oeis.org/A071070

Squares:

1. http://recursed.blogspot.com/2006/12/prime-game.html
2. https://oeis.org/A130448

Powers of 2:

1. https://oeis.org/A071071/a071071.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_13.pdf)
2. https://oeis.org/A071071

Multiples of 3:

1. https://oeis.org/A071073

Multiples of 4:

1. https://oeis.org/A071072

Other sets:

1. https://arxiv.org/pdf/1607.01548.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_14.pdf) (sums of three squares, quadratic residues mod 6, quadratic residues mod 7, range of Euler’s totient function, range of "Euler’s totient function + 3", range of Dedekind psi function, perfect numbers)
2. https://nntdm.net/papers/nntdm-25/NNTDM-25-1-036-047.pdf (cached copy at https://github.com/xayahrainie4793/pdf-files-cached-copy/blob/main/pdf_15.pdf) (range of "Euler’s totient function + *n*", for 0 ≤ *n* ≤ 5)

Tools about this research: (in fact, you can also use Wolfram Alpha (https://www.wolframalpha.com/) or online Magma calculator (http://magma.maths.usyd.edu.au/calc/) or Pari/GP (https://pari.math.u-bordeaux.fr/)) 

Prime checkers:

1. https://primes.utm.edu/curios/includes/primetest.php
2. https://www.numberempire.com/primenumbers.php
3. http://www.numbertheory.org/php/lucas.html
4. http://www.javascripter.net/math/calculators/100digitbigintcalculator.htm (just type *x* and click "prime?")
5. https://www.bigprimes.net/primalitytest
6. http://www.proftnj.com/calcprem.htm
7. https://www.archimedes-lab.org/primOmatic.html
8. http://www.sonic.net/~undoc/java/PrimeCalc.html

Integer factorizers:

1. https://www.numberempire.com/numberfactorizer.php
2. https://www.alpertron.com.ar/ECM.HTM
3. http://www.javascripter.net/math/calculators/primefactorscalculator.htm
4. https://betaprojects.com/calculators/prime_factors.html
5. https://www.emathhelp.net/calculators/pre-algebra/prime-factorization-calculator/
6. http://www.numbertheory.org/php/factor.html
7. https://primefan.tripod.com/Factorer.html
8. http://www.se16.info/js/factor.htm
9. http://math.fau.edu/Richman/mla/factor-f.htm
10. http://www.rsok.com/~jrm/factor.html
11. http://www.brennen.net/primes/FactorApplet.html (need run with Java)
12. https://web.archive.org/web/20161004191531/http://britton.disted.camosun.bc.ca/jbprimefactor.htm
13. http://wims.unice.fr/~wims/en_tool~algebra~factor.en.html
14. http://www.analyzemath.com/Calculators_3/prime_factors.html
15. http://www.proftnj.com/calcprem.htm (in French)

Base converters:

1. https://baseconvert.com/
2. https://www.dcode.fr/base-n-convert
3. https://www.calculand.com/unit-converter/zahlen.php
4. https://www.cut-the-knot.org/Curriculum/Algorithms/BaseConversion.shtml
5. http://www.tonymarston.net/php-mysql/converter.html
6. http://math.fau.edu/Richman/mla/convert.htm
7. https://web.archive.org/web/20190629223750/http://thedevtoolkit.com/tools/base_conversion
8. http://www.kwuntung.net/hkunit/base/base.php (in Chinese)
9. https://linesegment.web.fc2.com/application/math/numbers/RadixConversion.html (in Japanese)

Expression generators:

1. https://stdkmd.net/nrr/exprgen.htm (only support base 10 forms)
2. https://www.numberempire.com/simplifyexpression.php (e.g. for the form 5{7} in base 11, type "5\*11^n+7\*(11^n-1)/10")

List of small primes:

1. https://primes.utm.edu/lists/small/1000.txt
2. https://primes.utm.edu/lists/small/10000.txt
3. https://primes.utm.edu/lists/small/100000.txt
4. https://primes.utm.edu/lists/small/millions/
5. https://oeis.org/A000040/a000040.txt
6. https://oeis.org/A000040/b000040_1.txt
7. https://oeis.org/A000040/a000040_1B.7z
8. https://metanumbers.com/prime-numbers
9. https://www2.cs.arizona.edu/icon/oddsends/primes.htm
10. http://noe-education.org/D11102.php (in French)
11. https://web.archive.org/web/20060513054350/http://www.walter-fendt.de/m14i/primes_i.htm (in Italian)
12. https://primefan.tripod.com/500Primes1.html
13. https://www.gutenberg.org/files/65/65.txt
14. http://www.primos.mat.br/indexen.html
15. https://www.walter-fendt.de/html5/men/primenumbers_en.htm
16. http://www.rsok.com/~jrm/printprimes.html
17. http://www.numbertheory.org/php/prime_generator.html
18. https://jocelyn.quizz.chat/np/cache/index.html (in French)
19. http://www.sosmath.com/tables/prime/prime.html
20. https://www.bigprimes.net/archive/prime
21. https://web.archive.org/web/20201130071856/http://www.mathematical.com/primelist1to100kk.html
22. https://web.archive.org/web/20191118082053/http://www.tsm-resources.com/alists/prim.html
23. https://web.archive.org/web/20090917191047/http://planetmath.org/encyclopedia/FirstThousandPositivePrimeNumbers.html
24. https://faculty.lynchburg.edu/~nicely/gaps/gaplist.html (the longest list ever calculated, with all primes < 2<sup>64</sup> (but unlikely other lists here, the primes are not all stored), see https://primes.utm.edu/notes/faq/LongestList.html)
25. https://en.wikipedia.org/wiki/List_of_prime_numbers#The_first_1000_prime_numbers

Lists of factorizations of small integers:

1. http://primefan.tripod.com/500factored.html
2. http://www.sosmath.com/tables/factor/factor.html
3. https://en.wikipedia.org/wiki/Table_of_prime_factors

Lists of small integers in various bases:

1. https://en.wikipedia.org/wiki/Table_of_bases

For the files in this page:

* File "kernel *b*": Data for all known minimal primes in base *b*, expressed as base *b* strings
* File "left *b*": *x*{*y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *y* is a digit in base *b*) families in base *b* such that we were unable to determine if they contain a prime > *b* or not (i.e. *x*{*y*}*z* (where *x* and *z* are strings (may be empty) of digits in base *b*, *y* is a digit in base *b*) families in base *b* such that no prime member > *b* could be found, nor could the family be ruled out as only containing composites (only count the numbers > *b*)), these families are sorted by "the length *n* number in these families, from the smallest number to the largest number, this *n* is large enough such that *n* replaced to any larger number does not affect the sorting" (e.g. for base 17, we sort with B{0}B3 -> B{0}DB -> {B}2BE -> {B}2E -> {B}E9 -> {B}EE, since in this case 7 digits is enough, B0000B3 < B0000DB < BBBB2BE < BBBBB2E < BBBBBE9 < BBBBBEE, if the 7 replaced to any larger number, this result of the sorting will not change)

See my article about this research: https://docs.google.com/document/d/e/2PACX-1vQct6Hx-IkJd5-iIuDuOKkKdw2teGmmHW-P75MPaxqBXB37u0odFBml5rx0PoLa0odTyuW67N_vn96J/pub
