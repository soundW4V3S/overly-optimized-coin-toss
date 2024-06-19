### overly-optimized-coin-toss
An overly optimized coin toss I made in my free time. Definitely would change a few things, but this is a prototype


## GENERAL INFO:
- The maximum possible number of random generations is (2^16 - 1), due to the type of countMax
- The srand() function is simply used for seeding the rand() function used on line 22, using the current time as a seed
- ^ srand() takes a 4 byte integer as a parameter, further decreasing optimization, but it'll have to do for RNG
- I realize the const char* are 8 bytes, and that leads to unwanted memory usage! I have deeply considered using char types for every bit of text
- Thinking of changing shortZero to a boolean, for 1-byte comparison on if a Heads is generated

## OPTIMIZATIONS:
- 1KB .cpp file
- Compiling an x86 Release version of this on Visual Studio yields a 12KB binary

## THOUGHTS:
- This was pretty fun to make, and I definitely want to come back in a while and do more optimizations

- I got inspiration for this from the book "Algebra and Trigonometry: Structure and Method (Book 2)", by Houghton Mifflin
- On page 738, there is a random example asking those with programming experience to create a coin toss.
- And so I thought, "Hey, Memory was scarce back then! I'll make an overly optimzed coin toss."

- And so here it is. :)

## NOTE:
- I realize this probably seems simple to many people, but this was more just something fun for me to think about, since I love working with binary and understanding little intricate details of C++
