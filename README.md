# UPDATE READ THIS

I forgot that you cannot get the size of an array when you pass it as a parameter in a function, sorry! I have rewritten the functions to use Vectors instead of arrays. They are functionally very similar, except that vectors can increase its size when they are full and you can always retrieve the size of the vector.

You can create an integer vector using `std::vector<int> vectorName = {int1, int2, int3, etc}` where int1, int2, etc are numbers such as 1 or 2. example: `std::vector<int> arr = {0, 1, 2, 3, 4}`. This means that vectors are created with almost the same syntax as an array!

To get the size of your vector, use the function `vectorName.size()`. This line can be parsed into 3 parts: which vector we want to use the function; the . which tells us we want to use a function instead of the vector itself; and size() which is the function we want to use on the vector.

to get the n-th element from your vector you can write `vectorName[n]`, same as an array

# Week37-Loops

Hello again! This week's exercises will be about using loops and arrays. I made tests, but unfortunately my Visual Studio refused to run the tests for this solution specifically. So if the tests don't run, then it is likely a problem with the solution. If any of you figure out why it wouldn't run, then please share how to fix it!

Just like last time, you are done when the tests show green. If the tests don't run, then you can do manual testing by writing code in main()
