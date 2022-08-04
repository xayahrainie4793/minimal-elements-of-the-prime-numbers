These are the Primo (https://www.rieselprime.de/ziki/Primo) primality certificates (https://en.wikipedia.org/wiki/Primality_certificate, https://primes.utm.edu/glossary/xpage/Certificate.html, https://mathworld.wolfram.com/PrimalityCertificate.html) for the minimal primes > 10^300 in bases 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 30 (local copy from factordb (http://factordb.com/)).

e.g. File "certificate9_149" is the primality certificate for the 149th minimal prime in base 9, i.e. the primality certificate for the prime 7(6^329)2 in base 9.

Primes which either N−1 or N+1 is trivially 100% factored (i.e. primes of the form k×b^n±1, with small k) need not primality certificates, since they can be easily proven primes using N−1 test (https://primes.utm.edu/prove/prove3_1.html) or N+1 test (https://primes.utm.edu/prove/prove3_2.html).

Also the case where N−1 or N+1 is product of a Cunningham number (of the form b^n±1, see https://en.wikipedia.org/wiki/Cunningham_number, https://homes.cerias.purdue.edu/~ssw/cun/index.html, https://maths-people.anu.edu.au/~brent/factors.html, http://myfactors.mooo.com/, https://stdkmd.net/nrr/repunit/repunitnote.htm) and a small number, and this Cunningham number is >= 25% factored (https://en.wikipedia.org/wiki/Integer_factorization, https://www.rieselprime.de/ziki/Factorization, https://mathworld.wolfram.com/PrimeFactorization.html), see the article http://www.ams.org/journals/mcom/1975-29-130/S0025-5718-1975-0384673-1/S0025-5718-1975-0384673-1.pdf for the case that either N−1 or N+1 (or both) can be >= 33.3333% factored, if either N−1 or N+1 (or both) can be >= 25% factored but neither can be >= 33.3333% factored, then we need to use CHG (https://mersenneforum.org/attachment.php?attachmentid=21133&d=1571237465) to prove its primality (see https://mersenneforum.org/showpost.php?p=528149&postcount=3)):

(below, "Rn(b)" means the repunit in base b with length n, i.e. Rn(b) = (b^n−1)/(b−1))

the 3168th minimal prime in base 13, (9^308)1, N−1 is 117×R308(13), thus factor N−1 is equivalent to factor 13^308−1, and for the factorization of 13^308−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=308&c0=-&EN=

the 3179th minimal prime in base 13, (B^563)C, N−1 is 11×R564(13), thus factor N−1 is equivalent to factor 13^564−1, and for the factorization of 13^564−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=564&c0=-&EN=

the 3180th minimal prime in base 13, 1(B^576), N−1 is 23×R576(13), thus factor N−1 is equivalent to factor 13^576−1, and for the factorization of 13^576−1, see http://myfactorcollection.mooo.com:8090/cgi-bin/showSingleEntry?Base=13&Exp=576&c0=-&EN=
