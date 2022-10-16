These are the Primo (https://www.rieselprime.de/ziki/Primo) (an elliptic curve primality proving (https://primes.utm.edu/prove/prove4_2.html, https://en.wikipedia.org/wiki/Elliptic_curve_primality, https://primes.utm.edu/glossary/xpage/ECPP.html, https://mathworld.wolfram.com/EllipticCurvePrimalityProving.html) implementation) primality certificates (https://en.wikipedia.org/wiki/Primality_certificate, https://primes.utm.edu/glossary/xpage/Certificate.html, https://mathworld.wolfram.com/PrimalityCertificate.html) for the minimal primes > 10^300 in bases 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 28, 30 (local copy from factordb (http://factordb.com/)).

e.g. File "certificate9_149" is the primality certificate for the 149th minimal prime in base 9, i.e. the primality certificate for the prime 7(6^329)2 in base 9, which equals the prime (31×9^330−19)/4.

Primes which either N−1 or N+1 is trivially fully factored (i.e. primes of the form k×b^n±1, with small k) do not need primality certificates, since they can be easily proven primes using N−1 test (https://primes.utm.edu/prove/prove3_1.html) or N+1 test (https://primes.utm.edu/prove/prove3_2.html), these primes are:

the 3176th minimal prime in base 13, 8101(0^415)1, which equals 17746×13^416+1, N−1 is trivially fully factored

the 3177th minimal prime in base 13, 811(0^435)1, which equals 1366×13^436+1, N−1 is trivially fully factored

the 3188th minimal prime in base 13, 93(0^1551)1, which equals 120×13^1552+1, N−1 is trivially fully factored

the 3191st minimal prime in base 13, 39(0^6266)1, which equals 48×13^6267+1, N−1 is trivially fully factored

the 649th minimal prime in base 14, 34(D^708), which equals 47×14^708−1, N+1 is trivially fully factored

the 650th minimal prime in base 14, 4(D^19698), which equals 5×14^19698−1, N+1 is trivially fully factored

the 2335th minimal prime in base 16, 88(F^545), which equals 137×16^545−1, N+1 is trivially fully factored

the 3310th minimal prime in base 20, JC(J^629), which equals 393×20^629−1, N+1 is trivially fully factored

the 3408th minimal prime in base 24, 88(N^5951), which equals 201×24^5951−1, N+1 is trivially fully factored

the 25509th minimal prime in base 28, EB(0^405)1, which equals 403×28^406+1, N−1 is trivially fully factored

the 2616th minimal prime in base 30, C(0^1022)1, which equals 12×30^1023+1, N−1 is trivially fully factored

the 2619th minimal prime in base 30, O(T^34205), which equals 25×30^34205−1, N+1 is trivially fully factored

Also the case where N−1 or N+1 is product of a Cunningham number (of the form b^n±1, see https://en.wikipedia.org/wiki/Cunningham_number, https://mathworld.wolfram.com/CunninghamNumber.html, https://en.wikipedia.org/wiki/The_Cunningham_project, https://primes.utm.edu/glossary/xpage/CunninghamProject.html, https://www.rieselprime.de/ziki/Cunningham_project, https://homes.cerias.purdue.edu/~ssw/cun/index.html, https://maths-people.anu.edu.au/~brent/factors.html, http://myfactors.mooo.com/, https://stdkmd.net/nrr/repunit/repunitnote.htm) and a small number, and this Cunningham number is >= 25% factored (https://en.wikipedia.org/wiki/Integer_factorization, https://www.rieselprime.de/ziki/Factorization, https://mathworld.wolfram.com/PrimeFactorization.html), see the article http://www.ams.org/journals/mcom/1975-29-130/S0025-5718-1975-0384673-1/S0025-5718-1975-0384673-1.pdf for the case that either N−1 or N+1 (or both) can be >= 33.3333% factored, if either N−1 or N+1 (or both) can be >= 25% factored but neither can be >= 33.3333% factored, then we need to use CHG (https://mersenneforum.org/attachment.php?attachmentid=21133&d=1571237465) to prove its primality (see https://mersenneforum.org/showpost.php?p=528149&postcount=3), for the examples of the numbers which are proven prime by CHG, see https://primes.utm.edu/primes/page.php?id=126454, https://primes.utm.edu/primes/page.php?id=131964, https://primes.utm.edu/primes/page.php?id=123456, https://primes.utm.edu/primes/page.php?id=130933, https://stdkmd.net/nrr/cert/1/ (search for "CHG"), https://stdkmd.net/nrr/cert/2/ (search for "CHG"), https://stdkmd.net/nrr/cert/3/ (search for "CHG"), https://stdkmd.net/nrr/cert/4/ (search for "CHG"), https://stdkmd.net/nrr/cert/5/ (search for "CHG"), https://stdkmd.net/nrr/cert/6/ (search for "CHG"), https://stdkmd.net/nrr/cert/7/ (search for "CHG"), https://stdkmd.net/nrr/cert/8/ (search for "CHG"), https://stdkmd.net/nrr/cert/9/ (search for "CHG"), however, factordb (http://factordb.com/) lacks the ability to verify CHG proofs, see https://mersenneforum.org/showpost.php?p=608362&postcount=165: (thus these numbers also do not need primality certificates)

(below, "Rn(b)" means the repunit (https://en.wikipedia.org/wiki/Repunit, https://primes.utm.edu/glossary/xpage/Repunit.html, https://primes.utm.edu/glossary/xpage/GeneralizedRepunitPrime.html, https://www.rieselprime.de/ziki/Repunit, https://mathworld.wolfram.com/Repunit.html) in base b with length n, i.e. Rn(b) = (b^n−1)/(b−1), "Sn(b)" means b^n+1, the special cases of Rn(10) and Sn(10) are in https://stdkmd.net/nrr/repunit/ and https://stdkmd.net/nrr/repunit/10001.htm, respectively)

the 3168th minimal prime in base 13, (9^308)1, N−1 is 117×R308(13), thus factor N−1 is equivalent to factor 13^308−1, and for the factorization of 13^308−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=308&c0=-&EN=

the 3179th minimal prime in base 13, (B^563)C, N−1 is 11×R564(13), thus factor N−1 is equivalent to factor 13^564−1, and for the factorization of 13^564−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=564&c0=-&EN=

the 3180th minimal prime in base 13, 1(B^576), N−1 is 23×R576(13), thus factor N−1 is equivalent to factor 13^576−1, and for the factorization of 13^576−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=576&c0=-&EN=

Although these numbers also have N−1 or N+1 is product of a Cunningham number and a small number, but since the corresponding Cunningham numbers are < 25% factored, these numbers still need primality certificates:

the 151st minimal prime in base 9, 3(0^1158)11, N−1 is 9×S2319(3), thus factor N−1 is equivalent to factor 3^2319+1, and for the factorization of 3^2319+1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=3&Exp=2319&c0=%2B&EN=

the 3187th minimal prime in base 13, (7^1504)1, N−1 is 91×R1504(13), thus factor N−1 is equivalent to factor 13^1504−1, and for the factorization of 13^1504−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=1504&c0=-&EN=

the 2342nd minimal prime in base 16, 9(0^3542)91, N−1 is 144×S3543(16), thus factor N−1 is equivalent to factor 16^3543+1, and for the factorization of 16^3543+1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=16&Exp=3543&c0=%2B&EN=
