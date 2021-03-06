    Synopsis
    --------

    Rince2: The 4x4x4 Gordon-matrix prime counter.

    This program implements a prime-grid counter. In particular, it counts the
    number of unique primes found within a cube of 4 digits along each axis
    (and hence comprising 64 digits). The method of counting the primes
    involves normal "word-search" rules; start in any grid element and
    construct a number by moving in a straight line in any direction.

    Example usage:

        $ cat pgrid
        1 9 3 3    7 1 7 7    1 0 3 1    1 1 3 3
        9 1 4 5    7 4 8 1    5 0 7 8    7 9 1 9
        7 6 9 9    5 6 3 2    2 5 2 1    3 6 9 2
        7 1 9 3    7 8 8 3    3 6 7 1    3 7 1 9
        $ ./rince2 < pgrid > primes
        $ wc primes
            235     235    1012 primes
        $ cat primes
        1429
        17
        1723

        (etc)

    Extra credit will be given to readers who find a 4x4x4 cube with more than
    235 unique primes. I suggest that you don't use this code to do so though!

    Gordon matrices?
    ----------------

    This puzzle was first posed as a 6x6 grid by Gordon Lee in the mid
    80's. Gordon Lee has a column in the monthly Dragon User
    magazine. (Remember: a Dragon is for life, not for Christmas.)

    Gordon's challenge was to find the grid with the most unique primes, or at
    least more primes than anyone else. Each grid element contains exactly one
    digit. The primes are counted by connecting grid elements in straight
    lines (no line wrapping, diagonals and backwards lines count). Eg the 2x2
    grid below contains 11 primes (1, 3, 5, 7, 13, 31, 37, 73, 17, 71, 53).

        1 3
        5 7

    At the time of writing the article Gordon himself had found a grid with
    169 primes, which (cramped with lack of processing power) no readers
    bettered. The same puzzle was then posted to Scientific American (July
    1988) as an open challenge. The response then was a 187 grid matrix (yet
    to be beaten).

    All when and good, but what's this got to do with this obfuscated program?
    Not much really, except that to make things more interested I count the
    primes in a three-dimensional 4x4x4 cube.

    Obfuscation
    -----------

    I've tried to use as many different forms of obfuscations as is possible,
    without going over the size limit.

    These include, but are not restricted to:

    - Deliberate clash of name spaces. Eg 'i' is a typedef and a
      variable. 'I' is a #define, a 1-dimensional array, a 2-dimensional array,
      and an integer.

    - Carefully chosen function names. Not particularly misleading to the
      seasoned C programmer, but hopefully they'll raise a smile.

    - I've tried to produce a nice upwards-stroke in the "FACT" section (which
      does not compute FACTorials) by using L, i, l, I, ], [, ( and ) to
      excess. Goto labels have also been chosen with this system in mind.

    - An array of 10,000 setjmp buffers! All array members may be used. Indeed
      this array forms one of the prime elements of this entry.

    - Total abuse of sensible looping strategies.
      - In the FACT code, I use goto everywhere. Goto labels can also be
        placed in the most intriguing places.
      - The O() function is recursive, but it also uses setjmp and longjmp
        galore to jump out of this recursion.
      - Ever seen a for-switch-for loop? :-) When is continue a valid statement
        within a switch?

    - Dead code. Naturally this program could be shorter, but I have
      deliberately added a few red herrings to make things harder.

    - Misleading indentation. Of course this is trivial to solve using a
      decent C beautifier, but hopefully doing so only leaves the reader
      scratching their head even further.

    - What dimension is the I[] array? It is sometimes accessed with I[x] and
      sometimes with I[x][y] :-)

    - Thoughtful presentation of constants. There's more than one way to
      specify most numbers, and some look rather pretty.
      Eg 11<<11 == 88<<8.


    Problems / Compilation warnings
    -------------------------------

    - No argument checking. The program takes no arguments, but if you argue
      with it it will usually argue back.

    - gcc: "control reaches end of non-void function". This is true in several
      places, including (tut tut) main(). Hence do not trust the return code
      from the program.

    - gcc: "value computed is not used". Oh picky picky! I know the _value_ is
      not used, but the process of finding that value is needed.

    - gcc: "`noreturn' function does return". I'm quite pleased with that
      warning. It stems from overriding some standard ANSI functions, which in
      itself is probably not ANSI.

    - SunPro C: "warning: loop not entered at top". Thanks - just what I
      intended :-)

    - Irix C with "-wlint" really goes for broke with messages such as
      "control may fall through labeled statement",
      "only 9 bits of 'octal' constant (type 'int') are explicitly given",
      "'n' can be const qualified, since it is not set within its lifetime.",
      plus various others (some more serious sounding). I'm rather impressed.
      The worst warnings are of the type "function 'shortjmp' may return
      random value to place of invocation (missing return along some control
      path)", however fixing it requires too many additional characters. I'll
      leave this as a trivial exercise to the reader.


    Lint does a good job of spotting lots of nasties - many deliberate, many
    not. Lint on Digital Unix and Solaris seems to work well. However the SGI
    Irix lint fails. It tells me:

        (68) error: only qualifiers allowed after *
        (68) error: Syntax error before or at: [
        (72) error: Syntax error before or at: _

    Line 68 is perfectly legal code, so I conclude that this is a lint bug.

    
    References
    ----------

    http://www.geocities.com/MotorCity/7983/primesearch.html

    http://www.primepuzzles.net/puzzles/puzz_001.htm
